// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HDREMOTEAUTHORIZATIONRECORD_H
#define _HDREMOTEAUTHORIZATIONRECORD_H

@class HKAuthorizationRequestRecord;

#import <Foundation/Foundation.h>


@interface _HDRemoteAuthorizationRecord : NSObject {
    HKAuthorizationRequestRecord *_record;
    id *_requestSentHandler;
    id *_requestFinishedHandler;
}






@end


#endif