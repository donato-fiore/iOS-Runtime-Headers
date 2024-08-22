// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBFMODALROOTVIEWCONTROLLER_H
#define PBFMODALROOTVIEWCONTROLLER_H

@class UIViewController, UIScene, PRMutablePosterDescriptor, NSString;
@protocol _UISceneComponentProviding, _UISceneSettingsDiffAction, _UISceneBSActionHandler, BSDescriptionProviding, UISheetPresentationControllerDelegate, PBFFocusPosterSelectionViewControllerDelegate, PBFPosterRackCollectionViewControllerDelegate, PREditingSceneViewControllerDelegate, PBFPosterGalleryPreviewViewControllerDelegate, PBFPosterEditingIngestionManagerDelegate, PREditingSceneViewControllerObserver, PRUIModalEntryPoint, BSInvalidatable, PBFBehaviorAssertionProviding;


#import "PBFGalleryMutableDataProvider.h"
#import "PBFPosterExtensionDataStore.h"

@interface PBFModalRootViewController : UIViewController <_UISceneComponentProviding, _UISceneSettingsDiffAction, _UISceneBSActionHandler, BSDescriptionProviding, UISheetPresentationControllerDelegate, PBFFocusPosterSelectionViewControllerDelegate, PBFPosterRackCollectionViewControllerDelegate, PREditingSceneViewControllerDelegate, PBFPosterGalleryPreviewViewControllerDelegate, PBFPosterEditingIngestionManagerDelegate, PREditingSceneViewControllerObserver>

 {
    UIScene *_parentScene;
    BOOL _invalidated;
    BOOL _didAppearOnce;
    PRMutablePosterDescriptor *_temporaryDescriptor;
    id<PRUIModalEntryPoint> *_entryPoint;
    PBFGalleryMutableDataProvider *_galleryDataProvider;
    id<BSInvalidatable> *_snapshotterInUseAssertion;
    id<BSInvalidatable> *_editingSessionInProgressAssertion;
    PBFPosterExtensionDataStore *_dataStore;
    id<PBFBehaviorAssertionProviding> *_behaviorAssertionProvider;
}


@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(struct PREditingSceneViewControllerTopButtonLayout )_topButtonLayout;
+(void)prewarmTopButtonLayout;
-(BOOL)_isPhotosEntryPoint;
-(BOOL)posterRackCollectionViewControllerDidPressDone:(id)arg0 ;
-(id)_actionHandlersForScene:(id)arg0 ;
-(id)_posterLimitExceededAlertWithButtonActionHandler:(id)arg0 ;
-(id)_respondToActions:(id)arg0 forFBSScene:(id)arg1 inUIScene:(id)arg2 fromTransitionContext:(id)arg3 ;
-(id)_settingsDiffActionsForScene:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)galleryViewController:(id)arg0 willUseAnimationController:(id)arg1 forDismissingEditingViewControllerWithAction:(NSInteger)arg2 ;
-(id)initWithScene:(id)arg0 ;
-(id)initWithScene:(id)arg0 dataStore:(id)arg1 behaviorAssertionProvider:(id)arg2 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(struct PREditingSceneViewControllerTopButtonLayout )topButtonLayoutForEditingSceneViewController:(id)arg0 ;
-(struct PREditingSceneViewControllerTopButtonLayout )topButtonLayoutForFocusPosterSelectionViewController:(id)arg0 ;
-(void)_displayViewControllerAsSheet:(id)arg0 ;
-(void)_galleryEditingSceneViewController:(id)arg0 userDidDismissWithAction:(NSInteger)arg1 updatedConfiguration:(id)arg2 updatedConfiguredProperties:(id)arg3 completion:(id)arg4 ;
-(void)_handleSheetDidDismissWithResponse:(id)arg0 ;
-(void)_handleSheetWillDismissWithResponse:(id)arg0 ;
-(void)_logEditWithPosterUUID:(id)arg0 lastModifiedDate:(id)arg1 ;
-(void)_performActionsForUIScene:(id)arg0 withUpdatedFBSScene:(id)arg1 settingsDiff:(id)arg2 fromSettings:(id)arg3 transitionContext:(id)arg4 lifecycleActionType:(unsigned int)arg5 ;
-(void)_presentEditingForNewPosterFromConfiguration:(id)arg0 ;
-(void)_presentEditingForPosterConfiguration:(id)arg0 ;
-(void)_presentGallery;
-(void)_presentLegacyAlert;
-(void)_reload;
-(void)_setupGalleryDataProviderIfNeeded;
-(void)_standaloneEditingSceneViewController:(id)arg0 userDidDismissWithAction:(NSInteger)arg1 updatedConfiguration:(id)arg2 updatedConfiguredProperties:(id)arg3 completion:(id)arg4 ;
-(void)dataStoreDidTearDown:(id)arg0 ;
-(void)dealloc;
-(void)editingIngestionManager:(id)arg0 didAccept:(id)arg1 userChoice:(NSInteger)arg2 ;
-(void)editingSceneViewController:(id)arg0 userDidDismissWithAction:(NSInteger)arg1 updatedConfiguration:(id)arg2 updatedConfiguredProperties:(id)arg3 completion:(id)arg4 ;
-(void)editingSceneViewControllerDidFinalize:(id)arg0 ;
-(void)focusPosterSelectionViewController:(id)arg0 didDismissWithResponse:(id)arg1 ;
-(void)focusPosterSelectionViewController:(id)arg0 willDismissWithResponse:(id)arg1 ;
-(void)galleryViewController:(id)arg0 didSelectPreview:(id)arg1 fromPreviewView:(id)arg2 ;
-(void)galleryViewController:(id)arg0 willDisplayPreview:(id)arg1 ;
-(void)invalidate;
-(void)posterExtensionDataStore:(id)arg0 didUpdateGalleryConfiguration:(id)arg1 ;
-(void)posterRackCollectionViewControllerDidPressCancel:(id)arg0 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)presentationControllerWillDismiss:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif