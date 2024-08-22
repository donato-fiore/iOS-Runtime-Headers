// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CBBRIGHTNESSPROXYCA_H
#define CBBRIGHTNESSPROXYCA_H

@class NSString;
@protocol CBBrightnessProxy, OS_os_log, CABrightnessControl;

#import <Foundation/Foundation.h>


@interface CBBrightnessProxyCA : NSObject <CBBrightnessProxy>

 {
    NSObject<OS_os_log> *_logHandle;
    id<CABrightnessControl> *_brightnessControl;
}


@property (readonly) id *CBDispTypeDFR; // ivar: _CBDispTypeDFR
@property (readonly) id *CBDispTypeExternal; // ivar: _CBDispTypeExternal
@property (readonly) id *CBDispTypeIntegrated; // ivar: _CBDispTypeIntegrated
@property (readonly) id *CBDispTypeVirtual; // ivar: _CBDispTypeVirtual
@property (readonly) id *CBDispTypeWireless; // ivar: _CBDispTypeWireless
@property (readonly) id *brightnessNotificationRequestEDR; // ivar: _brightnessNotificationRequestEDR
@property (readonly) NSString *brightnessRequestEDRHeadroom; // ivar: _brightnessRequestEDRHeadroom
@property (readonly) NSString *brightnessRequestRampDuration; // ivar: _brightnessRequestRampDuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)commitBrightness:(*id)arg0 ;
-(BOOL)isBrightnessAvailable;
-(BOOL)isWhitePointAvailable;
-(BOOL)isWhitePointD50XYZ;
-(BOOL)setWhitePoint:(id)arg0 rampDuration:(CGFloat)arg1 error:(*id)arg2 ;
-(NSUInteger)getProductId;
-(NSUInteger)getVendorId;
-(id)getBrightnessCapabilities;
-(id)getDisplayType;
-(id)getUUID;
-(id)initWithCABrightnessControl:(id)arg0 ;
-(unsigned int)getDisplayId;
-(void)dealloc;
-(void)registerForNotifications:(id)arg0 withBlock:(id)arg1 ;
-(void)setAmbient:(float)arg0 ;
-(void)setBrightnessLimit:(float)arg0 ;
-(void)setHeadroom:(float)arg0 ;
-(void)setNotificationQueue:(id)arg0 ;
-(void)setPotentialHeadroom:(float)arg0 ;
-(void)setSDRBrightness:(float)arg0 ;
-(void)unregisterNotificationBlocks;


@end


#endif