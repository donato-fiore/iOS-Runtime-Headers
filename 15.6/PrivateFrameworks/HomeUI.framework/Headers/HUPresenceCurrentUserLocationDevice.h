// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUPRESENCECURRENTUSERLOCATIONDEVICE_H
#define HUPRESENCECURRENTUSERLOCATIONDEVICE_H

@class HMDevice;

#import <Foundation/Foundation.h>


@interface HUPresenceCurrentUserLocationDevice : NSObject

@property (readonly, nonatomic) HMDevice *customDevice; // ivar: _customDevice
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(id)FMFDevice;
+(id)currentDevice;
+(id)customDeviceWithHMDevice:(id)arg0 ;
-(id)initWithType:(NSUInteger)arg0 customDevice:(id)arg1 ;


@end


#endif