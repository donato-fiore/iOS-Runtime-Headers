// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPHOTOKITASSETCOLLECTIONSHAREDALBUMOPTIONSACTIONPERFORMER_H
#define PXPHOTOKITASSETCOLLECTIONSHAREDALBUMOPTIONSACTIONPERFORMER_H

@class NSString;
@protocol PXAlbumStreamingOptionsViewControllerDelegate, UIPopoverPresentationControllerDelegate;


#import "PXPhotoKitAssetCollectionActionPerformer.h"
#import "PXAlbumStreamingOptionsViewController.h"

@interface PXPhotoKitAssetCollectionSharedAlbumOptionsActionPerformer : PXPhotoKitAssetCollectionActionPerformer <PXAlbumStreamingOptionsViewControllerDelegate, UIPopoverPresentationControllerDelegate>

 {
    PXAlbumStreamingOptionsViewController *_presentedOptionsController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)canPerformOnAssetCollectionReference:(id)arg0 withInputs:(id)arg1 ;
+(id)localizedTitleForUseCase:(NSUInteger)arg0 assetCollectionReference:(id)arg1 withInputs:(id)arg2 ;
+(id)systemImageNameForAssetCollectionReference:(id)arg0 withInputs:(id)arg1 ;
-(BOOL)_shouldDismissOptionsForReason:(int)arg0 ;
-(void)albumStreamingOptionsViewController:(id)arg0 didCompleteWithReason:(int)arg1 ;
-(void)performUserInteractionTask;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg0 ;
-(void)presentationController:(id)arg0 willPresentWithAdaptiveStyle:(NSInteger)arg1 transitionCoordinator:(id)arg2 ;


@end


#endif