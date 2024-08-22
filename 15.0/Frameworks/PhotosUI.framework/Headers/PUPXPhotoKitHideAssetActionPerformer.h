// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUPXPHOTOKITHIDEASSETACTIONPERFORMER_H
#define PUPXPHOTOKITHIDEASSETACTIONPERFORMER_H

@class PXPhotoKitAssetActionPerformer;


#import "PUAssetHidingHelper.h"

@interface PUPXPhotoKitHideAssetActionPerformer : PXPhotoKitAssetActionPerformer

@property (retain, nonatomic) PUAssetHidingHelper *assetHidingHelper; // ivar: _assetHidingHelper
@property (nonatomic) BOOL isHiding; // ivar: _isHiding


+(BOOL)canPerformOnAsset:(id)arg0 inAssetCollection:(id)arg1 person:(id)arg2 ;
+(id)localizedTitleForUseCase:(NSUInteger)arg0 actionManager:(id)arg1 ;
-(void)performBackgroundTask;
-(void)performUserInteractionTask;


@end


#endif