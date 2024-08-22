// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXUPNEXTSETTINGS_H
#define PXUPNEXTSETTINGS_H

@class NSArray;


#import "PXSettings.h"

@interface PXUpNextSettings : PXSettings

@property (nonatomic) NSUInteger curationMode; // ivar: _curationMode
@property (nonatomic) float dateWeight0; // ivar: _dateWeight0
@property (nonatomic) float dateWeight1; // ivar: _dateWeight1
@property (nonatomic) float dateWeight2; // ivar: _dateWeight2
@property (nonatomic) float dateWeight3; // ivar: _dateWeight3
@property (nonatomic) float dateWeight4; // ivar: _dateWeight4
@property (nonatomic) BOOL enableCustomVectors; // ivar: _enableCustomVectors
@property (retain, nonatomic) NSArray *featureWeightVectors; // ivar: _featureWeightVectors
@property (nonatomic) BOOL forceFallbackMemories; // ivar: _forceFallbackMemories
@property (nonatomic) float locationWeight0; // ivar: _locationWeight0
@property (nonatomic) float locationWeight1; // ivar: _locationWeight1
@property (nonatomic) float locationWeight2; // ivar: _locationWeight2
@property (nonatomic) float locationWeight3; // ivar: _locationWeight3
@property (nonatomic) float locationWeight4; // ivar: _locationWeight4
@property (nonatomic) float meaningWeight0; // ivar: _meaningWeight0
@property (nonatomic) float meaningWeight1; // ivar: _meaningWeight1
@property (nonatomic) float meaningWeight2; // ivar: _meaningWeight2
@property (nonatomic) float meaningWeight3; // ivar: _meaningWeight3
@property (nonatomic) float meaningWeight4; // ivar: _meaningWeight4
@property (nonatomic) float memoryFeatureWeight0; // ivar: _memoryFeatureWeight0
@property (nonatomic) float memoryFeatureWeight1; // ivar: _memoryFeatureWeight1
@property (nonatomic) float memoryFeatureWeight2; // ivar: _memoryFeatureWeight2
@property (nonatomic) float memoryFeatureWeight3; // ivar: _memoryFeatureWeight3
@property (nonatomic) float memoryFeatureWeight4; // ivar: _memoryFeatureWeight4
@property (nonatomic) BOOL overrideMemoriesResult; // ivar: _overrideMemoriesResult
@property (nonatomic) float personWeight0; // ivar: _personWeight0
@property (nonatomic) float personWeight1; // ivar: _personWeight1
@property (nonatomic) float personWeight2; // ivar: _personWeight2
@property (nonatomic) float personWeight3; // ivar: _personWeight3
@property (nonatomic) float personWeight4; // ivar: _personWeight4
@property (nonatomic) float sceneWeight0; // ivar: _sceneWeight0
@property (nonatomic) float sceneWeight1; // ivar: _sceneWeight1
@property (nonatomic) float sceneWeight2; // ivar: _sceneWeight2
@property (nonatomic) float sceneWeight3; // ivar: _sceneWeight3
@property (nonatomic) float sceneWeight4; // ivar: _sceneWeight4
@property (nonatomic) float tripWeight0; // ivar: _tripWeight0
@property (nonatomic) float tripWeight1; // ivar: _tripWeight1
@property (nonatomic) float tripWeight2; // ivar: _tripWeight2
@property (nonatomic) float tripWeight3; // ivar: _tripWeight3
@property (nonatomic) float tripWeight4; // ivar: _tripWeight4
@property (retain, nonatomic) NSArray *vector0; // ivar: _vector0
@property (retain, nonatomic) NSArray *vector1; // ivar: _vector1
@property (retain, nonatomic) NSArray *vector2; // ivar: _vector2
@property (retain, nonatomic) NSArray *vector3; // ivar: _vector3
@property (retain, nonatomic) NSArray *vector4; // ivar: _vector4


+(id)_enabledCondition;
+(id)_featureSliderForFeature:(id)arg0 valueKeyPath:(id)arg1 ;
+(id)_upNextVectorSliderSections;
+(id)settingsControllerModule;
+(id)sharedInstance;
-(id)_featureWeightVectorsFromCurationMode:(NSUInteger)arg0 ;
-(id)_mostRelevantFeatureWeightVectors;
-(id)_varietyFeatureWeightVectors;
-(id)_weightArrayWithWeightForPerson:(float)arg0 scene:(float)arg1 location:(float)arg2 date:(float)arg3 meaning:(float)arg4 memoryFeature:(float)arg5 trip:(float)arg6 ;
-(id)parentSettings;
-(void)_updateSettingsVectors:(id)arg0 ;
-(void)didChangeValueForKey:(id)arg0 ;
-(void)performPostSaveActions;
-(void)setDefaultValues;


@end


#endif