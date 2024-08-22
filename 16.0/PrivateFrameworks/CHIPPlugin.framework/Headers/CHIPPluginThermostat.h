// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHIPPLUGINTHERMOSTAT_H
#define CHIPPLUGINTHERMOSTAT_H

@class MTRBaseClusterThermostat, NSString;
@protocol HMFLogging;



@interface CHIPPluginThermostat : MTRBaseClusterThermostat <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
+(void)readAttributeCurrentSystemModeWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeOccupiedHeatingOrCoolingSetpointWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
-(void)readAttributeCurrentSystemModeWithCompletionHandler:(id)arg0 ;
-(void)readAttributeOccupiedHeatingOrCoolingSetpointWithCompletionHandler:(id)arg0 ;
-(void)updatedValueForAttributeReport:(id)arg0 responseHandler:(id)arg1 ;
-(void)writeAttributeOccupiedHeatingOrCoolingSetpointWithValue:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif