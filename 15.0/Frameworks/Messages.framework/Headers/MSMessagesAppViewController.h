// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSMESSAGESAPPVIEWCONTROLLER_H
#define MSMESSAGESAPPVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol MSRootViewControllerProtocol, MSConversationDelegate, MSMessagesAppTranscriptPresentation, _MSMessageComposeExtensionImplProtocol;


#import "MSConversation.h"

@interface MSMessagesAppViewController : UIViewController <MSRootViewControllerProtocol, MSConversationDelegate, MSMessagesAppTranscriptPresentation>



@property (readonly, nonatomic) UIEdgeInsets _balloonMaskEdgeInsets;
@property (retain, nonatomic) MSConversation *activeConversation; // ivar: _activeConversation
@property (retain, nonatomic) NSObject<_MSMessageComposeExtensionImplProtocol> *appContext; // ivar: _appContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGRect initialFrameBeforeAppearance; // ivar: _initialFrameBeforeAppearance
@property (nonatomic) BOOL isReadyForDisplay; // ivar: _isReadyForDisplay
@property (readonly, nonatomic) NSUInteger presentationContext;
@property (readonly, nonatomic) NSUInteger presentationStyle;
@property (readonly) Class superclass;
@property (nonatomic) BOOL viewHasAppeared; // ivar: _viewHasAppeared


-(BOOL)_handleTextInputPayload:(id)arg0 withPayloadID:(id)arg1 ;
-(BOOL)displaysAfterAppearance;
-(struct CGSize )contentSizeThatFits:(struct CGSize )arg0 ;
-(void)_conversation:(id)arg0 didSelectMessage:(id)arg1 ;
-(void)_conversation:(id)arg0 willSelectMessage:(id)arg1 ;
-(void)_didRemoveAssetArchiveWithIdentifier:(id)arg0 ;
-(void)_dismissAndPresentPhotosApp;
-(void)_prepareForPresentationWithCompletionHandler:(id)arg0 ;
-(void)_presentAlertWithTitle:(id)arg0 message:(id)arg1 buttonTitle:(id)arg2 completion:(id)arg3 ;
-(void)_presentAlertWithTitle:(id)arg0 message:(id)arg1 buttonTitle:(id)arg2 destructiveButtonTitle:(id)arg3 completion:(id)arg4 ;
-(void)_setContentOverlayInsets:(struct UIEdgeInsets )arg0 ;
-(void)_validateMessageForSending:(id)arg0 conversation:(id)arg1 associatedText:(id)arg2 completionHandler:(id)arg3 ;
-(void)_validateMessageForSending:(id)arg0 conversation:(id)arg1 completionHandler:(id)arg2 ;
-(void)_volumeButtonPressed:(BOOL)arg0 ;
-(void)contentDidLoad;
-(void)dealloc;
-(void)didBecomeActiveWithConversation:(id)arg0 ;
-(void)didCancelSendingMessage:(id)arg0 conversation:(id)arg1 ;
-(void)didReceiveMessage:(id)arg0 conversation:(id)arg1 ;
-(void)didResignActiveWithConversation:(id)arg0 ;
-(void)didSelectMessage:(id)arg0 conversation:(id)arg1 ;
-(void)didStartSendingMessage:(id)arg0 conversation:(id)arg1 ;
-(void)didTransitionToPresentationStyle:(NSUInteger)arg0 ;
-(void)dismiss;
-(void)requestPresentationStyle:(NSUInteger)arg0 ;
-(void)requestResize;
-(void)setReadyForDisplay;
-(void)updateSnapshotWithCompletionBlock:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewSafeAreaInsetsDidChange;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)willBecomeActiveWithConversation:(id)arg0 ;
-(void)willResignActiveWithConversation:(id)arg0 ;
-(void)willSelectMessage:(id)arg0 conversation:(id)arg1 ;
-(void)willTransitionToPresentationStyle:(NSUInteger)arg0 ;


@end


#endif