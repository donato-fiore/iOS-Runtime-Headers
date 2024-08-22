// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSHARINGMESSAGEEXTENSIONAPPVIEWCONTROLLER_H
#define PKSHARINGMESSAGEEXTENSIONAPPVIEWCONTROLLER_H

@class MSMessagesAppViewController, MSMessage, NSString;
@protocol PKMessageExtensionMessageBubbleViewControllerDelegate, PKSharingMessageExtensionRenderer, PKSharingMessageExtensionPresenter;


#import "PKMessageExtensionMessageBubbleViewController.h"

@interface PKSharingMessageExtensionAppViewController : MSMessagesAppViewController <PKMessageExtensionMessageBubbleViewControllerDelegate, PKSharingMessageExtensionRenderer>

 {
    id<PKSharingMessageExtensionPresenter> *_presenter;
    PKMessageExtensionMessageBubbleViewController *_messageBubbleViewController;
    MSMessage *_currentMessage;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *presentationSceneIdentifier;
@property (readonly) Class superclass;


-(id)_viewControllerForPresentationStyle:(NSUInteger)arg0 withConversation:(id)arg1 ;
-(id)init;
-(id)presenterForMessage:(id)arg0 ;
-(struct CGSize )contentSizeThatFits:(struct CGSize )arg0 ;
-(void)_configureCurrentStateForMessage:(id)arg0 ;
-(void)_requestResizeIfNeeded;
-(void)_setContentViewController:(id)arg0 ;
-(void)_validateMessageForSending:(id)arg0 conversation:(id)arg1 associatedText:(id)arg2 completionHandler:(id)arg3 ;
-(void)messageDidUpdate;
-(void)messageExtensionMessageBubbleViewControllerDidTapMessage:(id)arg0 ;
-(void)openAppURL:(id)arg0 ;
-(void)showAlertWithTitle:(id)arg0 message:(id)arg1 button:(id)arg2 ;
-(void)showAlertWithTitle:(id)arg0 message:(id)arg1 button:(id)arg2 destructiveButton:(id)arg3 completion:(id)arg4 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)willBecomeActiveWithConversation:(id)arg0 ;


@end


#endif