// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GCFUSEDLOGICALDEVICE_H
#define _GCFUSEDLOGICALDEVICE_H

@class GCDefaultLogicalDevice;
@protocol _GCPhysicalDevice;



@interface _GCFusedLogicalDevice : GCDefaultLogicalDevice

@property (readonly, nonatomic) NSObject<_GCPhysicalDevice> *secondaryDevice; // ivar: _secondaryDevice


-(id)_makeControllerGamepadEventSource;
-(id)init;
-(id)initWithPrimaryPhysicalDevice:(id)arg0 secondaryPhysicalDevice:(id)arg1 configuration:(id)arg2 manager:(id)arg3 ;
-(id)underlyingDevices;


@end


#endif