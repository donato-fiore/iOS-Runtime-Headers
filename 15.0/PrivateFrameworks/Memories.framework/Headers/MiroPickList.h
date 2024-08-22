// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MIROPICKLIST_H
#define MIROPICKLIST_H

@class NSArray, NSSet, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MiroPickList : NSObject <NSCopying>

 {
    NSArray *_sourceAssets;
}


@property (retain, nonatomic) NSArray *adjustedPickOrder; // ivar: _adjustedPickOrder
@property (nonatomic) BOOL calculatingPickOrder; // ivar: _calculatingPickOrder
@property (readonly, nonatomic) int countAtOrAboveBadT;
@property (retain, nonatomic) NSArray *dateOrder; // ivar: _dateOrder
@property (retain, nonatomic) NSSet *disallowedAssetIDs; // ivar: _disallowedAssetIDs
@property (retain, nonatomic) NSDictionary *freezeRanges; // ivar: _freezeRanges
@property (readonly, nonatomic) int freezeState;
@property (retain, nonatomic) NSArray *frozenAdjustedPickOrder; // ivar: _frozenAdjustedPickOrder
@property (retain, nonatomic) NSArray *frozenSourceAssets; // ivar: _frozenSourceAssets
@property (retain, nonatomic) NSArray *frozenSourceOrder; // ivar: _frozenSourceOrder
@property (readonly, nonatomic) int idealCount;
@property (readonly, nonatomic) BOOL isCompelling;
@property NSUInteger memoryCategory; // ivar: _memoryCategory
@property NSUInteger memorySubcategory; // ivar: _memorySubcategory
@property (nonatomic) BOOL penalizeNonLocalAssets; // ivar: _penalizeNonLocalAssets
@property (retain, nonatomic) NSSet *photosCuratedAssetIDs; // ivar: _photosCuratedAssetIDs
@property (retain, nonatomic) NSArray *pickOrder; // ivar: _pickOrder
@property (nonatomic) BOOL prioritizeCuratedSetAssets; // ivar: _prioritizeCuratedSetAssets
@property (retain, nonatomic) NSSet *requiredAssetIDs; // ivar: _requiredAssetIDs
@property (retain, nonatomic) NSArray *scoreOrder; // ivar: _scoreOrder
@property (nonatomic) BOOL skipDistanceCalculation; // ivar: _skipDistanceCalculation
@property (retain, nonatomic) NSArray *sourceAssets;
@property (retain, nonatomic) NSArray *sourceOrder; // ivar: _sourceOrder
@property (copy, nonatomic) NSDictionary *specialInfo; // ivar: _specialInfo
@property (retain, nonatomic) NSArray *splitOrder; // ivar: _splitOrder


-(BOOL)calculateFreezeFromFrozenSourceAssets;
-(CGFloat)_fractionOfPickInfo:(id)arg0 coveredByRanges:(id)arg1 ;
-(id)_computeAdjustedPickOrder;
-(id)_pickInfosForAssetID:(id)arg0 ;
-(id)assetsUpToSceneCount:(NSInteger)arg0 ;
-(id)classifications;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)expandVideoAssetsAndConvertToScenes:(id)arg0 ;
-(id)highestScoringItemFromIndex:(NSInteger)arg0 lookingRight:(BOOL)arg1 ;
-(id)highestScoringItemToTheLeftFromIndex:(NSInteger)arg0 ;
-(id)highestScoringItemToTheRightFromIndex:(NSInteger)arg0 ;
-(id)initWithAssets:(id)arg0 memoryCategory:(NSUInteger)arg1 memorySubcategory:(NSUInteger)arg2 ;
-(id)mediaAnalyzer;
-(id)people;
-(id)photoLibrary;
-(id)rangesForAssets:(id)arg0 ;
-(id)scenesUpToCount:(NSInteger)arg0 localOnly:(BOOL)arg1 ;
-(id)sourceOrderFromSourceAssetsViaNewAPIStoppingAtCompelling:(*BOOL)arg0 ;
-(id)splitDistancesForAssetID:(id)arg0 ;
-(int)countAtTValue:(CGFloat)arg0 ;
-(void)_assignTrimRangesChronologicallyToPickInfos:(id)arg0 ;
-(void)_assignTrimRangesIntelligentlyToPickInfos:(id)arg0 ;
-(void)_reset;
-(void)calculateFullPickList;
-(void)calculatePickListFromVPFrameworkResults;
-(void)updateAssetsWithSpecialInfo;


@end


#endif