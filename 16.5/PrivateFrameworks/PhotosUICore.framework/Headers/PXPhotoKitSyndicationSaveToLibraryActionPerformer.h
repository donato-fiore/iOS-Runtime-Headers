// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPHOTOKITSYNDICATIONSAVETOLIBRARYACTIONPERFORMER_H
#define PXPHOTOKITSYNDICATIONSAVETOLIBRARYACTIONPERFORMER_H

@class NSString;
@protocol PXAssetsSharingHelperDelegate;


#import "PXPhotoKitAssetActionPerformer.h"

@interface PXPhotoKitSyndicationSaveToLibraryActionPerformer : PXPhotoKitAssetActionPerformer <PXAssetsSharingHelperDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)canPerformOnAsset:(id)arg0 inAssetCollection:(id)arg1 person:(id)arg2 ;
+(id)createPreviewActionWithTitle:(id)arg0 image:(id)arg1 handler:(id)arg2 ;
+(id)localizedTitleForUseCase:(NSUInteger)arg0 actionManager:(id)arg1 ;
+(id)systemImageNameForActionManager:(id)arg0 ;
-(BOOL)assetsSharingHelper:(id)arg0 dismissViewController:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)assetsSharingHelper:(id)arg0 presentViewController:(id)arg1 ;
-(void)performBackgroundTask;
-(void)performUserInteractionTask;


@end


#endif