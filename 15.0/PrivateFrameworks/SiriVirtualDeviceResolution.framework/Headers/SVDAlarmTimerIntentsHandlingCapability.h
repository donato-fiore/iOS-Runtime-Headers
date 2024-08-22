// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SVDALARMTIMERINTENTSHANDLINGCAPABILITY_H
#define SVDALARMTIMERINTENTSHANDLINGCAPABILITY_H



#import "SVDCapability.h"
#import "_TtC27SiriVirtualDeviceResolution35AlarmTimerIntentsHandlingCapability.h"

@interface SVDAlarmTimerIntentsHandlingCapability : SVDCapability {
    _TtC27SiriVirtualDeviceResolution35AlarmTimerIntentsHandlingCapability *_backing;
}




+(BOOL)supportsSecureCoding;
+(id)capabilityDescriptionMatchingSupportStatus:(NSInteger)arg0 ;
-(NSInteger)supportsAlarmTimerIntentsHandling;
-(id)_swiftBacking;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStatus:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif