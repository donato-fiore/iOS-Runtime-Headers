// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUPHOTOKITHIDEACTIONPERFORMER_H
#define PUPHOTOKITHIDEACTIONPERFORMER_H



#import "PUPhotoKitActionPerformer.h"
#import "PUAssetHidingHelper.h"

@interface PUPhotoKitHideActionPerformer : PUPhotoKitActionPerformer

@property (retain, nonatomic) PUAssetHidingHelper *assetHidingHelper; // ivar: _assetHidingHelper
@property (nonatomic) BOOL isHiding; // ivar: _isHiding


+(BOOL)canPerformOnAsset:(id)arg0 inAssetCollection:(id)arg1 ;
-(void)performBackgroundTask;
-(void)performUserInteractionTask;


@end


#endif