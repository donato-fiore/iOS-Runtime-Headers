// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CATSENDSERIALIDSMESSAGESOPERATION_H
#define CATSENDSERIALIDSMESSAGESOPERATION_H

@class NSArray, NSString;
@protocol CATIDSPrimitives, OS_dispatch_queue;


#import "CATOperation.h"
#import "CATIDSMessageOptions.h"

@interface CATSendSerialIDSMessagesOperation : CATOperation {
    id<CATIDSPrimitives> *mPrimitives;
    NSObject<OS_dispatch_queue> *mWorkQueue;
    NSArray *mMessages;
    NSString *mDestinationAddress;
    NSString *mSourceAppleID;
    CATIDSMessageOptions *mOptions;
    os_unfair_lock_s mLock;
}




-(BOOL)isAsynchronous;
-(id)initWithIDSPrimitives:(id)arg0 workQueue:(id)arg1 messages:(id)arg2 destinationAddress:(id)arg3 sourceAppleID:(id)arg4 options:(id)arg5 ;
-(void)didSendMessagesWithError:(id)arg0 ;
-(void)main;
-(void)sendMessages;


@end


#endif