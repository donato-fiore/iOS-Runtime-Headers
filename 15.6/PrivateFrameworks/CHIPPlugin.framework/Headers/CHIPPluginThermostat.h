// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPPLUGINTHERMOSTAT_H
#define CHIPPLUGINTHERMOSTAT_H

@class CHIPThermostat, NSString;
@protocol HMFLogging;



@interface CHIPPluginThermostat : CHIPThermostat <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(void)readAttributeOccupiedHeatingOrCoolingSetpointWithCompletionHandler:(id)arg0 ;
-(void)updatedValueForAttributeReport:(id)arg0 responseHandler:(id)arg1 ;
-(void)writeAttributeOccupiedHeatingOrCoolingSetpointWithValue:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif