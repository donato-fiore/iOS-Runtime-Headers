// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CBBRIGHTNESSPROXYCA_H
#define CBBRIGHTNESSPROXYCA_H

@class NSDictionary, NSString, NSUUID;
@protocol CBBrightnessProxy, OS_os_log, CABrightnessControl;

#import <Foundation/Foundation.h>


@interface CBBrightnessProxyCA : NSObject <CBBrightnessProxy>

 {
    NSObject<OS_os_log> *_logHandle;
    id<CABrightnessControl> *_brightnessControl;
}


@property (readonly) NSUInteger CBDispTypeDFR; // ivar: _CBDispTypeDFR
@property (readonly) NSUInteger CBDispTypeExternal; // ivar: _CBDispTypeExternal
@property (readonly) NSUInteger CBDispTypeIntegrated; // ivar: _CBDispTypeIntegrated
@property (readonly) NSUInteger CBDispTypeVirtual; // ivar: _CBDispTypeVirtual
@property (readonly) NSUInteger CBDispTypeWireless; // ivar: _CBDispTypeWireless
@property BOOL allowUpdates; // ivar: _allowUpdates
@property (readonly) BOOL brightnessAvailable;
@property (readonly) NSDictionary *brightnessCapabilities;
@property (readonly) id *brightnessNotificationAttached;
@property (readonly) id *brightnessNotificationDetached;
@property (readonly) id *brightnessNotificationFlipBookOff; // ivar: _brightnessNotificationFlipBookOff
@property (readonly) id *brightnessNotificationFlipBookOn; // ivar: _brightnessNotificationFlipBookOn
@property (readonly) id *brightnessNotificationPowerOff; // ivar: _brightnessNotificationPowerOff
@property (readonly) id *brightnessNotificationPowerOn; // ivar: _brightnessNotificationPowerOn
@property (readonly) id *brightnessNotificationRequestEDR; // ivar: _brightnessNotificationRequestEDR
@property (readonly) NSString *brightnessRequestEDRHeadroom; // ivar: _brightnessRequestEDRHeadroom
@property (readonly) NSString *brightnessRequestRampDuration; // ivar: _brightnessRequestRampDuration
@property (readonly) NSUUID *containerId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) int displayId;
@property (readonly) NSUInteger displayType;
@property (readonly) NSUInteger hash;
@property (readonly) float maximumLuminance;
@property (readonly) ? nativeWhitePoint;
@property (readonly) NSUInteger productId;
@property (readonly) NSUInteger serialNumber;
@property (readonly) Class superclass;
@property (readonly) NSUUID *uuid;
@property (readonly) NSUInteger vendorId;
@property (readonly) BOOL whitePointAvailable;


-(BOOL)commitBrightness:(*id)arg0 ;
-(BOOL)commitBrightness:(*id)arg0 withBlock:(id)arg1 ;
-(BOOL)forceCommitBrightness:(*id)arg0 withBlock:(id)arg1 ;
-(BOOL)isBrightnessAvailable;
-(BOOL)isWhitePointAvailable;
-(BOOL)isWhitePointD50XYZ;
-(BOOL)setContrastEnhancer:(float)arg0 rampDuration:(CGFloat)arg1 error:(*id)arg2 ;
-(BOOL)setWhitePoint:(id)arg0 rampDuration:(CGFloat)arg1 error:(*id)arg2 ;
-(NSUInteger)getDisplayType;
-(NSUInteger)getProductId;
-(NSUInteger)getVendorId;
-(id)getBrightnessCapabilities;
-(id)getUUID;
-(id)initWithCABrightnessControl:(id)arg0 ;
-(unsigned int)getDisplayId;
-(void)dealloc;
-(void)registerForNotifications:(id)arg0 withBlock:(id)arg1 ;
-(void)setAmbient:(float)arg0 ;
-(void)setBrightnessControlDisabled:(BOOL)arg0 ;
-(void)setBrightnessLimit:(float)arg0 ;
-(void)setHeadroom:(float)arg0 ;
-(void)setLowAmbientAdaptation:(float)arg0 ;
-(void)setNotificationQueue:(id)arg0 ;
-(void)setPotentialHeadroom:(float)arg0 ;
-(void)setSDRBrightness:(float)arg0 ;
-(void)unregisterNotificationBlocks;


@end


#endif