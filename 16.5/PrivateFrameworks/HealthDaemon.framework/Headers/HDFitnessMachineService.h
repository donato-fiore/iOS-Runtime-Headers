// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDFITNESSMACHINESERVICE_H
#define HDFITNESSMACHINESERVICE_H



#import "HDHealthService.h"

@interface HDFitnessMachineService : HDHealthService

@property (readonly, nonatomic) NSUInteger machineType; // ivar: _machineType


+(NSInteger)serviceType;
+(NSUInteger)typeFromAdvertisementData:(id)arg0 ;
+(id)implementedProperties;
+(id)serviceUUID;
-(BOOL)processAdvertisementData:(id)arg0 ;
-(id)servicesInProfile;
-(void)peripheral:(id)arg0 didDiscoverCharacteristic:(id)arg1 ;
-(void)peripheral:(id)arg0 didUpdateValueForCharacteristic:(id)arg1 updateTime:(id)arg2 error:(id)arg3 ;
-(void)readProperty:(id)arg0 ;


@end


#endif