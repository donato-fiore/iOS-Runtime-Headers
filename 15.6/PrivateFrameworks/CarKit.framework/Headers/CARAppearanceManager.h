// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CARAPPEARANCEMANAGER_H
#define CARAPPEARANCEMANAGER_H

@class NSMutableDictionary, NSArray;
@protocol CARAppearanceManagerDelegate;

#import <Foundation/Foundation.h>


@interface CARAppearanceManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *appearanceModeDictionary; // ivar: _appearanceModeDictionary
@property (retain, nonatomic) NSMutableDictionary *appearanceModeSettingDictionary; // ivar: _appearanceModeSettingDictionary
@property (retain, nonatomic) NSMutableDictionary *currentEffectiveMapStyle; // ivar: _currentEffectiveMapStyle
@property (retain, nonatomic) NSMutableDictionary *currentEffectiveUIStyle; // ivar: _currentEffectiveUIStyle
@property (weak, nonatomic) NSObject<CARAppearanceManagerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL locationBasedNightMode; // ivar: _locationBasedNightMode
@property (nonatomic) BOOL locationNightModeDisabled; // ivar: _locationNightModeDisabled
@property (retain, nonatomic) NSMutableDictionary *mapAppearanceModeDictionary; // ivar: _mapAppearanceModeDictionary
@property (retain, nonatomic) NSMutableDictionary *mapAppearanceModeSettingDictionary; // ivar: _mapAppearanceModeSettingDictionary
@property (retain, nonatomic) NSMutableDictionary *nightModeDictionary; // ivar: _nightModeDictionary
@property (retain, nonatomic) NSArray *screens; // ivar: _screens


+(NSInteger)_carUserInterfaceStyleForAppearanceMode:(NSUInteger)arg0 ;
+(id)_descriptionForAppearanceSetting:(NSInteger)arg0 ;
-(BOOL)effectiveGlobalNightMode;
-(NSInteger)effectiveStyleForMapAppearanceForScreenUUID:(id)arg0 ;
-(NSInteger)effectiveStyleForUIAppearanceForScreenUUID:(id)arg0 ;
-(id)_mainScreenInfo;
-(id)_screenInfoForScreenUUID:(id)arg0 ;
-(id)initWithScreens:(id)arg0 initialSystemNightMode:(BOOL)arg1 initialLocationBasedNightMode:(BOOL)arg2 delegate:(id)arg3 ;
-(void)_resolveMapsStylesAndNotify:(BOOL)arg0 ;
-(void)_resolveUIStylesAndNotify:(BOOL)arg0 ;
-(void)_setInitialDisplayNightModeForScreen:(id)arg0 ;
-(void)_setInitialMapAppearanceNumberForScreen:(id)arg0 ;
-(void)_setInitialUIAppearanceNumberForScreen:(id)arg0 ;
-(void)handleLocationBasedNightModeUpdate:(BOOL)arg0 ;
-(void)handleMapAppearanceUpdateWithParameters:(id)arg0 ;
-(void)handleNightModeUpdateWithParameters:(id)arg0 ;
-(void)handleUIAppearanceUpdateWithParameters:(id)arg0 ;
-(void)setDisableLocationNightMode;


@end


#endif