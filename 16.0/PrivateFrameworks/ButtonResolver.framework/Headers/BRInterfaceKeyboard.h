// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRINTERFACEKEYBOARD_H
#define BRINTERFACEKEYBOARD_H

@class NSMutableDictionary, NSMutableSet;


#import "BRInterface.h"

@interface BRInterfaceKeyboard : BRInterface {
    *__IOHIDEventSystemClient _client;
    NSMutableDictionary *_propertyCache;
    NSUInteger _doublePressTimeoutUs;
    NSUInteger _triplePressTimeoutUs;
    NSUInteger _longPressTimeoutUs;
    BOOL _isReady;
    NSUInteger _maxAssetSlots;
    NSUInteger _unusedAssetSlots;
}


@property (readonly, nonatomic) NSMutableSet *services; // ivar: _services


+(id)interface;
-(BOOL)_disableState:(NSUInteger)arg0 ;
-(BOOL)_enableState:(NSUInteger)arg0 ;
-(BOOL)_servicesSetProperty:(*void)arg0 forKey:(struct __CFString *)arg1 ;
-(BOOL)_setCachedPropertiesOnService:(struct __IOHIDServiceClient *)arg0 ;
-(BOOL)_setConfig:(id)arg0 forState:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)disableStates:(id)arg0 clearAsset:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)enableStates:(id)arg0 error:(*id)arg1 ;
-(BOOL)isReady;
-(BOOL)setConfigs:(id)arg0 withAssets:(id)arg1 forStates:(id)arg2 error:(*id)arg3 ;
-(BOOL)setGlobalConfigs:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)maxAssetSlots;
-(NSUInteger)unusedAssetSlots;
-(id)description;
-(id)init;
-(id)propertyList;
-(void)_findServices;
-(void)dealloc;
-(void)scheduleReadyNotificationWithBlock:(id)arg0 ;


@end


#endif