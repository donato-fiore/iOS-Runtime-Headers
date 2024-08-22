// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHIPPLUGINMUTABLEDEVICETOPOLOGY_H
#define CHIPPLUGINMUTABLEDEVICETOPOLOGY_H

@class NSMutableDictionary;


#import "CHIPPluginDeviceTopology.h"

@interface CHIPPluginMutableDeviceTopology : CHIPPluginDeviceTopology

@property (retain, nonatomic) NSMutableDictionary *clustersInUse;
@property (retain, nonatomic) NSMutableDictionary *deviceFeatureMapValues;
@property (retain, nonatomic) NSMutableDictionary *hapCategories;
@property (retain, nonatomic) NSMutableDictionary *hapDisabledCharacteristics;
@property (retain, nonatomic) NSMutableDictionary *hapServiceTypes;


-(id)storeForNodeId:(id)arg0 storage:(id)arg1 ;
-(void)addDeviceFeatureMapValue:(id)arg0 clusterClassName:(id)arg1 atEndpoint:(id)arg2 ;
-(void)addHAPDisabledCharacteristic:(id)arg0 atEndpoint:(id)arg1 hapServiceType:(id)arg2 ;
-(void)setHAPCategories:(id)arg0 atEndpoint:(id)arg1 ;
-(void)setHAPDisabledCharacteristics:(id)arg0 atEndpoint:(id)arg1 ;
-(void)setHAPServiceTypes:(id)arg0 atEndpoint:(id)arg1 ;


@end


#endif