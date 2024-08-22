// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRBASECLUSTERPOWERSOURCE_H
#define MTRBASECLUSTERPOWERSOURCE_H



#import "MTRCluster.h"
#import "MTRBaseDevice.h"

@interface MTRBaseClusterPowerSource : MTRCluster

@property (readonly, nonatomic) MTRBaseDevice *device; // ivar: _device
@property (readonly, nonatomic) unsigned short endpoint; // ivar: _endpoint


+(void)readAttributeAcceptedCommandListWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeAcceptedCommandListWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeActiveBatChargeFaultsWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeActiveBatChargeFaultsWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeActiveBatFaultsWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeActiveBatFaultsWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeActiveWiredFaultsWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeActiveWiredFaultsWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeAttributeListWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeAttributeListWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeBatANSIDesignationWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeBatANSIDesignationWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeBatApprovedChemistryWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeBatApprovedChemistryWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeBatCapacityWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeBatCapacityWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeBatChargeLevelWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeBatChargeLevelWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeBatChargeStateWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeBatChargeStateWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeBatChargingCurrentWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeBatChargingCurrentWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeBatCommonDesignationWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeBatCommonDesignationWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeBatFunctionalWhileChargingWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeBatFunctionalWhileChargingWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeBatIECDesignationWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeBatIECDesignationWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeBatPercentRemainingWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeBatPercentRemainingWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeBatPresentWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeBatPresentWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeBatQuantityWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeBatQuantityWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeBatReplaceabilityWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeBatReplaceabilityWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeBatReplacementDescriptionWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeBatReplacementDescriptionWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeBatReplacementNeededWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeBatReplacementNeededWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeBatTimeRemainingWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeBatTimeRemainingWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeBatTimeToFullChargeWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeBatTimeToFullChargeWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeBatVoltageWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeBatVoltageWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeClusterRevisionWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeClusterRevisionWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeDescriptionWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeDescriptionWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeFeatureMapWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeFeatureMapWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeGeneratedCommandListWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeGeneratedCommandListWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeOrderWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeOrderWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeStatusWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeStatusWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeWiredAssessedCurrentWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeWiredAssessedCurrentWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeWiredAssessedInputFrequencyWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeWiredAssessedInputFrequencyWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeWiredAssessedInputVoltageWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeWiredAssessedInputVoltageWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeWiredCurrentTypeWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeWiredCurrentTypeWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeWiredMaximumCurrentWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeWiredMaximumCurrentWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeWiredNominalVoltageWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeWiredNominalVoltageWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeWiredPresentWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeWiredPresentWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(id)initWithDevice:(id)arg0 endpoint:(unsigned short)arg1 queue:(id)arg2 ;
-(id)initWithDevice:(id)arg0 endpointID:(id)arg1 queue:(id)arg2 ;
-(void)readAttributeAcceptedCommandListWithCompletion:(id)arg0 ;
-(void)readAttributeAcceptedCommandListWithCompletionHandler:(id)arg0 ;
-(void)readAttributeActiveBatChargeFaultsWithCompletion:(id)arg0 ;
-(void)readAttributeActiveBatChargeFaultsWithCompletionHandler:(id)arg0 ;
-(void)readAttributeActiveBatFaultsWithCompletion:(id)arg0 ;
-(void)readAttributeActiveBatFaultsWithCompletionHandler:(id)arg0 ;
-(void)readAttributeActiveWiredFaultsWithCompletion:(id)arg0 ;
-(void)readAttributeActiveWiredFaultsWithCompletionHandler:(id)arg0 ;
-(void)readAttributeAttributeListWithCompletion:(id)arg0 ;
-(void)readAttributeAttributeListWithCompletionHandler:(id)arg0 ;
-(void)readAttributeBatANSIDesignationWithCompletion:(id)arg0 ;
-(void)readAttributeBatANSIDesignationWithCompletionHandler:(id)arg0 ;
-(void)readAttributeBatApprovedChemistryWithCompletion:(id)arg0 ;
-(void)readAttributeBatApprovedChemistryWithCompletionHandler:(id)arg0 ;
-(void)readAttributeBatCapacityWithCompletion:(id)arg0 ;
-(void)readAttributeBatCapacityWithCompletionHandler:(id)arg0 ;
-(void)readAttributeBatChargeLevelWithCompletion:(id)arg0 ;
-(void)readAttributeBatChargeLevelWithCompletionHandler:(id)arg0 ;
-(void)readAttributeBatChargeStateWithCompletion:(id)arg0 ;
-(void)readAttributeBatChargeStateWithCompletionHandler:(id)arg0 ;
-(void)readAttributeBatChargingCurrentWithCompletion:(id)arg0 ;
-(void)readAttributeBatChargingCurrentWithCompletionHandler:(id)arg0 ;
-(void)readAttributeBatCommonDesignationWithCompletion:(id)arg0 ;
-(void)readAttributeBatCommonDesignationWithCompletionHandler:(id)arg0 ;
-(void)readAttributeBatFunctionalWhileChargingWithCompletion:(id)arg0 ;
-(void)readAttributeBatFunctionalWhileChargingWithCompletionHandler:(id)arg0 ;
-(void)readAttributeBatIECDesignationWithCompletion:(id)arg0 ;
-(void)readAttributeBatIECDesignationWithCompletionHandler:(id)arg0 ;
-(void)readAttributeBatPercentRemainingWithCompletion:(id)arg0 ;
-(void)readAttributeBatPercentRemainingWithCompletionHandler:(id)arg0 ;
-(void)readAttributeBatPresentWithCompletion:(id)arg0 ;
-(void)readAttributeBatPresentWithCompletionHandler:(id)arg0 ;
-(void)readAttributeBatQuantityWithCompletion:(id)arg0 ;
-(void)readAttributeBatQuantityWithCompletionHandler:(id)arg0 ;
-(void)readAttributeBatReplaceabilityWithCompletion:(id)arg0 ;
-(void)readAttributeBatReplaceabilityWithCompletionHandler:(id)arg0 ;
-(void)readAttributeBatReplacementDescriptionWithCompletion:(id)arg0 ;
-(void)readAttributeBatReplacementDescriptionWithCompletionHandler:(id)arg0 ;
-(void)readAttributeBatReplacementNeededWithCompletion:(id)arg0 ;
-(void)readAttributeBatReplacementNeededWithCompletionHandler:(id)arg0 ;
-(void)readAttributeBatTimeRemainingWithCompletion:(id)arg0 ;
-(void)readAttributeBatTimeRemainingWithCompletionHandler:(id)arg0 ;
-(void)readAttributeBatTimeToFullChargeWithCompletion:(id)arg0 ;
-(void)readAttributeBatTimeToFullChargeWithCompletionHandler:(id)arg0 ;
-(void)readAttributeBatVoltageWithCompletion:(id)arg0 ;
-(void)readAttributeBatVoltageWithCompletionHandler:(id)arg0 ;
-(void)readAttributeClusterRevisionWithCompletion:(id)arg0 ;
-(void)readAttributeClusterRevisionWithCompletionHandler:(id)arg0 ;
-(void)readAttributeDescriptionWithCompletion:(id)arg0 ;
-(void)readAttributeDescriptionWithCompletionHandler:(id)arg0 ;
-(void)readAttributeFeatureMapWithCompletion:(id)arg0 ;
-(void)readAttributeFeatureMapWithCompletionHandler:(id)arg0 ;
-(void)readAttributeGeneratedCommandListWithCompletion:(id)arg0 ;
-(void)readAttributeGeneratedCommandListWithCompletionHandler:(id)arg0 ;
-(void)readAttributeOrderWithCompletion:(id)arg0 ;
-(void)readAttributeOrderWithCompletionHandler:(id)arg0 ;
-(void)readAttributeStatusWithCompletion:(id)arg0 ;
-(void)readAttributeStatusWithCompletionHandler:(id)arg0 ;
-(void)readAttributeWiredAssessedCurrentWithCompletion:(id)arg0 ;
-(void)readAttributeWiredAssessedCurrentWithCompletionHandler:(id)arg0 ;
-(void)readAttributeWiredAssessedInputFrequencyWithCompletion:(id)arg0 ;
-(void)readAttributeWiredAssessedInputFrequencyWithCompletionHandler:(id)arg0 ;
-(void)readAttributeWiredAssessedInputVoltageWithCompletion:(id)arg0 ;
-(void)readAttributeWiredAssessedInputVoltageWithCompletionHandler:(id)arg0 ;
-(void)readAttributeWiredCurrentTypeWithCompletion:(id)arg0 ;
-(void)readAttributeWiredCurrentTypeWithCompletionHandler:(id)arg0 ;
-(void)readAttributeWiredMaximumCurrentWithCompletion:(id)arg0 ;
-(void)readAttributeWiredMaximumCurrentWithCompletionHandler:(id)arg0 ;
-(void)readAttributeWiredNominalVoltageWithCompletion:(id)arg0 ;
-(void)readAttributeWiredNominalVoltageWithCompletionHandler:(id)arg0 ;
-(void)readAttributeWiredPresentWithCompletion:(id)arg0 ;
-(void)readAttributeWiredPresentWithCompletionHandler:(id)arg0 ;
// -(void)subscribeAttributeAcceptedCommandListWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeAcceptedCommandListWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeActiveBatChargeFaultsWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeActiveBatChargeFaultsWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeActiveBatFaultsWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeActiveBatFaultsWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeActiveWiredFaultsWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeActiveWiredFaultsWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeAttributeListWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeAttributeListWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeBatANSIDesignationWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeBatANSIDesignationWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeBatApprovedChemistryWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeBatApprovedChemistryWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeBatCapacityWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeBatCapacityWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeBatChargeLevelWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeBatChargeLevelWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeBatChargeStateWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeBatChargeStateWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeBatChargingCurrentWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeBatChargingCurrentWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeBatCommonDesignationWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeBatCommonDesignationWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeBatFunctionalWhileChargingWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeBatFunctionalWhileChargingWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeBatIECDesignationWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeBatIECDesignationWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeBatPercentRemainingWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeBatPercentRemainingWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeBatPresentWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeBatPresentWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeBatQuantityWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeBatQuantityWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeBatReplaceabilityWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeBatReplaceabilityWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeBatReplacementDescriptionWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeBatReplacementDescriptionWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeBatReplacementNeededWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeBatReplacementNeededWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeBatTimeRemainingWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeBatTimeRemainingWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeBatTimeToFullChargeWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeBatTimeToFullChargeWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeBatVoltageWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeBatVoltageWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeClusterRevisionWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeClusterRevisionWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeDescriptionWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeDescriptionWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeFeatureMapWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeFeatureMapWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeGeneratedCommandListWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeGeneratedCommandListWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeOrderWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeOrderWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeStatusWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeStatusWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeWiredAssessedCurrentWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeWiredAssessedCurrentWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeWiredAssessedInputFrequencyWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeWiredAssessedInputFrequencyWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeWiredAssessedInputVoltageWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeWiredAssessedInputVoltageWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeWiredCurrentTypeWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeWiredCurrentTypeWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeWiredMaximumCurrentWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeWiredMaximumCurrentWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeWiredNominalVoltageWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeWiredNominalVoltageWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeWiredPresentWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeWiredPresentWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;


@end


#endif