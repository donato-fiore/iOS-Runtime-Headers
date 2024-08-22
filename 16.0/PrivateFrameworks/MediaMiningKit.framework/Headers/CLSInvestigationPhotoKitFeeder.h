// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSINVESTIGATIONPHOTOKITFEEDER_H
#define CLSINVESTIGATIONPHOTOKITFEEDER_H

@class PHFetchResult, NSArray, PHAssetCollection, PHFetchOptions, NSSet;


#import "CLSInvestigationFeeder.h"
#import "CLSCurationContext.h"

@interface CLSInvestigationPhotoKitFeeder : CLSInvestigationFeeder {
    NSUInteger _assetPrefetchOptions;
    PHFetchResult *_fetchResult;
    NSArray *_allItems;
    NSUInteger _numberOfAllPeople;
    CLSCurationContext *_curationContext;
}


@property (readonly, nonatomic) PHAssetCollection *assetCollection; // ivar: _assetCollection
@property (readonly, copy, nonatomic) PHFetchOptions *assetFetchOptions; // ivar: _assetFetchOptions
@property (readonly, nonatomic) PHFetchResult *assetFetchResult;
@property (readonly, nonatomic) CGFloat behavioralScore;
@property (readonly, nonatomic) BOOL hasBestScoringAssets;
@property (readonly, nonatomic) BOOL hasFavoritedAssets;
@property (readonly, nonatomic) BOOL hasNonJunkAssets;
@property (readonly, nonatomic) BOOL hasPeople;
@property (readonly, nonatomic) NSUInteger numberOfAllPeople;
@property (readonly, nonatomic) NSUInteger numberOfRegularGemItems;
@property (readonly, nonatomic) NSUInteger numberOfShinyGemItems;
@property (readonly, nonatomic) NSSet *shareParticipants; // ivar: _shareParticipants


+(id)feederForAssetCollection:(id)arg0 options:(id)arg1 feederPrefetchOptions:(id)arg2 curationContext:(id)arg3 ;
+(id)feederForAssetCollection:(id)arg0 options:(id)arg1 feederPrefetchOptions:(id)arg2 curationContext:(id)arg3 sharedLibraryEnabled:(BOOL)arg4 ;
-(BOOL)_shouldPrefetchCurationInformation;
-(NSUInteger)numberOfItems;
-(id)allItems;
-(id)approximateLocation;
-(id)initWithAssetCollection:(id)arg0 assetFetchOptions:(id)arg1 feederPrefetchOptions:(id)arg2 curationContext:(id)arg3 ;
-(id)initWithAssetFetchResult:(id)arg0 curationContext:(id)arg1 ;
-(id)itemAtIndex:(NSUInteger)arg0 ;
-(id)localEndDate;
-(id)localEndDateComponents;
-(id)localStartDate;
-(id)localStartDateComponents;
-(id)privateItems;
-(id)sharedItems;
-(id)universalEndDate;
-(id)universalStartDate;
-(void)_prefetchShareParticipants;
-(void)enumerateItemsUsingBlock:(id)arg0 ;
-(void)enumerateItemsWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;


@end


#endif