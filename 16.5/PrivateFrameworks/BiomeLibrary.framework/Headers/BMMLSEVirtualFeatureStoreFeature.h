// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMMLSEVIRTUALFEATURESTOREFEATURE_H
#define BMMLSEVIRTUALFEATURESTOREFEATURE_H

@class BMEventBase, NSString;
@protocol BMStoreData;


#import "BMMLSEVirtualFeatureStoreFeatureFeatureValue.h"

@interface BMMLSEVirtualFeatureStoreFeature : BMEventBase <BMStoreData>



@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned int eventVolumeToComputeFeature; // ivar: _eventVolumeToComputeFeature
@property (readonly, nonatomic) unsigned int featureFreshnessInHours; // ivar: _featureFreshnessInHours
@property (readonly, nonatomic) unsigned int featureItselfVersion; // ivar: _featureItselfVersion
@property (readonly, nonatomic) int featureName; // ivar: _featureName
@property (readonly, nonatomic) BMMLSEVirtualFeatureStoreFeatureFeatureValue *featureValue; // ivar: _featureValue
@property (nonatomic) BOOL hasEventVolumeToComputeFeature; // ivar: _hasEventVolumeToComputeFeature
@property (nonatomic) BOOL hasFeatureFreshnessInHours; // ivar: _hasFeatureFreshnessInHours
@property (nonatomic) BOOL hasFeatureItselfVersion; // ivar: _hasFeatureItselfVersion
@property (nonatomic) BOOL hasTimeSpentToComputeFeature; // ivar: _hasTimeSpentToComputeFeature
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned int timeSpentToComputeFeature; // ivar: _timeSpentToComputeFeature


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithFeatureName:(int)arg0 featureValue:(id)arg1 ;
-(id)initWithFeatureName:(int)arg0 featureValue:(id)arg1 featureItselfVersion:(id)arg2 featureFreshnessInHours:(id)arg3 eventVolumeToComputeFeature:(id)arg4 timeSpentToComputeFeature:(id)arg5 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif