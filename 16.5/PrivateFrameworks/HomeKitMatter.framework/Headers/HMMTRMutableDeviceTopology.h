// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMTRMUTABLEDEVICETOPOLOGY_H
#define HMMTRMUTABLEDEVICETOPOLOGY_H

@class NSMutableDictionary;


#import "HMMTRDeviceTopology.h"

@interface HMMTRMutableDeviceTopology : HMMTRDeviceTopology

@property (retain, nonatomic) NSMutableDictionary *clustersInUse;
@property (retain, nonatomic) NSMutableDictionary *deviceAttributeValues;
@property (retain, nonatomic) NSMutableDictionary *deviceFeatureMapValues;
@property (retain, nonatomic) NSMutableDictionary *fixedLabels;
@property (retain, nonatomic) NSMutableDictionary *hapCategories;
@property (retain, nonatomic) NSMutableDictionary *hapDisabledCharacteristics;
@property (retain, nonatomic) NSMutableDictionary *hapServiceTypes;
@property (retain, nonatomic) NSMutableDictionary *nodeLabels;
@property (retain, nonatomic) NSMutableDictionary *otaRequestorEndpoints;
@property (retain, nonatomic) NSMutableDictionary *partsList;
@property (retain, nonatomic) NSMutableDictionary *versions;


-(id)storeForNodeId:(id)arg0 server:(id)arg1 ;
-(void)addDeviceAttributeValues:(id)arg0 clusterClassName:(id)arg1 attributeName:(id)arg2 atEndpoint:(id)arg3 ;
-(void)addDeviceFeatureMapValue:(id)arg0 clusterClassName:(id)arg1 atEndpoint:(id)arg2 ;
-(void)addHAPDisabledCharacteristic:(id)arg0 atEndpoint:(id)arg1 hapServiceType:(id)arg2 ;
-(void)setHAPCategories:(id)arg0 atEndpoint:(id)arg1 ;
-(void)setHAPDisabledCharacteristics:(id)arg0 atEndpoint:(id)arg1 ;
-(void)setHAPServiceTypes:(id)arg0 atEndpoint:(id)arg1 ;
-(void)setNodeLabel:(id)arg0 atEndpoint:(id)arg1 ;
-(void)setOTARequestorEnabled:(BOOL)arg0 atEndpoint:(id)arg1 ;
-(void)setVersion:(id)arg0 for:(id)arg1 ;


@end


#endif