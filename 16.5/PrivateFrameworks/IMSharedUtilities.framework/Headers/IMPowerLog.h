// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMPOWERLOG_H
#define IMPOWERLOG_H


#import <Foundation/Foundation.h>


@interface IMPowerLog : NSObject



+(id)sharedInstance;
-(void)logMessageReceivedWithGUID:(id)arg0 fromIdentifier:(id)arg1 toIdentifier:(id)arg2 conversationType:(NSUInteger)arg3 messageType:(NSUInteger)arg4 ;
-(void)logMessageSendFailureWithError:(id)arg0 ;
-(void)logMessageSentWithGUID:(id)arg0 fromIdentifier:(id)arg1 toIdentifier:(id)arg2 conversationType:(NSUInteger)arg3 messageType:(NSUInteger)arg4 sendDuration:(id)arg5 errorCode:(id)arg6 ;


@end


#endif