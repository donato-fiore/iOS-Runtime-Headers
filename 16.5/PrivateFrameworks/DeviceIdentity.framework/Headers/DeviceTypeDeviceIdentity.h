// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DEVICETYPEDEVICEIDENTITY_H
#define DEVICETYPEDEVICEIDENTITY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface DeviceTypeDeviceIdentity : NSObject

@property (readonly, copy, nonatomic) NSString *device_class; // ivar: _device_class
@property (readonly, nonatomic) BOOL device_supports_dcrt_oob; // ivar: _device_supports_dcrt_oob
@property (readonly, copy, nonatomic) NSString *hardware_model; // ivar: _hardware_model
@property (readonly, nonatomic) BOOL has_baseband; // ivar: _has_baseband
@property (readonly, nonatomic) BOOL has_internal_diagnostics; // ivar: _has_internal_diagnostics
@property (readonly, nonatomic) BOOL is_audio_accessory; // ivar: _is_audio_accessory
@property (readonly, nonatomic) BOOL is_dev_board; // ivar: _is_dev_board
@property (readonly, nonatomic) BOOL is_devfused_undemoted; // ivar: _is_devfused_undemoted
@property (readonly, nonatomic) BOOL is_fpga; // ivar: _is_fpga
@property (readonly, nonatomic) BOOL is_internal_build; // ivar: _is_internal_build
@property (readonly, nonatomic) BOOL is_ipad; // ivar: _is_ipad
@property (readonly, nonatomic) BOOL is_iphone; // ivar: _is_iphone
@property (readonly, nonatomic) BOOL is_ipod; // ivar: _is_ipod
@property (readonly, nonatomic) BOOL is_prodfused_demoted; // ivar: _is_prodfused_demoted
@property (readonly, nonatomic) BOOL is_virtual_machine; // ivar: _is_virtual_machine
@property (readonly, copy, nonatomic) NSString *product_type; // ivar: _product_type
@property (readonly, nonatomic) BOOL should_hactivate; // ivar: _should_hactivate
@property (readonly, copy, nonatomic) NSString *soc_generation; // ivar: _soc_generation


+(id)sharedInstance;
-(BOOL)runningInRAMDisk;
-(BOOL)vmmPresent;
-(id)copyBootArgs;
-(id)copyBootSessionUUID;
-(id)copyDeviceTreeInt:(id)arg0 key:(id)arg1 defaultValue:(int)arg2 ;
-(id)copyDeviceTreeProperty:(id)arg0 key:(id)arg1 ;
-(id)copyDeviceTreeString:(id)arg0 key:(id)arg1 defaultValue:(id)arg2 ;
-(id)init;


@end


#endif