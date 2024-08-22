// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _AFBLUETOOTHDEVICEINFOMUTATION_H
#define _AFBLUETOOTHDEVICEINFOMUTATION_H

@class NSString, NSUUID;
@protocol AFBluetoothDeviceInfoMutating;

#import <Foundation/Foundation.h>

#import "AFBluetoothDeviceInfo.h"

@interface _AFBluetoothDeviceInfoMutation : NSObject <AFBluetoothDeviceInfoMutating>

 {
    AFBluetoothDeviceInfo *_baseModel;
    NSString *_address;
    NSUUID *_deviceUID;
    unsigned int _vendorID;
    unsigned int _productID;
    BOOL _isAdvancedAppleAudioDevice;
    BOOL _supportsInEarDetection;
    BOOL _supportsVoiceTrigger;
    BOOL _supportsSpokenNotification;
    BOOL _supportsListeningModeANC;
    BOOL _supportsListeningModeTransparency;
    BOOL _supportsAnnounceCall;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setAddress:(id)arg0 ;
-(void)setDeviceUID:(id)arg0 ;
-(void)setIsAdvancedAppleAudioDevice:(BOOL)arg0 ;
-(void)setProductID:(unsigned int)arg0 ;
-(void)setSupportsAnnounceCall:(BOOL)arg0 ;
-(void)setSupportsInEarDetection:(BOOL)arg0 ;
-(void)setSupportsListeningModeANC:(BOOL)arg0 ;
-(void)setSupportsListeningModeTransparency:(BOOL)arg0 ;
-(void)setSupportsSpokenNotification:(BOOL)arg0 ;
-(void)setSupportsVoiceTrigger:(BOOL)arg0 ;
-(void)setVendorID:(unsigned int)arg0 ;


@end


#endif