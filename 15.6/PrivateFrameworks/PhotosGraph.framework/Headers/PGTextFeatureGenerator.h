// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGTEXTFEATUREGENERATOR_H
#define PGTEXTFEATUREGENERATOR_H

@class NSCountedSet, NSMutableSet, NSSet, NSMapTable, NSDictionary;

#import <Foundation/Foundation.h>


@interface PGTextFeatureGenerator : NSObject

@property (retain, nonatomic) NSCountedSet *areaNodes; // ivar: _areaNodes
@property (retain, nonatomic) NSCountedSet *businessCategoryNodes; // ivar: _businessCategoryNodes
@property (retain, nonatomic) NSCountedSet *businessNodes; // ivar: _businessNodes
@property (retain, nonatomic) NSCountedSet *cityNodes; // ivar: _cityNodes
@property (retain, nonatomic) NSCountedSet *countryNodes; // ivar: _countryNodes
@property (retain, nonatomic) NSCountedSet *districtNodes; // ivar: _districtNodes
@property (retain, nonatomic) NSCountedSet *holidayNodes; // ivar: _holidayNodes
@property (retain, nonatomic) NSCountedSet *meaningNodes; // ivar: _meaningNodes
@property (retain, nonatomic) NSMutableSet *momentIdentifiers; // ivar: _momentIdentifiers
@property (retain, nonatomic) NSSet *momentNodes; // ivar: _momentNodes
@property (nonatomic) NSUInteger numberOfAssets; // ivar: _numberOfAssets
@property (retain, nonatomic) NSMapTable *numberOfAssetsBySceneNode; // ivar: _numberOfAssetsBySceneNode
@property (nonatomic) NSUInteger numberOfMoments; // ivar: _numberOfMoments
@property (retain, nonatomic) NSDictionary *optionsByDomain; // ivar: _optionsByDomain
@property (retain, nonatomic) NSCountedSet *personNodes; // ivar: _personNodes
@property (retain, nonatomic) NSCountedSet *poiNodes; // ivar: _poiNodes
@property (retain, nonatomic) NSCountedSet *publicEventCategoryNodes; // ivar: _publicEventCategoryNodes
@property (retain, nonatomic) NSCountedSet *publicEventNodes; // ivar: _publicEventNodes
@property (retain, nonatomic) NSCountedSet *publicEventPerformerNodes; // ivar: _publicEventPerformerNodes
@property (retain, nonatomic) NSCountedSet *roiNodes; // ivar: _roiNodes
@property (retain, nonatomic) NSCountedSet *sceneNodes; // ivar: _sceneNodes
@property (retain, nonatomic) NSCountedSet *stateNodes; // ivar: _stateNodes


+(id)_knowledgeOptionsByDomain;
+(id)_naturalLanguageOptionsByDomain;
-(BOOL)boundTextFeaturesPerEvent;
-(NSUInteger)maximumNumberOfTextFeaturesPerEvent;
-(id)_sortedTextFeaturesUsingWeightAndTypeFromTextFeatures:(id)arg0 ;
-(id)_textFeaturesForNode:(id)arg0 type:(NSUInteger)arg1 weight:(float)arg2 ;
-(id)_textFeaturesForNodes:(id)arg0 type:(NSUInteger)arg1 ;
-(id)_textFeaturesForPersonNodes:(id)arg0 ;
-(id)bestTextFeaturesFromTextFeatures:(id)arg0 ;
-(id)generateTextFeatures;
-(id)initWithMomentNodes:(id)arg0 ;
-(id)knowledgeFeatures;
-(id)naturalLanguageFeatures;
-(void)_resetProperties;
-(void)analyzeMomentNodes;


@end


#endif