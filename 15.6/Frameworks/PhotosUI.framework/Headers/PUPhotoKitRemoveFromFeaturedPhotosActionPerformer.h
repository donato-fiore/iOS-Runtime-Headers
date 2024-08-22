// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUPHOTOKITREMOVEFROMFEATUREDPHOTOSACTIONPERFORMER_H
#define PUPHOTOKITREMOVEFROMFEATUREDPHOTOSACTIONPERFORMER_H

@class NSDictionary;


#import "PUPhotoKitActionPerformer.h"

@interface PUPhotoKitRemoveFromFeaturedPhotosActionPerformer : PUPhotoKitActionPerformer

@property (retain, nonatomic) NSDictionary *assetToSuggestionMap; // ivar: _assetToSuggestionMap


+(BOOL)canPerformOnAsset:(id)arg0 inAssetCollection:(id)arg1 ;
-(void)performBackgroundTask;


@end


#endif