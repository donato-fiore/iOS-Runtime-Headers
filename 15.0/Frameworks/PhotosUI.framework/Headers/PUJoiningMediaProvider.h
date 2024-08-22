// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUJOININGMEDIAPROVIDER_H
#define PUJOININGMEDIAPROVIDER_H

@class NSMapTable, NSMutableArray;


#import "PUMediaProvider.h"

@interface PUJoiningMediaProvider : PUMediaProvider

@property (readonly, nonatomic) NSMapTable *_mediaProviderByClass; // ivar: __mediaProviderByClass
@property (readonly, nonatomic) NSMutableArray *_mediaProviderPredicateRecords; // ivar: __mediaProviderPredicateRecords


-(id)_mediaProviderForAsset:(id)arg0 requestType:(NSInteger)arg1 ;
-(id)init;
-(int)requestAnimatedImageForAsset:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(int)requestImageDataForAsset:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(int)requestImageForAsset:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 resultHandler:(id)arg4 ;
-(int)requestImageURLForAsset:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(int)requestLivePhotoForAsset:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 resultHandler:(id)arg4 ;
-(int)requestPlayerItemForVideo:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(void)cancelImageRequest:(int)arg0 ;
-(void)registerMediaProvider:(id)arg0 forAssetClass:(Class)arg1 ;
-(void)registerMediaProvider:(id)arg0 forAssetPassingTest:(id)arg1 ;


@end


#endif