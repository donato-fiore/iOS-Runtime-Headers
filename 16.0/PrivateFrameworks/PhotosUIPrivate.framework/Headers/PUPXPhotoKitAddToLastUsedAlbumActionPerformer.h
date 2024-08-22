// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUPXPHOTOKITADDTOLASTUSEDALBUMACTIONPERFORMER_H
#define PUPXPHOTOKITADDTOLASTUSEDALBUMACTIONPERFORMER_H

@class PXPhotoKitAssetActionPerformer;



@interface PUPXPhotoKitAddToLastUsedAlbumActionPerformer : PXPhotoKitAssetActionPerformer



+(BOOL)canPerformOnAsset:(id)arg0 inAssetCollection:(id)arg1 person:(id)arg2 ;
+(id)localizedTitleForUseCase:(NSUInteger)arg0 actionManager:(id)arg1 ;
-(id)localizedTitleForUseCase:(NSUInteger)arg0 ;
-(void)performBackgroundTask;
-(void)performUserInteractionTask;


@end


#endif