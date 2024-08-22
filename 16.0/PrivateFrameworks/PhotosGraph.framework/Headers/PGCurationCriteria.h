// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGCURATIONCRITERIA_H
#define PGCURATIONCRITERIA_H


#import <Foundation/Foundation.h>

#import "PGCurationSceneTrait.h"
#import "PGCurationContentOrAestheticScoreTrait.h"
#import "PGCurationCropScoreTrait.h"
#import "PGCurationPartOfDayTrait.h"
#import "PGCurationSetTrait.h"
#import "PGCurationSDFoodTrait.h"

@interface PGCurationCriteria : NSObject

@property (readonly, nonatomic) NSUInteger client; // ivar: _client
@property (retain, nonatomic) PGCurationSceneTrait *compulsoryScenesTrait; // ivar: _compulsoryScenesTrait
@property (retain, nonatomic) PGCurationContentOrAestheticScoreTrait *contentOrAestheticScoreTrait; // ivar: _contentOrAestheticScoreTrait
@property (retain, nonatomic) PGCurationCropScoreTrait *cropScoreTrait; // ivar: _cropScoreTrait
@property (nonatomic) NSUInteger faceFilter; // ivar: _faceFilter
@property (nonatomic) BOOL filterUtilityAssets; // ivar: _filterUtilityAssets
@property (nonatomic) CGFloat minimumAssetsRatio; // ivar: _minimumAssetsRatio
@property (retain, nonatomic) PGCurationPartOfDayTrait *partOfDayTrait; // ivar: _partOfDayTrait
@property (retain, nonatomic) PGCurationSetTrait *peopleTrait; // ivar: _peopleTrait
@property (retain, nonatomic) PGCurationSceneTrait *scenesTrait; // ivar: _scenesTrait
@property (retain, nonatomic) PGCurationSDFoodTrait *sdFoodTrait; // ivar: _sdFoodTrait
@property (retain, nonatomic) PGCurationSetTrait *socialGroupTrait; // ivar: _socialGroupTrait


-(BOOL)_passesForItem:(id)arg0 score:(*CGFloat)arg1 graph:(id)arg2 reasonString:(*id)arg3 ;
-(BOOL)isPassingForAsset:(id)arg0 score:(*CGFloat)arg1 ;
-(BOOL)passesForItem:(id)arg0 score:(*CGFloat)arg1 ;
-(BOOL)passesForItem:(id)arg0 score:(*CGFloat)arg1 graph:(id)arg2 reasonString:(*id)arg3 ;
-(CGFloat)_scoreForSceneClassifications:(id)arg0 withSDFoodTrait:(id)arg1 curationModel:(id)arg2 traitFailed:(*BOOL)arg3 ;
-(CGFloat)_scoreForSceneClassifications:(id)arg0 withScenesTrait:(id)arg1 curationModel:(id)arg2 traitFailed:(*BOOL)arg3 ;
-(id)initWithMinimumAssetsRatio:(CGFloat)arg0 client:(NSUInteger)arg1 ;
-(id)niceDescriptionWithGraph:(id)arg0 ;
-(id)passingAssetsInAssets:(id)arg0 ;
-(id)peopleTraitStringWithGraph:(id)arg0 ;


@end


#endif