// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBFGALLERYVIEWCONTROLLER_H
#define PBFGALLERYVIEWCONTROLLER_H

@class UIViewController, UIAction, UIBarButtonItem, NSString;
@protocol PBFPosterExtensionDataStoreObserver, PBFPosterGalleryPreviewViewControllerDelegate, PREditingSceneViewControllerDelegate, BSInvalidatable;


#import "PBFPosterGalleryPreviewViewController.h"
#import "PBFPosterExtensionDataStoreXPCServiceGlue.h"
#import "PBFGalleryMutableDataProvider.h"

@interface PBFGalleryViewController : UIViewController <PBFPosterExtensionDataStoreObserver, PBFPosterGalleryPreviewViewControllerDelegate, PREditingSceneViewControllerDelegate>

 {
    PBFPosterGalleryPreviewViewController *_previewViewController;
    PBFPosterExtensionDataStoreXPCServiceGlue *_glue;
    PBFGalleryMutableDataProvider *_dataProvider;
    UIAction *_renderingAction;
    UIAction *_previewingAction;
    UIAction *_editingAction;
    UIBarButtonItem *_environmentItem;
    id<BSInvalidatable> *_inUseAssertion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(struct PREditingSceneViewControllerTopButtonLayout )topButtonLayoutForEditingSceneViewController:(id)arg0 ;
-(void)_fetchNewGalleryFromProactive:(NSUInteger)arg0 ;
-(void)_reload;
-(void)_reloadGalleryUsingProactive:(id)arg0 ;
-(void)_selectEditingEnvironment;
-(void)_selectPreviewingEnvironment;
-(void)_selectRenderingEnvironment;
-(void)_setupDataProvider;
-(void)dealloc;
-(void)editingSceneViewController:(id)arg0 userDidDismissWithAction:(NSInteger)arg1 updatedConfiguration:(id)arg2 updatedConfiguredProperties:(id)arg3 completion:(id)arg4 ;
-(void)galleryViewController:(id)arg0 didSelectPreview:(id)arg1 fromPreviewView:(id)arg2 ;
-(void)galleryViewController:(id)arg0 willDisplayPreview:(id)arg1 ;
-(void)posterExtensionDataStore:(id)arg0 didUpdateGalleryConfiguration:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif