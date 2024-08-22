// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFMYRIADPREFERENCES_H
#define AFMYRIADPREFERENCES_H


#import <Foundation/Foundation.h>

#import "AFInstanceContext.h"
#import "AFPreferences.h"

@interface AFMyriadPreferences : NSObject {
    AFInstanceContext *_instanceContext;
    AFPreferences *_pref;
}




-(BOOL)BLEActivityEnabled;
-(BOOL)coordinationEnabled;
-(BOOL)coordinationEnabledForAccessoryLogging;
-(BOOL)ignoreAdjustedBoost;
-(BOOL)ignorePlatformBias;
-(BOOL)myriadServerHasProvisioned;
-(CGFloat)deviceDelay;
-(CGFloat)deviceSlowDown;
-(CGFloat)deviceTrumpDelay;
-(CGFloat)maxNoOperationDelay;
-(CGFloat)testDeviceDelay;
-(CGFloat)voiceTriggerEndtimeDelayThreshold;
-(float)deviceAdjust;
-(id)initWithDeviceInstanceContext:(id)arg0 preferences:(id)arg1 ;
-(int)constantGoodnessScore;
-(unsigned char)deviceClass;
-(unsigned char)deviceGroup;
-(void)enableCoordination:(BOOL)arg0 ;
-(void)setConstantGoodnessScore:(int)arg0 ;
-(void)setDeviceAdjust:(float)arg0 ;
-(void)setDeviceClass:(unsigned char)arg0 ;
-(void)setDeviceDelay:(CGFloat)arg0 ;
-(void)setDeviceGroup:(unsigned char)arg0 completion:(id)arg1 ;
-(void)setDeviceSlowDown:(CGFloat)arg0 ;
-(void)setDeviceTrumpDelay:(CGFloat)arg0 ;
-(void)setIgnoreAdjustedBoost:(BOOL)arg0 ;
-(void)setIgnorePlatformBias:(BOOL)arg0 ;
-(void)setMaxNoOperationDelay:(CGFloat)arg0 ;
-(void)setTestDeviceDelay:(CGFloat)arg0 ;
-(void)setVoiceTriggerEndtimeDelayThreshold:(CGFloat)arg0 ;


@end


#endif