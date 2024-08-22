// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMTRDEVICETOPOLOGY_H
#define HMMTRDEVICETOPOLOGY_H

@class HMFObject, NSMutableDictionary;



@interface HMMTRDeviceTopology : HMFObject

@property (retain, nonatomic) NSMutableDictionary *clustersInUse; // ivar: _clustersInUse
@property (retain, nonatomic) NSMutableDictionary *deviceAttributeValues; // ivar: _deviceAttributeValues
@property (retain, nonatomic) NSMutableDictionary *deviceFeatureMapValues; // ivar: _deviceFeatureMapValues
@property (retain, nonatomic) NSMutableDictionary *fixedLabels; // ivar: _fixedLabels
@property (retain, nonatomic) NSMutableDictionary *hapCategories; // ivar: _hapCategories
@property (retain, nonatomic) NSMutableDictionary *hapDisabledCharacteristics; // ivar: _hapDisabledCharacteristics
@property (retain, nonatomic) NSMutableDictionary *hapServiceTypes; // ivar: _hapServiceTypes
@property (retain, nonatomic) NSMutableDictionary *nodeLabels; // ivar: _nodeLabels
@property (retain, nonatomic) NSMutableDictionary *otaRequestorEndpoints; // ivar: _otaRequestorEndpoints
@property (retain, nonatomic) NSMutableDictionary *partsList; // ivar: _partsList
@property (retain, nonatomic) NSMutableDictionary *versions; // ivar: _versions


-(BOOL)isHAPCharacteristicDisabledAtEndpoint:(id)arg0 hapServiceType:(id)arg1 hapCharacteristic:(id)arg2 ;
-(id)_dictionaryRepresentation;
-(id)description;
-(id)getAttributesForClusterClassName:(id)arg0 endpoint:(id)arg1 ;
-(id)getBridgeAggregateNodeEndpoint;
-(id)getClustersInUseAtEndpoint:(id)arg0 ;
-(id)getEnabledOTARequestorEndpoint;
-(id)getEndpoints;
-(id)getFeatureMapForClusterClassName:(id)arg0 endpoint:(id)arg1 ;
-(id)getFixedLabelsAtEndpoint:(id)arg0 ;
-(id)getHAPCategoriesAtEndpoint:(id)arg0 ;
-(id)getHAPServiceTypesAtEndpoint:(id)arg0 ;
-(id)getNodeLabelAtEndpoint:(id)arg0 ;
-(id)getOTARequestorEndpoints;
-(id)getPartsListAtEndpoint:(id)arg0 ;
-(id)getVersionForKey:(id)arg0 ;
-(id)init;
-(id)initWithNodeId:(id)arg0 server:(id)arg1 ;
-(id)initWithTopologyDictionary:(id)arg0 ;


@end


#endif