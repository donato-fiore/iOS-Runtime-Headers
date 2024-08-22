// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXPSAPDEVICE_H
#define AXPSAPDEVICE_H



#import "AXHearingAidDevice.h"

@interface AXPSAPDevice : AXHearingAidDevice



+(id)characteristicsUUIDs;
-(NSUInteger)deviceType;
-(NSUInteger)requiredProperties;
-(id)persistentRepresentation;
-(id)serviceUUID;


@end


#endif