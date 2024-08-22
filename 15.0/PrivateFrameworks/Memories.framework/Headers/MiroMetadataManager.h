// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MIROMETADATAMANAGER_H
#define MIROMETADATAMANAGER_H

@class NSCache, NSSet;


#import "VEiOSSharedObject.h"

@interface MiroMetadataManager : VEiOSSharedObject {
    NSCache *_assetMetadataCache;
}


@property (weak, nonatomic) NSSet *suggestions; // ivar: _suggestions


+(id)sharedManager;
+(void)clearStaticCache;
+(void)purgeSharedInstance;
-(id)analyzeColorForAsset:(id)arg0 ;
-(id)clipSuggestionRangesForAsset:(id)arg0 ;
-(id)init;
-(id)metadataForAssetID:(id)arg0 ;
// -(void)analyzeAsset:(id)arg0 ranges:(id)arg1 types:(NSUInteger)arg2 progressHandler:(id)arg3 completionHandler:(unk)arg4  ;
// -(void)analyzeAssets:(id)arg0 ranges:(id)arg1 types:(NSUInteger)arg2 progressHandler:(id)arg3 completionHandler:(unk)arg4  ;
// -(void)analyzeColorForAsset:(id)arg0 progressHandler:(id)arg1 completionHandler:(unk)arg2  ;
-(void)analyzeLoudnessForRanges:(id)arg0 ofAssets:(id)arg1 ;
// -(void)analyzeLoudnessForRanges:(id)arg0 ofAssets:(id)arg1 progressHandler:(id)arg2 completionHandler:(unk)arg3  ;
-(void)clearCaches;
-(void)setMetadata:(id)arg0 forAssetID:(id)arg1 ;


@end


#endif