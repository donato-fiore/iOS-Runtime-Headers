// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDREMOTEROUTINEREQUESTCONTEXT_H
#define HDREMOTEROUTINEREQUESTCONTEXT_H


#import <Foundation/Foundation.h>

#import "HDCodableRoutineRequestMessage.h"

@interface HDRemoteRoutineRequestContext : NSObject {
    HDCodableRoutineRequestMessage *_request;
    id *_completion;
}






@end


#endif