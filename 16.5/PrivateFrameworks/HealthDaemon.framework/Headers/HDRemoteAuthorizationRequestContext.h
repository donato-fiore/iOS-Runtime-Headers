// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDREMOTEAUTHORIZATIONREQUESTCONTEXT_H
#define HDREMOTEAUTHORIZATIONREQUESTCONTEXT_H

@class HKAuthorizationRequestRecord;

#import <Foundation/Foundation.h>


@interface HDRemoteAuthorizationRequestContext : NSObject {
    HKAuthorizationRequestRecord *_requestRecord;
    id *_requestSentHandler;
    id *_completion;
}






@end


#endif