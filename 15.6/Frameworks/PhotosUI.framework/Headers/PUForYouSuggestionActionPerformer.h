// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUFORYOUSUGGESTIONACTIONPERFORMER_H
#define PUFORYOUSUGGESTIONACTIONPERFORMER_H

@class PXForYouSuggestionDisplayAsset, PXPhotoKitAdjustedUIMediaProvider;
@protocol PUForYouSuggestionActionPerformerDelegate;


#import "PUAssetActionPerformer.h"

@interface PUForYouSuggestionActionPerformer : PUAssetActionPerformer

@property (readonly, nonatomic) PXForYouSuggestionDisplayAsset *asset; // ivar: _asset
@property (readonly, nonatomic) PXPhotoKitAdjustedUIMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (weak, nonatomic) NSObject<PUForYouSuggestionActionPerformerDelegate> *statusDelegate; // ivar: _statusDelegate


-(id)init;
-(id)initWithAsset:(id)arg0 ;


@end


#endif