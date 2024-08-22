// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KEYBOARDBRIGHTNESSCLIENT_H
#define KEYBOARDBRIGHTNESSCLIENT_H

@protocol OS_os_log;

#import <Foundation/Foundation.h>

#import "BrightnessSystemClient.h"

@interface KeyboardBrightnessClient : NSObject {
    BrightnessSystemClient *bsc;
    NSObject<OS_os_log> *_logHandle;
}




-(BOOL)enableAutoBrightness:(BOOL)arg0 forKeyboard:(NSUInteger)arg1 ;
-(BOOL)isAmbientFeatureAvailableOnKeyboard:(NSUInteger)arg0 ;
-(BOOL)isAutoBrightnessEnabledForKeyboard:(NSUInteger)arg0 ;
-(BOOL)isBacklightDimmedOnKeyboard:(NSUInteger)arg0 ;
-(BOOL)isBacklightSaturatedOnKeyboard:(NSUInteger)arg0 ;
-(BOOL)isBacklightSuppressedOnKeyboard:(NSUInteger)arg0 ;
-(BOOL)isIdleDimmingSuspendedOnKeyboard:(NSUInteger)arg0 ;
-(BOOL)isKeyboardBuiltIn:(NSUInteger)arg0 ;
-(BOOL)setBrightness:(float)arg0 fadeSpeed:(int)arg1 commit:(BOOL)arg2 forKeyboard:(NSUInteger)arg3 ;
-(BOOL)setBrightness:(float)arg0 forKeyboard:(NSUInteger)arg1 ;
-(BOOL)setIdleDimTime:(CGFloat)arg0 forKeyboard:(NSUInteger)arg1 ;
-(BOOL)suspendIdleDimming:(BOOL)arg0 forKeyboard:(NSUInteger)arg1 ;
-(CGFloat)idleDimTimeForKeyboard:(NSUInteger)arg0 ;
-(float)brightnessForKeyboard:(NSUInteger)arg0 ;
-(id)copyKeyboardBacklightIDs;
-(id)init;
-(void)dealloc;
-(void)registerNotificationForKeys:(id)arg0 keyboardID:(NSUInteger)arg1 block:(id)arg2 ;
-(void)unregisterKeyboardNotificationBlock;


@end


#endif