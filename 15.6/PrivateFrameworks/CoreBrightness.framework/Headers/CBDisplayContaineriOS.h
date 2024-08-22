// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CBDISPLAYCONTAINERIOS_H
#define CBDISPLAYCONTAINERIOS_H

@class NSMutableArray, NSArray, NSUUID, NSString, CADisplay;
@protocol CBContainerProtocol, CBHIDServiceProtocol, NightShiftSupportProtocol, CBStatusInfoProtocol, CBContainerModuleProtocol, CBContainerModuleProtocol><CBHIDServiceProtocol, CBContainerProtocol><CBHIDServiceProtocol><NightShiftSupportProtocol, CBBrightnessProxy;


#import "CBContainer.h"
#import "CBCAManager.h"

@interface CBDisplayContaineriOS : CBContainer <CBContainerProtocol, CBHIDServiceProtocol, NightShiftSupportProtocol, CBStatusInfoProtocol>

 {
    NSMutableArray *_relevantServices;
    NSMutableArray *_modules;
    NSArray *_whitelist;
    NSUUID *_displayContainerUUID;
    id<CBContainerModuleProtocol> *_displayControlModule;
    id<CBContainerModuleProtocol><CBHIDServiceProtocol> *_autoBrightnessModule;
    id<CBContainerProtocol><CBHIDServiceProtocol><NightShiftSupportProtocol> *_harmonyContainer;
    id<CBContainerModuleProtocol><CBHIDServiceProtocol> *_edrControlModule;
    unsigned int _displayService;
    BOOL _running;
    BOOL _builtIn;
    NSUInteger _displayID;
    NSUInteger _registryID;
    NSString *_description;
    CADisplay *_display;
    id<CBBrightnessProxy> *_brtCtl;
    *IONotificationPort _displayArrivalNotificationPort;
    unsigned int _displayArrivalIterator;
    unsigned int _displayRemovalIterator;
    CBCAManager *_displayCAManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)addHIDServiceClient:(struct __IOHIDServiceClient *)arg0 ;
-(BOOL)findBacklight;
-(BOOL)handleCBBrtCtlDisplayContainerStart;
-(BOOL)handleCBDisplayContainerStart;
-(BOOL)handleDisplayArrival:(unsigned int)arg0 ;
-(BOOL)handleHIDEvent:(struct __IOHIDEvent *)arg0 from:(struct __IOHIDServiceClient *)arg1 ;
-(BOOL)initialiseHIDDisplay;
-(BOOL)matchDisplayWithHidService:(struct __IOHIDServiceClient *)arg0 ;
-(BOOL)removeHIDServiceClient:(struct __IOHIDServiceClient *)arg0 ;
-(BOOL)setProperty:(id)arg0 forKey:(id)arg1 ;
-(BOOL)setupInternalModules;
-(BOOL)start;
-(id)className;
-(id)copyIdentifiers;
-(id)copyPreferenceForKey:(id)arg0 user:(id)arg1 ;
-(id)copyPropertyForKey:(id)arg0 ;
-(id)copyPropertyInternalForKey:(id)arg0 ;
-(id)copyStatusInfo;
-(id)initWithBacklightService:(unsigned int)arg0 ;
-(id)initWithCADisplay:(id)arg0 ;
-(id)initWithCBBrtControl:(id)arg0 ;
-(void)dealloc;
-(void)handleNotificationForKey:(id)arg0 withProperty:(id)arg1 from:(id)arg2 ;
-(void)registerNotificationBlock:(id)arg0 ;
-(void)sendNotificationForKey:(id)arg0 andValue:(id)arg1 ;
-(void)setNightShiftFactorDictionary:(id)arg0 ;
-(void)setPreference:(id)arg0 forKey:(id)arg1 user:(id)arg2 ;
-(void)stop;
-(void)tearDownInternalModules;
-(void)unregisterNotificationBlock;


@end


#endif