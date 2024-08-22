// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRBASECLUSTERBALLASTCONFIGURATION_H
#define MTRBASECLUSTERBALLASTCONFIGURATION_H



#import "MTRCluster.h"
#import "MTRBaseDevice.h"

@interface MTRBaseClusterBallastConfiguration : MTRCluster

@property (readonly, nonatomic) MTRBaseDevice *device; // ivar: _device
@property (readonly, nonatomic) unsigned short endpoint; // ivar: _endpoint


+(void)readAttributeAcceptedCommandListWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeAcceptedCommandListWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeAttributeListWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeAttributeListWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeBallastFactorAdjustmentWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeBallastFactorAdjustmentWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeBallastStatusWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeBallastStatusWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeClusterRevisionWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeClusterRevisionWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeFeatureMapWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeFeatureMapWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeGeneratedCommandListWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeGeneratedCommandListWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeIntrinsicBalanceFactorWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeIntrinsicBallastFactorWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeLampAlarmModeWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeLampAlarmModeWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeLampBurnHoursTripPointWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeLampBurnHoursTripPointWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeLampBurnHoursWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeLampBurnHoursWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeLampManufacturerWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeLampManufacturerWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeLampQuantityWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeLampQuantityWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeLampRatedHoursWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeLampRatedHoursWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeLampTypeWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeLampTypeWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeMaxLevelWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeMaxLevelWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeMinLevelWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeMinLevelWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributePhysicalMaxLevelWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributePhysicalMaxLevelWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributePhysicalMinLevelWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributePhysicalMinLevelWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(id)initWithDevice:(id)arg0 endpoint:(unsigned short)arg1 queue:(id)arg2 ;
-(id)initWithDevice:(id)arg0 endpointID:(id)arg1 queue:(id)arg2 ;
-(void)readAttributeAcceptedCommandListWithCompletion:(id)arg0 ;
-(void)readAttributeAcceptedCommandListWithCompletionHandler:(id)arg0 ;
-(void)readAttributeAttributeListWithCompletion:(id)arg0 ;
-(void)readAttributeAttributeListWithCompletionHandler:(id)arg0 ;
-(void)readAttributeBallastFactorAdjustmentWithCompletion:(id)arg0 ;
-(void)readAttributeBallastFactorAdjustmentWithCompletionHandler:(id)arg0 ;
-(void)readAttributeBallastStatusWithCompletion:(id)arg0 ;
-(void)readAttributeBallastStatusWithCompletionHandler:(id)arg0 ;
-(void)readAttributeClusterRevisionWithCompletion:(id)arg0 ;
-(void)readAttributeClusterRevisionWithCompletionHandler:(id)arg0 ;
-(void)readAttributeFeatureMapWithCompletion:(id)arg0 ;
-(void)readAttributeFeatureMapWithCompletionHandler:(id)arg0 ;
-(void)readAttributeGeneratedCommandListWithCompletion:(id)arg0 ;
-(void)readAttributeGeneratedCommandListWithCompletionHandler:(id)arg0 ;
-(void)readAttributeIntrinsicBalanceFactorWithCompletionHandler:(id)arg0 ;
-(void)readAttributeIntrinsicBallastFactorWithCompletion:(id)arg0 ;
-(void)readAttributeLampAlarmModeWithCompletion:(id)arg0 ;
-(void)readAttributeLampAlarmModeWithCompletionHandler:(id)arg0 ;
-(void)readAttributeLampBurnHoursTripPointWithCompletion:(id)arg0 ;
-(void)readAttributeLampBurnHoursTripPointWithCompletionHandler:(id)arg0 ;
-(void)readAttributeLampBurnHoursWithCompletion:(id)arg0 ;
-(void)readAttributeLampBurnHoursWithCompletionHandler:(id)arg0 ;
-(void)readAttributeLampManufacturerWithCompletion:(id)arg0 ;
-(void)readAttributeLampManufacturerWithCompletionHandler:(id)arg0 ;
-(void)readAttributeLampQuantityWithCompletion:(id)arg0 ;
-(void)readAttributeLampQuantityWithCompletionHandler:(id)arg0 ;
-(void)readAttributeLampRatedHoursWithCompletion:(id)arg0 ;
-(void)readAttributeLampRatedHoursWithCompletionHandler:(id)arg0 ;
-(void)readAttributeLampTypeWithCompletion:(id)arg0 ;
-(void)readAttributeLampTypeWithCompletionHandler:(id)arg0 ;
-(void)readAttributeMaxLevelWithCompletion:(id)arg0 ;
-(void)readAttributeMaxLevelWithCompletionHandler:(id)arg0 ;
-(void)readAttributeMinLevelWithCompletion:(id)arg0 ;
-(void)readAttributeMinLevelWithCompletionHandler:(id)arg0 ;
-(void)readAttributePhysicalMaxLevelWithCompletion:(id)arg0 ;
-(void)readAttributePhysicalMaxLevelWithCompletionHandler:(id)arg0 ;
-(void)readAttributePhysicalMinLevelWithCompletion:(id)arg0 ;
-(void)readAttributePhysicalMinLevelWithCompletionHandler:(id)arg0 ;
// -(void)subscribeAttributeAcceptedCommandListWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeAcceptedCommandListWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeAttributeListWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeAttributeListWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeBallastFactorAdjustmentWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeBallastFactorAdjustmentWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeBallastStatusWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeBallastStatusWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeClusterRevisionWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeClusterRevisionWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeFeatureMapWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeFeatureMapWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeGeneratedCommandListWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeGeneratedCommandListWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeIntrinsicBalanceFactorWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeIntrinsicBallastFactorWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeLampAlarmModeWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeLampAlarmModeWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeLampBurnHoursTripPointWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeLampBurnHoursTripPointWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeLampBurnHoursWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeLampBurnHoursWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeLampManufacturerWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeLampManufacturerWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeLampQuantityWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeLampQuantityWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeLampRatedHoursWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeLampRatedHoursWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeLampTypeWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeLampTypeWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeMaxLevelWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeMaxLevelWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeMinLevelWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeMinLevelWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributePhysicalMaxLevelWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributePhysicalMaxLevelWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributePhysicalMinLevelWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributePhysicalMinLevelWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
-(void)writeAttributeBallastFactorAdjustmentWithValue:(id)arg0 completion:(id)arg1 ;
-(void)writeAttributeBallastFactorAdjustmentWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeBallastFactorAdjustmentWithValue:(id)arg0 params:(id)arg1 completion:(id)arg2 ;
-(void)writeAttributeBallastFactorAdjustmentWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributeIntrinsicBalanceFactorWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeIntrinsicBalanceFactorWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributeIntrinsicBallastFactorWithValue:(id)arg0 completion:(id)arg1 ;
-(void)writeAttributeIntrinsicBallastFactorWithValue:(id)arg0 params:(id)arg1 completion:(id)arg2 ;
-(void)writeAttributeLampAlarmModeWithValue:(id)arg0 completion:(id)arg1 ;
-(void)writeAttributeLampAlarmModeWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeLampAlarmModeWithValue:(id)arg0 params:(id)arg1 completion:(id)arg2 ;
-(void)writeAttributeLampAlarmModeWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributeLampBurnHoursTripPointWithValue:(id)arg0 completion:(id)arg1 ;
-(void)writeAttributeLampBurnHoursTripPointWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeLampBurnHoursTripPointWithValue:(id)arg0 params:(id)arg1 completion:(id)arg2 ;
-(void)writeAttributeLampBurnHoursTripPointWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributeLampBurnHoursWithValue:(id)arg0 completion:(id)arg1 ;
-(void)writeAttributeLampBurnHoursWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeLampBurnHoursWithValue:(id)arg0 params:(id)arg1 completion:(id)arg2 ;
-(void)writeAttributeLampBurnHoursWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributeLampManufacturerWithValue:(id)arg0 completion:(id)arg1 ;
-(void)writeAttributeLampManufacturerWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeLampManufacturerWithValue:(id)arg0 params:(id)arg1 completion:(id)arg2 ;
-(void)writeAttributeLampManufacturerWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributeLampRatedHoursWithValue:(id)arg0 completion:(id)arg1 ;
-(void)writeAttributeLampRatedHoursWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeLampRatedHoursWithValue:(id)arg0 params:(id)arg1 completion:(id)arg2 ;
-(void)writeAttributeLampRatedHoursWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributeLampTypeWithValue:(id)arg0 completion:(id)arg1 ;
-(void)writeAttributeLampTypeWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeLampTypeWithValue:(id)arg0 params:(id)arg1 completion:(id)arg2 ;
-(void)writeAttributeLampTypeWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributeMaxLevelWithValue:(id)arg0 completion:(id)arg1 ;
-(void)writeAttributeMaxLevelWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeMaxLevelWithValue:(id)arg0 params:(id)arg1 completion:(id)arg2 ;
-(void)writeAttributeMaxLevelWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributeMinLevelWithValue:(id)arg0 completion:(id)arg1 ;
-(void)writeAttributeMinLevelWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeMinLevelWithValue:(id)arg0 params:(id)arg1 completion:(id)arg2 ;
-(void)writeAttributeMinLevelWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif