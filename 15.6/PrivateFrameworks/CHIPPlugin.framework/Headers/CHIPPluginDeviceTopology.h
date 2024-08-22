// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPPLUGINDEVICETOPOLOGY_H
#define CHIPPLUGINDEVICETOPOLOGY_H

@class HMFObject, NSMutableDictionary;



@interface CHIPPluginDeviceTopology : HMFObject

@property (retain, nonatomic) NSMutableDictionary *clustersInUse; // ivar: _clustersInUse
@property (retain, nonatomic) NSMutableDictionary *hapCategories; // ivar: _hapCategories
@property (retain, nonatomic) NSMutableDictionary *hapDisabledCharacteristics; // ivar: _hapDisabledCharacteristics
@property (retain, nonatomic) NSMutableDictionary *hapServiceTypes; // ivar: _hapServiceTypes


-(BOOL)isHAPCharacteristicDisabledAtEndpoint:(id)arg0 hapServiceType:(id)arg1 hapCharacteristic:(id)arg2 ;
-(id)_dictionaryRepresentation;
-(id)description;
-(id)getClustersInUseAtEndpoint:(id)arg0 ;
-(id)getEndpoints;
-(id)getHAPCategoriesAtEndpoint:(id)arg0 ;
-(id)getHAPServiceTypesAtEndpoint:(id)arg0 ;
-(id)init;
-(id)initWithNodeId:(id)arg0 storage:(id)arg1 ;
-(id)initWithTopologyDictionary:(id)arg0 ;


@end


#endif