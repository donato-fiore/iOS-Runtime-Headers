// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDHEARTRATESERVICE_H
#define HDHEARTRATESERVICE_H



#import "HDHealthService.h"

@interface HDHeartRateService : HDHealthService {
    BOOL _deliverData;
}


@property (nonatomic) NSInteger preferredSensorLocation; // ivar: _preferredSensorLocation


+(NSInteger)serviceType;
+(id)serviceUUID;
-(BOOL)deliverData;
-(BOOL)supportsOperation:(id)arg0 ;
-(id)initWithServiceManager:(id)arg0 peripheral:(id)arg1 advertisementData:(id)arg2 profile:(id)arg3 ;
-(void)performOperation:(id)arg0 onPeripheral:(id)arg1 withParameters:(id)arg2 completion:(id)arg3 ;
-(void)peripheral:(id)arg0 didDiscoverCharacteristic:(id)arg1 ;
-(void)peripheral:(id)arg0 didUpdateValueForCharacteristic:(id)arg1 updateTime:(id)arg2 error:(id)arg3 ;
-(void)setDeliverData:(BOOL)arg0 ;


@end


#endif