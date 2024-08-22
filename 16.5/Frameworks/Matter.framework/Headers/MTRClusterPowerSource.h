// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRCLUSTERPOWERSOURCE_H
#define MTRCLUSTERPOWERSOURCE_H



#import "MTRCluster.h"
#import "MTRDevice.h"

@interface MTRClusterPowerSource : MTRCluster

@property (readonly, nonatomic) MTRDevice *device; // ivar: _device
@property (readonly, nonatomic) unsigned short endpoint; // ivar: _endpoint


-(id)initWithDevice:(id)arg0 endpoint:(unsigned short)arg1 queue:(id)arg2 ;
-(id)initWithDevice:(id)arg0 endpointID:(id)arg1 queue:(id)arg2 ;
-(id)readAttributeAcceptedCommandListWithParams:(id)arg0 ;
-(id)readAttributeActiveBatChargeFaultsWithParams:(id)arg0 ;
-(id)readAttributeActiveBatFaultsWithParams:(id)arg0 ;
-(id)readAttributeActiveWiredFaultsWithParams:(id)arg0 ;
-(id)readAttributeAttributeListWithParams:(id)arg0 ;
-(id)readAttributeBatANSIDesignationWithParams:(id)arg0 ;
-(id)readAttributeBatApprovedChemistryWithParams:(id)arg0 ;
-(id)readAttributeBatCapacityWithParams:(id)arg0 ;
-(id)readAttributeBatChargeLevelWithParams:(id)arg0 ;
-(id)readAttributeBatChargeStateWithParams:(id)arg0 ;
-(id)readAttributeBatChargingCurrentWithParams:(id)arg0 ;
-(id)readAttributeBatCommonDesignationWithParams:(id)arg0 ;
-(id)readAttributeBatFunctionalWhileChargingWithParams:(id)arg0 ;
-(id)readAttributeBatIECDesignationWithParams:(id)arg0 ;
-(id)readAttributeBatPercentRemainingWithParams:(id)arg0 ;
-(id)readAttributeBatPresentWithParams:(id)arg0 ;
-(id)readAttributeBatQuantityWithParams:(id)arg0 ;
-(id)readAttributeBatReplaceabilityWithParams:(id)arg0 ;
-(id)readAttributeBatReplacementDescriptionWithParams:(id)arg0 ;
-(id)readAttributeBatReplacementNeededWithParams:(id)arg0 ;
-(id)readAttributeBatTimeRemainingWithParams:(id)arg0 ;
-(id)readAttributeBatTimeToFullChargeWithParams:(id)arg0 ;
-(id)readAttributeBatVoltageWithParams:(id)arg0 ;
-(id)readAttributeClusterRevisionWithParams:(id)arg0 ;
-(id)readAttributeDescriptionWithParams:(id)arg0 ;
-(id)readAttributeFeatureMapWithParams:(id)arg0 ;
-(id)readAttributeGeneratedCommandListWithParams:(id)arg0 ;
-(id)readAttributeOrderWithParams:(id)arg0 ;
-(id)readAttributeStatusWithParams:(id)arg0 ;
-(id)readAttributeWiredAssessedCurrentWithParams:(id)arg0 ;
-(id)readAttributeWiredAssessedInputFrequencyWithParams:(id)arg0 ;
-(id)readAttributeWiredAssessedInputVoltageWithParams:(id)arg0 ;
-(id)readAttributeWiredCurrentTypeWithParams:(id)arg0 ;
-(id)readAttributeWiredMaximumCurrentWithParams:(id)arg0 ;
-(id)readAttributeWiredNominalVoltageWithParams:(id)arg0 ;
-(id)readAttributeWiredPresentWithParams:(id)arg0 ;


@end


#endif