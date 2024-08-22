// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TKMESSAGESEXTENSIONVIEWCONTROLLER_H
#define TKMESSAGESEXTENSIONVIEWCONTROLLER_H

@class MSMessagesAppViewController;



@interface TKMessagesExtensionViewController : MSMessagesAppViewController



-(void)didCancelSendingMessage:(id)arg0 conversation:(id)arg1 ;
-(void)didReceiveMessage:(id)arg0 conversation:(id)arg1 ;
-(void)didResignActiveWithConversation:(id)arg0 ;
-(void)didStartSendingMessage:(id)arg0 conversation:(id)arg1 ;
-(void)didTransitionToPresentationStyle:(NSUInteger)arg0 ;
-(void)willBecomeActiveWithConversation:(id)arg0 ;
-(void)willTransitionToPresentationStyle:(NSUInteger)arg0 ;


@end


#endif