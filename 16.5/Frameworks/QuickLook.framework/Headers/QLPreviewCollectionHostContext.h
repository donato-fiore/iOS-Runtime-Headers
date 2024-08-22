// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QLPREVIEWCOLLECTIONHOSTCONTEXT_H
#define QLPREVIEWCOLLECTIONHOSTCONTEXT_H

@class NSExtensionContext, NSString;
@protocol QLPreviewCollectionServiceProtocol, QLPreviewCollectionHostProtocol;



@interface QLPreviewCollectionHostContext : NSExtensionContext <QLPreviewCollectionServiceProtocol, QLPreviewCollectionHostProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)_protocolService;
-(id)_protocolServiceWithErrorHandler:(id)arg0 ;
-(id)_synchronousProtocolServiceWithErrorHandler:(id)arg0 ;
-(void)actionSheetDidDismiss;
-(void)configureAsAccessoryViewContainerForPreviewCollection:(id)arg0 ;
-(void)configureWithNumberOfItems:(NSInteger)arg0 currentPreviewItemIndex:(NSUInteger)arg1 itemProvider:(id)arg2 stateManager:(id)arg3 ;
-(void)documentMenuActionWillBegin;
-(void)getNetworkObserverWithCompletionBlock:(id)arg0 ;
-(void)getPreviewCollectionUUIDWithCompletionHandler:(id)arg0 ;
-(void)hostApplicationDidBecomeActive;
-(void)hostApplicationDidEnterBackground:(BOOL)arg0 ;
-(void)hostSceneWillDeactivate;
-(void)hostViewControlerTransitionToState:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)invalidateService;
-(void)keyCommandWasPerformed:(id)arg0 ;
-(void)keyCommandsWithCompletionHandler:(id)arg0 ;
-(void)notifyFirstTimeAppearanceWithActions:(NSUInteger)arg0 ;
-(void)notifyStateRestorationUserInfo:(id)arg0 ;
-(void)overrideParentApplicationDisplayIdentifierWithIdentifier:(id)arg0 ;
-(void)prepareForActionSheetPresentationWithCompletionHandler:(id)arg0 ;
-(void)preparePreviewCollectionForInvalidationWithCompletionHandler:(id)arg0 ;
-(void)requestLockForCurrentItem;
-(void)saveCurrentPreviewEditsSynchronously:(BOOL)arg0 withCompletionHandler:(id)arg1 ;
-(void)saveIntoPhotoLibraryMediaWithURLWrapper:(id)arg0 previewItemType:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)setAllowInteractiveTransitions:(BOOL)arg0 ;
-(void)setAppearance:(id)arg0 animated:(BOOL)arg1 ;
-(void)setCurrentPreviewItemIndex:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)setIsContentManaged:(BOOL)arg0 ;
-(void)setLoadingString:(id)arg0 ;
-(void)setNotificationCenter:(id)arg0 ;
-(void)setPreviewItemDisplayState:(id)arg0 onItemAtIndex:(NSUInteger)arg1 ;
-(void)setScreenEdgePanWidth:(CGFloat)arg0 ;
-(void)shouldDisplayLockActivityWithCompletionHandler:(id)arg0 ;
-(void)startTransitionWithSourceViewProvider:(id)arg0 transitionController:(id)arg1 presenting:(BOOL)arg2 useInteractiveTransition:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)tearDownTransition:(BOOL)arg0 ;
-(void)toolbarButtonPressedWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)toolbarButtonsForTraitCollection:(id)arg0 withCompletionHandler:(id)arg1 ;


@end


#endif