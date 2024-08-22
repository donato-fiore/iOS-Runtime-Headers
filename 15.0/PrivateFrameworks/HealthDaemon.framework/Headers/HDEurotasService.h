// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDEUROTASSERVICE_H
#define HDEUROTASSERVICE_H



#import "HDHealthService.h"

@interface HDEurotasService : HDHealthService



+(NSInteger)serviceType;
+(id)serviceUUID;
-(id)servicesInProfile;
-(void)peripheral:(id)arg0 didDiscoverCharacteristic:(id)arg1 ;
-(void)peripheral:(id)arg0 didUpdateValueForCharacteristic:(id)arg1 updateTime:(id)arg2 error:(id)arg3 ;


@end


#endif