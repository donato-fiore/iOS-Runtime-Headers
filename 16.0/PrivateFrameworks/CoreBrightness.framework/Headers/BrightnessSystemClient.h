// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRIGHTNESSSYSTEMCLIENT_H
#define BRIGHTNESSSYSTEMCLIENT_H

@protocol OS_os_log;

#import <Foundation/Foundation.h>

#import "BrightnessSystemClientInternal.h"

@interface BrightnessSystemClient : NSObject {
    BrightnessSystemClientInternal *bsci;
    NSObject<OS_os_log> *_logHandle;
    id *_displayNotificationBlock;
    id *_keyboardNotificationBlock;
    id *_propertyNotificationBlock;
}




-(BOOL)isAlsSupported;
-(BOOL)setProperty:(id)arg0 forKey:(id)arg1 ;
-(BOOL)setProperty:(id)arg0 withKey:(id)arg1 andDisplay:(NSUInteger)arg2 ;
-(BOOL)setProperty:(id)arg0 withKey:(id)arg1 keyboardID:(NSUInteger)arg2 ;
-(id)copyPropertyForKey:(id)arg0 ;
-(id)copyPropertyForKey:(id)arg0 andDisplay:(NSUInteger)arg1 ;
-(id)copyPropertyForKey:(id)arg0 keyboardID:(NSUInteger)arg1 ;
-(id)init;
-(void)dealloc;
-(void)registerDisplayNotificationCallbackBlock:(id)arg0 ;
-(void)registerKeyboardNotificationCallbackBlock:(id)arg0 ;
-(void)registerNotificationBlock:(id)arg0 ;
// -(void)registerNotificationBlock:(id)arg0 forProperties:(unk)arg1  ;
-(void)registerNotificationForKey:(id)arg0 ;
-(void)registerNotificationForKey:(id)arg0 andDisplay:(NSUInteger)arg1 ;
-(void)registerNotificationForKeys:(id)arg0 ;
-(void)registerNotificationForKeys:(id)arg0 andDisplay:(NSUInteger)arg1 ;
-(void)registerNotificationForKeys:(id)arg0 keyboardID:(NSUInteger)arg1 ;
-(void)unregisterDisplayNotificationBlock;
-(void)unregisterKeyboardNotificationBlock;
-(void)unregisterNotificationForKey:(id)arg0 ;
-(void)unregisterNotificationForKey:(id)arg0 andDisplay:(NSUInteger)arg1 ;
-(void)unregisterNotificationForKeys:(id)arg0 ;
-(void)unregisterNotificationForKeys:(id)arg0 andDisplay:(NSUInteger)arg1 ;
-(void)unregisterNotificationForKeys:(id)arg0 keyboardID:(NSUInteger)arg1 ;
-(void)unregisterPropertyNotificationBlock;


@end


#endif