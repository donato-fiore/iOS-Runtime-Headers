// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRINTERFACELEGACY_H
#define BRINTERFACELEGACY_H

@class NSMutableArray;


#import "BRInterface.h"

@interface BRInterfaceLegacy : BRInterface {
    BOOL _isReady;
    *__IOHIDEventSystemClient _client;
    NSMutableArray *_services;
    id *_block;
    NSUInteger _doublePressTimeoutUs;
    NSUInteger _triplePressTimeoutUs;
    NSUInteger _doubleTapTimeoutUs;
    NSUInteger _tripleTapTimeoutUs;
    NSUInteger _longPressTimeoutUs;
    NSUInteger _maxAssetSlots;
    NSUInteger _unusedAssetSlots;
}


@property (nonatomic) BOOL tapOnly; // ivar: _tapOnly


+(BOOL)_isTapState:(NSUInteger)arg0 ;
+(id)interface;
-(BOOL)_disableState:(NSUInteger)arg0 ;
-(BOOL)_enableState:(NSUInteger)arg0 ;
-(BOOL)_servicesSetProperty:(*void)arg0 forKey:(struct __CFString *)arg1 ;
-(BOOL)_setConfig:(id)arg0 forState:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)_setDefaultServicePropertiesOnService:(struct __IOHIDServiceClient *)arg0 ;
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
-(void)serviceAddedHandler:(struct __IOHIDServiceClient *)arg0 ;


@end


#endif