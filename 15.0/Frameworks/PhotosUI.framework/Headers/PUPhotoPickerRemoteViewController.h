// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUPHOTOPICKERREMOTEVIEWCONTROLLER_H
#define PUPHOTOPICKERREMOTEVIEWCONTROLLER_H

@class UIViewController, NSLayoutConstraint, NSString, NSArray, NSDictionary;
@protocol PUPhotoPickerRemoteNavigationControllerDelegate, NSExtensionRequestHandling, PUPhotoPicker, PUPhotoPickerTestSupportHandler;


#import "PUAssetPickerCoordinator.h"
#import "PUPhotoPickerRemoteNavigationController.h"
#import "PUPhotoPickerExtensionContext.h"
#import "PUPhotoPickerRemoteViewControllerRequestOptions.h"

@interface PUPhotoPickerRemoteViewController : UIViewController <PUPhotoPickerRemoteNavigationControllerDelegate, NSExtensionRequestHandling, PUPhotoPicker, PUPhotoPickerTestSupportHandler>



@property (readonly, nonatomic) BOOL allowsMultipleSelection;
@property (retain, nonatomic) PUAssetPickerCoordinator *assetPickerCoordinator; // ivar: _assetPickerCoordinator
@property (retain, nonatomic) NSLayoutConstraint *bottomConstraint; // ivar: _bottomConstraint
@property (retain, nonatomic) PUPhotoPickerRemoteNavigationController *contentNavigationController; // ivar: _contentNavigationController
@property (retain, nonatomic) UIViewController *contentViewController; // ivar: _contentViewController
@property (readonly, nonatomic) BOOL convertAutoloopsToGIF;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) PUPhotoPickerExtensionContext *extensionContext; // ivar: _extensionContext
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSLayoutConstraint *leadingConstraint; // ivar: _leadingConstraint
@property (retain, nonatomic) NSLayoutConstraint *leadingSafeAreaConstraint; // ivar: _leadingSafeAreaConstraint
@property (readonly, nonatomic) NSArray *mediaTypes;
@property (readonly, nonatomic) NSUInteger multipleSelectionLimit;
@property (retain, nonatomic) PUPhotoPickerRemoteViewControllerRequestOptions *options; // ivar: _options
@property (readonly, nonatomic) NSDictionary *properties;
@property (readonly, nonatomic) BOOL requiresPickingConfirmation;
@property (readonly, nonatomic) NSUInteger savingOptions;
@property (readonly, nonatomic) BOOL showsFileSizePicker;
@property (readonly, nonatomic) BOOL showsPrompt;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSLayoutConstraint *topConstraint; // ivar: _topConstraint
@property (retain, nonatomic) NSLayoutConstraint *trailingConstraint; // ivar: _trailingConstraint
@property (retain, nonatomic) NSLayoutConstraint *trailingSafeAreaConstraint; // ivar: _trailingSafeAreaConstraint


+(void)initialize;
-(void)_allowSharingSelectionOfInfoDictionaries:(id)arg0 completion:(id)arg1 ;
-(void)_handlePerformTraitCollectionUpdateUsingData:(id)arg0 completion:(id)arg1 ;
-(void)_handleViewControllerRequestWithOptions:(id)arg0 error:(id)arg1 ;
-(void)_loadContentViewIfNeeded;
-(void)_logAssetSelectionIfNeeded:(id)arg0 ;
-(void)_setPhotoPickerInViewController:(id)arg0 ;
-(void)beginRequestWithExtensionContext:(id)arg0 ;
-(void)cancelPhotoPicker;
-(void)didDisplayPhotoPickerPreview;
-(void)didDisplayPhotoPickerSourceType:(NSInteger)arg0 ;
-(void)didSelectMediaWithInfoDictionary:(id)arg0 allowedHandler:(id)arg1 ;
-(void)didSelectMultipleMediaItemsWithInfoDictionaries:(id)arg0 ;
-(void)loadView;
-(void)performPhotoPickerPreviewOfFirstAsset;
-(void)performPhotosSelection;
-(void)performTraitCollectionUpdateUsingData:(id)arg0 completion:(id)arg1 ;
-(void)photoPickerRemoteNavigationController:(id)arg0 viewControllerToPush:(id)arg1 ;
-(void)presentViewController:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateViewConstraints;
-(void)viewWillLayoutSubviews;


@end


#endif