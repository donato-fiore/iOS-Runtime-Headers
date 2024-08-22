// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXONEUPPRESENTATION_H
#define PXONEUPPRESENTATION_H

@class NSArray, UIContextMenuInteraction, NSMapTable, UIViewController, NSString, UITargetedPreview, UIScrollView;
@protocol UIContextMenuInteractionDelegate, PXOneUpPresentationImplementationDelegate, PXOneUpPresentationDelegate, PXAssetImportStatusManager;

#import <Foundation/Foundation.h>

#import "PXAssetActionManager.h"
#import "PXAssetsDataSourceManager.h"
#import "PXAssetReference.h"
#import "PXUIMediaProvider.h"
#import "PXPhotosDetailsContext.h"
#import "PXContentPrivacyController.h"

@interface PXOneUpPresentation : NSObject <UIContextMenuInteractionDelegate>

 {
    ? _delegateFlags;
    ? _implementationDelegateFlags;
}


@property (weak, nonatomic, setter=_setImplementationDelegate:) NSObject<PXOneUpPresentationImplementationDelegate> *_implementationDelegate; // ivar: __implementationDelegate
@property (readonly, nonatomic) NSInteger actionContext;
@property (readonly, nonatomic) PXAssetActionManager *actionManager;
@property (readonly, nonatomic) PXAssetActionManager *actionManagerForPreviewing;
@property (readonly, nonatomic) NSArray *assetUUIDsAllowedToHighlightText;
@property (readonly, nonatomic) BOOL canStart;
@property (readonly, nonatomic) BOOL canStop;
@property (readonly, nonatomic) UIContextMenuInteraction *contextMenuInteraction; // ivar: _contextMenuInteraction
@property (retain, nonatomic) NSMapTable *contextMenuStateByConfiguration; // ivar: _contextMenuStateByConfiguration
@property (retain, nonatomic) UIViewController *currentPreviewViewController; // ivar: _currentPreviewViewController
@property (readonly, nonatomic) PXAssetsDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXOneUpPresentationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PXOneUpPresentationImplementationDelegate> *implementationDelegate; // ivar: _implementationDelegate
@property (readonly, nonatomic) NSObject<PXAssetImportStatusManager> *importStatusManager;
@property (readonly, nonatomic) PXAssetReference *initialAssetReference;
@property (retain, nonatomic) UITargetedPreview *interactionTargetedPreview; // ivar: _interactionTargetedPreview
@property (readonly, nonatomic) BOOL isContextMenuInteractionActive;
@property (readonly, nonatomic) PXAssetReference *lastViewedAssetReference;
@property (readonly, nonatomic) NSArray *matchedQueryStrings;
@property (readonly, nonatomic) PXUIMediaProvider *mediaProvider;
@property (readonly, nonatomic) NSInteger origin;
@property (weak, nonatomic) UIViewController *originalPresentingViewController; // ivar: _originalPresentingViewController
@property (readonly, nonatomic) PXPhotosDetailsContext *photosDetailsContext;
@property (readonly, weak, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (readonly, nonatomic) BOOL preventShowInAllPhotosAction;
@property (readonly, nonatomic) PXContentPrivacyController *privacyController;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (readonly, nonatomic) BOOL shouldAutoPlay;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL wantsShowInLibraryButton;


+(id)navigationControllerWithRootViewController:(id)arg0 ;
-(BOOL)canStartAnimated:(BOOL)arg0 ;
-(BOOL)handlePresentingPinchGestureRecognizer:(id)arg0 ;
-(BOOL)startWithConfigurationHandler:(id)arg0 ;
-(id)_contextMenuInteraction:(id)arg0 accessoriesForMenuWithConfiguration:(id)arg1 ;
-(id)_contextMenuInteraction:(id)arg0 styleForMenuWithConfiguration:(id)arg1 ;
-(id)_dci_contextMenuInteraction:(id)arg0 previewForDismissingToSecondaryItemWithIdentifier:(id)arg1 configuration:(id)arg2 ;
-(id)_dci_contextMenuInteraction:(id)arg0 previewForHighlightingSecondaryItemWithIdentifier:(id)arg1 configuration:(id)arg2 ;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForDismissingMenuWithConfiguration:(id)arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForHighlightingMenuWithConfiguration:(id)arg1 ;
-(id)currentImageForAssetReference:(id)arg0 ;
-(id)init;
-(id)initWithPresentingViewController:(id)arg0 ;
-(id)previewViewControllerAllowingActions:(BOOL)arg0 ;
-(id)regionOfInterestForAssetReference:(id)arg0 ;
-(void)_updateImplementationDelegate;
-(void)commitPreviewViewController:(id)arg0 ;
-(void)contextMenuInteraction:(id)arg0 willEndForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg0 willPerformPreviewActionForMenuWithConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)didDismissPreviewViewController:(id)arg0 committing:(BOOL)arg1 ;
-(void)invalidatePresentingGeometry;
-(void)presentingViewControllerViewDidAppear:(BOOL)arg0 ;
-(void)presentingViewControllerViewDidDisappear:(BOOL)arg0 ;
-(void)presentingViewControllerViewWillAppear:(BOOL)arg0 ;
-(void)presentingViewControllerViewWillDisappear:(BOOL)arg0 ;
-(void)preventTargetedContextMenuDismissalAnimation;
-(void)scrollAssetReferenceToVisible:(id)arg0 ;
-(void)setHiddenAssetReferences:(id)arg0 ;
-(void)stopAnimated:(BOOL)arg0 ;
-(void)waitUntilPresentationCanStartAnimated:(BOOL)arg0 completionHandler:(id)arg1 ;


@end


#endif