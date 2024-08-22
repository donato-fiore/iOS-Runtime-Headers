// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMTRSYNCCLUSTERTHERMOSTAT_H
#define HMMTRSYNCCLUSTERTHERMOSTAT_H

@class MTRClusterThermostat, NSString;
@protocol HMFLogging;



@interface HMMTRSyncClusterThermostat : MTRClusterThermostat <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)readAttributeOccupiedHeatingOrCoolingSetpointWithParams:(id)arg0 ;
-(id)readAttributePluginCurrentHeatingCoolingStateWithParams:(id)arg0 ;
-(void)updatedValueForAttributeReport:(id)arg0 responseHandler:(id)arg1 ;
-(void)updatedValuePluginCurrentHeatingCoolingStateForAttributeReport:(id)arg0 responseHandler:(id)arg1 ;
-(void)writeAttributeOccupiedHeatingOrCoolingSetpointWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;


@end


#endif