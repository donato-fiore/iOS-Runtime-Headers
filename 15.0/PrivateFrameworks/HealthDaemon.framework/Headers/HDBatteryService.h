// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDBATTERYSERVICE_H
#define HDBATTERYSERVICE_H

@class CBCharacteristic;


#import "HDHealthService.h"

@interface HDBatteryService : HDHealthService {
    CBCharacteristic *_batteryCharacteristic;
}




+(NSInteger)serviceType;
+(id)implementedProperties;
+(id)serviceUUID;
-(void)peripheral:(id)arg0 didDiscoverCharacteristic:(id)arg1 ;
-(void)peripheral:(id)arg0 didUpdateValueForCharacteristic:(id)arg1 updateTime:(id)arg2 error:(id)arg3 ;
-(void)readProperty:(id)arg0 ;


@end


#endif