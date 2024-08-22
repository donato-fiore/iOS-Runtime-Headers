// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MSMESSAGEAPPEXTENSIONCONTEXT_H
#define _MSMESSAGEAPPEXTENSIONCONTEXT_H

@class NSExtensionContext, NSString, UIViewController;
@protocol _MSMessageComposeExtensionImplProtocol, _MSMessageComposeHostImplProtocol;


#import "MSConversation.h"

@interface _MSMessageAppExtensionContext : NSExtensionContext <_MSMessageComposeExtensionImplProtocol>



@property (retain, nonatomic) MSConversation *activeConversation; // ivar: _activeConversation
@property (retain, nonatomic) NSObject<_MSMessageComposeExtensionImplProtocol> *containingContext; // ivar: _containingContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<_MSMessageComposeHostImplProtocol> *hostContext; // ivar: _hostContext
@property (readonly, nonatomic) CGRect initialFrameOfHostView; // ivar: _initialFrameOfHostView
@property (nonatomic) NSUInteger presentationContext; // ivar: _presentationContext
@property (nonatomic) NSUInteger presentationStyle; // ivar: _presentationStyle
@property (readonly, nonatomic) *__CFRunLoopObserver principalObjectCreationObserver; // ivar: _principalObjectCreationObserver
@property (readonly, weak, nonatomic) UIViewController *stickerViewController;
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) UIViewController *viewController;


+(id)_allowedItemPayloadClasses;
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionContextHostProtocolAllowedClassesForItems;
-(id)initWithInputItems:(id)arg0 listenerEndpoint:(id)arg1 contextUUID:(id)arg2 ;
-(id)remoteProxy;
-(void)_becomeActiveWithConversationState:(id)arg0 presentationState:(id)arg1 ;
-(void)_canSendMessage:(id)arg0 conversationState:(id)arg1 associatedText:(id)arg2 completion:(id)arg3 ;
-(void)_conversationDidChangeWithConversationState:(id)arg0 ;
-(void)_didCancelSendingMessage:(id)arg0 conversationState:(id)arg1 ;
-(void)_didReceiveMessage:(id)arg0 conversationState:(id)arg1 ;
-(void)_didRemoveAssetArchiveWithIdentifier:(id)arg0 ;
-(void)_didStartSendingMessage:(id)arg0 conversationState:(id)arg1 ;
-(void)_handlePrincipalObjectCreated;
-(void)_handleTextInputPayload:(id)arg0 withPayloadID:(id)arg1 completion:(id)arg2 ;
-(void)_hostDidBeginDeferredTeardown;
-(void)_installPrincipalObjectObserver;
-(void)_prepareForPresentationWithCompletionHandler:(id)arg0 ;
-(void)_presentationDidChangeToPresentationState:(id)arg0 ;
-(void)_presentationWillChangeToPresentationState:(id)arg0 ;
-(void)_remoteViewDidBecomeReadyForDisplay;
-(void)_requestContentSizeThatFits:(id)arg0 presentationStyle:(id)arg1 completionHandler:(id)arg2 ;
-(void)_requestSnapshotWithCompletion:(id)arg0 ;
-(void)_resignActive;
-(void)_uninstallPrincipalObjectObserverIfNeeded;
-(void)_volumeButtonPressed:(BOOL)arg0 ;
-(void)beginDisablingUserInteraction;
-(void)contentDidLoad;
-(void)dealloc;
-(void)dismiss;
-(void)dismissAndPresentPhotosApp;
-(void)dismissToKeyboard:(BOOL)arg0 ;
-(void)dragMediaItemCanceled;
-(void)dragMediaItemMoved:(id)arg0 frameInRemoteView:(struct CGRect )arg1 rotation:(CGFloat)arg2 scale:(CGFloat)arg3 completionHandler:(id)arg4 ;
-(void)endDisablingUserInteraction;
-(void)openURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)presentAlertSheetWith:(id)arg0 styles:(id)arg1 completion:(id)arg2 ;
-(void)presentAlertWithTitle:(id)arg0 message:(id)arg1 buttonTitle:(id)arg2 completion:(id)arg3 ;
-(void)presentAlertWithTitle:(id)arg0 message:(id)arg1 buttonTitle:(id)arg2 destructiveButtonTitle:(id)arg3 completion:(id)arg4 ;
-(void)removeAssetArchiveWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)requestHostSceneIdentifierWithCompletion:(id)arg0 ;
-(void)requestPresentationStyle:(NSUInteger)arg0 ;
-(void)requestPresentationStyleExpanded:(BOOL)arg0 ;
-(void)requestResize;
-(void)stageAppItem:(id)arg0 skipShelf:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)stageAssetArchive:(id)arg0 skipShelf:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)stageMediaItem:(id)arg0 skipShelf:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)stageRichLink:(id)arg0 skipShelf:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)startDragMediaItem:(id)arg0 frameInRemoteView:(struct CGRect )arg1 fence:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif