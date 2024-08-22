// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CTMESSAGECENTER_H
#define CTMESSAGECENTER_H


#import <Foundation/Foundation.h>


@interface CTMessageCenter : NSObject



+(id)sharedMessageCenter;
-(BOOL)getCharacterCount:(*NSInteger)arg0 andMessageSplitThreshold:(*NSInteger)arg1 forSmsText:(id)arg2 ;
-(BOOL)getCharacterCountForSub:(id)arg0 count:(*NSInteger)arg1 andMessageSplitThreshold:(*NSInteger)arg2 forSmsText:(id)arg3 ;
-(BOOL)isMmsConfigured;
-(BOOL)isMmsConfiguredForSub:(id)arg0 ;
-(BOOL)isMmsEnabled;
-(BOOL)isMmsEnabledForSub:(id)arg0 ;
-(BOOL)sendBinarySMS:(id)arg0 trackingID:(*unsigned int)arg1 ;
-(BOOL)sendSMSWithText:(id)arg0 serviceCenter:(id)arg1 toAddress:(id)arg2 ;
-(BOOL)sendSMSWithText:(id)arg0 serviceCenter:(id)arg1 toAddress:(id)arg2 trackingID:(*unsigned int)arg3 ;
-(BOOL)sendSMSWithText:(id)arg0 serviceCenter:(id)arg1 toAddress:(id)arg2 withID:(unsigned int)arg3 ;
-(BOOL)sendSMSWithText:(id)arg0 serviceCenter:(id)arg1 toAddress:(id)arg2 withMoreToFollow:(BOOL)arg3 withID:(unsigned int)arg4 ;
-(BOOL)sendSMSWithText:(id)arg0 text:(id)arg1 serviceCenter:(id)arg2 toAddress:(id)arg3 ;
-(BOOL)sendSMSWithText:(id)arg0 text:(id)arg1 serviceCenter:(id)arg2 toAddress:(id)arg3 trackingID:(*unsigned int)arg4 ;
-(BOOL)sendSMSWithText:(id)arg0 text:(id)arg1 serviceCenter:(id)arg2 toAddress:(id)arg3 withID:(unsigned int)arg4 ;
-(BOOL)sendSMSWithText:(id)arg0 text:(id)arg1 serviceCenter:(id)arg2 toAddress:(id)arg3 withMoreToFollow:(BOOL)arg4 withID:(unsigned int)arg5 ;
-(BOOL)simulateDeferredMessage;
-(BOOL)simulateSmsReceived:(id)arg0 ;
-(id)allIncomingMessages;
-(id)decodeMessage:(id)arg0 ;
-(id)encodeMessage:(id)arg0 ;
-(id)incomingMessageWithId:(unsigned int)arg0 ;
-(id)init;
-(int)incomingMessageCount;
-(struct ? )isDeliveryReportsEnabled:(*BOOL)arg0 ;
-(struct ? )isMmsEnabledForSub:(id)arg0 enabled:(*BOOL)arg1 ;
-(struct ? )send:(id)arg0 ;
-(struct ? )send:(id)arg0 withMoreToFollow:(BOOL)arg1 ;
-(struct ? )sendMMS:(id)arg0 ;
-(struct ? )sendMMSFromData:(id)arg0 messageId:(unsigned int)arg1 subSlot:(NSInteger)arg2 ;
-(struct ? )sendSMS:(id)arg0 withMoreToFollow:(BOOL)arg1 trackingID:(*unsigned int)arg2 ;
-(void)acknowledgeIncomingMessageWithId:(unsigned int)arg0 ;
-(void)acknowledgeOutgoingMessageWithId:(unsigned int)arg0 ;
-(void)addMessageOfType:(int)arg0 toArray:(id)arg1 withIdsFromArray:(id)arg2 ;
-(void)dealloc;
-(void)emergencySessionIntentEnd:(id)arg0 ;
-(void)emergencySessionIntentStart:(id)arg0 ;
-(void)sendMessageAsSmsToShortCodeRecipients:(id)arg0 andReplaceData:(*id)arg1 ;
-(void)setDeliveryReportsEnabled:(BOOL)arg0 ;


@end


#endif