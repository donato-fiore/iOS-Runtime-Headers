// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRINTERFACEAOP_H
#define BRINTERFACEAOP_H

@class NSString, HAButtonHapticsLoader, NSMutableIndexSet, NSMutableArray, NSMutableDictionary;


#import "BRInterface.h"

@interface BRInterfaceAOP : BRInterface {
    *IONotificationPort _notificationPort;
    unsigned int _arrivalNotification;
    id *_notificationBlock;
    NSString *_notificationName;
    HAButtonHapticsLoader *_loader;
    NSMutableIndexSet *_freeSlots;
    NSMutableArray *_slotArray;
    NSMutableDictionary *_stateDict;
    BOOL _isReady;
    NSUInteger _maxAssetSlots;
}


@property (nonatomic) unsigned int connect; // ivar: _connect
@property (readonly, nonatomic) BOOL fastHaptics; // ivar: _fastHaptics
@property (nonatomic) unsigned int service; // ivar: _service


+(id)interface;
+(int)_convertClickState:(NSUInteger)arg0 ;
+(int)_convertForceFeel:(NSUInteger)arg0 ;
-(BOOL)_serviceSetProperty:(*void)arg0 forKey:(struct __CFString *)arg1 ;
-(BOOL)_setDefaultAOPConfigs;
-(BOOL)_setGlobalAOPConfigsFromBRFConfigs:(id)arg0 ;
-(BOOL)_setStateAOPConfigsFromStateData:(id)arg0 andSlotData:(id)arg1 ;
-(BOOL)disableStates:(id)arg0 clearAsset:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)enableStates:(id)arg0 error:(*id)arg1 ;
-(BOOL)isReady;
-(BOOL)playState:(NSUInteger)arg0 forSpeed:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)setConfigs:(id)arg0 withAssets:(id)arg1 forStates:(id)arg2 error:(*id)arg3 ;
-(BOOL)setGlobalConfigs:(id)arg0 error:(*id)arg1 ;
-(BOOL)updateReadyState;
-(NSUInteger)maxAssetSlots;
-(NSUInteger)unusedAssetSlots;
-(id)dataForSlot:(id)arg0 fromArray:(id)arg1 ;
-(id)description;
-(id)init;
-(id)initWithFastHaptics:(BOOL)arg0 ;
-(id)propertyList;
-(void)_findService;
-(void)_receiveLoaderAvailableNotification:(id)arg0 ;
-(void)dealloc;
-(void)mergeStateChanges:(id)arg0 into:(id)arg1 ;
-(void)scheduleReadyNotificationWithBlock:(id)arg0 ;


@end


#endif