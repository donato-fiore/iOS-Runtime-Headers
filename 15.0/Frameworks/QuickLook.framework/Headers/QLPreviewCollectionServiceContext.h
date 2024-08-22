// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QLPREVIEWCOLLECTIONSERVICECONTEXT_H
#define QLPREVIEWCOLLECTIONSERVICECONTEXT_H

@class NSExtensionContext;
@protocol QLPreviewCollectionServiceProtocol, QLPreviewItemProvider;



@interface QLPreviewCollectionServiceContext : NSExtensionContext <QLPreviewCollectionServiceProtocol>

 {
    id<QLPreviewItemProvider> *_itemProvider;
}




+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)_previewCollection;
-(id)_protocolHost;
-(void)actionSheetDidDismiss;
-(void)completeTransition:(BOOL)arg0 withDuration:(CGFloat)arg1 ;
-(void)configureAsAccessoryViewContainerForPreviewCollection:(id)arg0 ;
-(void)configureWithNumberOfItems:(NSInteger)arg0 currentPreviewItemIndex:(NSUInteger)arg1 itemProvider:(id)arg2 stateManager:(id)arg3 ;
-(void)getCurrentPreviewActivityUserInfoWithCompletionHandler:(id)arg0 ;
-(void)getNetworkObserverWithCompletionBlock:(id)arg0 ;
-(void)getPreviewCollectionUUIDWithCompletionHandler:(id)arg0 ;
-(void)hostApplicationDidBecomeActive;
-(void)hostApplicationDidEnterBackground:(BOOL)arg0 ;
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
-(void)setAllowInteractiveTransitions:(BOOL)arg0 ;
-(void)setAppearance:(id)arg0 animated:(BOOL)arg1 ;
-(void)setCurrentPreviewItemIndex:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)setIsContentManaged:(BOOL)arg0 ;
-(void)setLoadingString:(id)arg0 ;
-(void)setNotificationCenter:(id)arg0 ;
-(void)shouldDisplayLockActivityWithCompletionHandler:(id)arg0 ;
-(void)startTransitionWithSourceViewProvider:(id)arg0 transitionController:(id)arg1 presenting:(BOOL)arg2 useInteractiveTransition:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)tearDownTransition:(BOOL)arg0 ;
-(void)toolbarButtonPressedWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)toolbarButtonsForTraitCollection:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)updateTransitionWithProgress:(CGFloat)arg0 ;


@end


#endif