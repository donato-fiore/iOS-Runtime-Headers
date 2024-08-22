// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMTRTHERMOSTAT_H
#define HMMTRTHERMOSTAT_H

@class MTRBaseClusterThermostat, NSString;
@protocol HMFLogging;



@interface HMMTRThermostat : MTRBaseClusterThermostat <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(void)readAttributeOccupiedHeatingOrCoolingSetpointWithCompletionHandler:(id)arg0 ;
-(void)readAttributePluginCurrentHeatingCoolingStateWithCompletionHandler:(id)arg0 ;
-(void)updatedValueForAttributeReport:(id)arg0 responseHandler:(id)arg1 ;
-(void)updatedValuePluginCurrentHeatingCoolingStateForAttributeReport:(id)arg0 responseHandler:(id)arg1 ;
-(void)writeAttributeOccupiedHeatingOrCoolingSetpointWithValue:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif