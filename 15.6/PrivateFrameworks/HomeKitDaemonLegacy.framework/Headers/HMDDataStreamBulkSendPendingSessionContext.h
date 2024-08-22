// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDDATASTREAMBULKSENDPENDINGSESSIONCONTEXT_H
#define HMDDATASTREAMBULKSENDPENDINGSESSIONCONTEXT_H

@class HMFTimer;

#import <Foundation/Foundation.h>


@interface HMDDataStreamBulkSendPendingSessionContext : NSObject

@property (retain) HMFTimer *handleOpenRequestResponseTimer; // ivar: _handleOpenRequestResponseTimer
@property (retain) HMFTimer *sendCloseEventTimer; // ivar: _sendCloseEventTimer
@property (readonly) id *sessionStartCallback; // ivar: _sessionStartCallback
@property (readonly) BOOL shouldCloseSessionWithTimeoutReason;


// -(id)initWithSessionStartCallback:(id)arg0 handleOpenRequestResponseTimer:(unk)arg1 sendCloseEventTimer:(id)arg2  ;


@end


#endif