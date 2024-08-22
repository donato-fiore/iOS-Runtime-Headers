// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUPXPHOTOKITSLIDESHOWASSETACTIONPERFORMER_H
#define PUPXPHOTOKITSLIDESHOWASSETACTIONPERFORMER_H

@class PXPhotoKitAssetActionPerformer, NSString;
@protocol PUSlideshowViewControllerDelegate;



@interface PUPXPhotoKitSlideShowAssetActionPerformer : PXPhotoKitAssetActionPerformer <PUSlideshowViewControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)canPerformOnImplicitSelectionInContainerCollection:(id)arg0 ;
+(BOOL)canPerformOnSubsetOfSelection;
+(BOOL)canPerformWithSelectionSnapshot:(id)arg0 person:(id)arg1 ;
+(id)createActivityWithActionManager:(id)arg0 ;
+(id)createBarButtonItemWithTarget:(id)arg0 action:(SEL)arg1 actionManager:(id)arg2 ;
+(id)localizedTitleForUseCase:(NSUInteger)arg0 actionManager:(id)arg1 ;
+(id)systemImageNameForActionManager:(id)arg0 ;
-(void)_startSlideshow;
-(void)performUserInteractionTask;
-(void)slideshowViewControllerDidFinish:(id)arg0 withVisibleAssets:(id)arg1 ;


@end


#endif