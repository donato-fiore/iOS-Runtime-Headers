// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DCDOCUMENTEDITORVIEWCONTROLLER_H
#define DCDOCUMENTEDITORVIEWCONTROLLER_H

@class UINavigationController, NSString, UIImage, NSIndexPath, UIView;
@protocol ICDocCamExtractedDocumentControllerDelegate, ICDocCamViewControllerDelegate, ICRemoteDocCamViewControllerDelegate, UINavigationControllerDelegate, UIViewControllerTransitioningDelegate, DCDocumentEditorViewControllerDelegate;


#import "ICDocCamDocumentInfoCollection.h"
#import "ICDocCamExtractedDocumentViewController.h"
#import "ICDocCamImageCache.h"
#import "VNDocumentCameraScan.h"

@interface DCDocumentEditorViewController : UINavigationController <ICDocCamExtractedDocumentControllerDelegate, ICDocCamViewControllerDelegate, ICRemoteDocCamViewControllerDelegate, UINavigationControllerDelegate, UIViewControllerTransitioningDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<DCDocumentEditorViewControllerDelegate> *docCamDelegate; // ivar: _docCamDelegate
@property (retain, nonatomic) ICDocCamDocumentInfoCollection *docInfoCollection; // ivar: _docInfoCollection
@property (retain, nonatomic) ICDocCamExtractedDocumentViewController *extractedDocumentController; // ivar: _extractedDocumentController
@property (retain, nonatomic) UIImage *filteredImageForRecrop; // ivar: _filteredImageForRecrop
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) ICDocCamImageCache *imageCache; // ivar: _imageCache
@property (retain, nonatomic) NSIndexPath *indexPathForRecrop; // ivar: _indexPathForRecrop
@property (nonatomic) NSInteger orientationForRecrop; // ivar: _orientationForRecrop
@property (retain, nonatomic) VNDocumentCameraScan *scannedDocument; // ivar: _scannedDocument
@property (retain, nonatomic) UIView *sourceViewForZoomTransition; // ivar: _sourceViewForZoomTransition
@property (readonly) Class superclass;
@property (retain, nonatomic) UIImage *unfilteredImageForRecrop; // ivar: _unfilteredImageForRecrop
@property (nonatomic) BOOL useCustomRecropTransition; // ivar: _useCustomRecropTransition


+(BOOL)isAvailable;
+(id)activityTypeOrder;
+(id)docInfoCollectionFromScannedDocument:(id)arg0 imageCache:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(BOOL)documentCameraController:(id)arg0 canAddImages:(NSUInteger)arg1 ;
-(id)documentCameraControllerCreateDataCryptorIfNecessary;
-(id)extractedDocumentControllerMarkupModelDataForDocument:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 scannedDocument:(id)arg1 ;
-(id)initWithNavigationBarClass:(Class)arg0 toolbarClass:(Class)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithRootViewController:(id)arg0 ;
-(id)navigationController:(id)arg0 animationControllerForOperation:(NSInteger)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 ;
-(id)scanDataDelegateWithIdentifier:(id)arg0 ;
-(void)_autoDismiss;
-(void)didReceiveMemoryWarning;
-(void)documentCameraController:(id)arg0 didFinishWithDocInfoCollection:(id)arg1 imageCache:(id)arg2 warnUser:(BOOL)arg3 ;
-(void)documentCameraController:(id)arg0 didFinishWithDocInfoCollection:(id)arg1 imageCache:(id)arg2 warnUser:(BOOL)arg3 closeViewController:(BOOL)arg4 ;
-(void)documentCameraControllerDidCancel:(id)arg0 ;
-(void)extractedDocumentController:(id)arg0 didTapRecrop:(id)arg1 index:(NSInteger)arg2 ;
-(void)extractedDocumentController:(id)arg0 shareDocument:(id)arg1 sender:(id)arg2 ;
-(void)extractedDocumentControllerDidChangeTitle:(id)arg0 ;
-(void)extractedDocumentControllerDidSelectCopyFromMenuForDocument:(id)arg0 ;
-(void)extractedDocumentControllerDidSelectShareFromMenuForDocument:(id)arg0 sourceRect:(struct CGRect )arg1 sourceView:(id)arg2 ;
-(void)extractedDocumentControllerDidTapDone:(NSUInteger)arg0 ;
-(void)extractedDocumentControllerDidTapDone:(NSUInteger)arg0 scanDataDelegate:(id)arg1 ;
-(void)extractedDocumentControllerDidTapRetake:(NSUInteger)arg0 ;
-(void)extractedDocumentControllerDiscardMarkupModelDataForDocument:(id)arg0 ;
-(void)remoteDocumentCameraController:(id)arg0 didFailWithError:(id)arg1 ;
-(void)remoteDocumentCameraController:(id)arg0 didFinishWithInfoCollection:(id)arg1 ;
-(void)remoteDocumentCameraControllerDidCancel:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif