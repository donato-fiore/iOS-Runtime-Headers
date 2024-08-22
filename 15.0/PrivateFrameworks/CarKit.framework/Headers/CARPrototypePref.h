// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CARPROTOTYPEPREF_H
#define CARPROTOTYPEPREF_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CARPrototypePref : NSObject

@property (nonatomic) BOOL cachedState;
@property (copy, nonatomic) id *cachedValue;
@property (readonly, nonatomic) id *cachedValueOrDefault;
@property (copy, nonatomic) id *defaultValue; // ivar: _defaultValue
@property (copy, nonatomic) NSString *domain; // ivar: _domain
@property (nonatomic) BOOL internalSettingsState;
@property (copy, nonatomic) id *internalSettingsValue;
@property (copy, nonatomic) NSString *key; // ivar: _key
@property (nonatomic) BOOL state;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) id *value;
@property (copy, nonatomic) id *valueChangedBlock; // ivar: _valueChangedBlock
@property (readonly, nonatomic) id *valueOrDefault;


+(BOOL)confirmedSafe;
+(BOOL)qaModeLockout;
+(BOOL)showTrustedLockout;
+(id)_confirmedSafe;
+(id)_qaModeLockout;
+(id)audioSharingEnabled;
+(id)contentSize;
+(id)disableLocationNightMode;
+(id)fakeNeatlineDashboardSupport;
+(id)flipDashboardLayout;
+(id)interfaceStyle;
+(id)latestInterfaceStyle;
+(id)nowPlayingAlbumArt;
+(id)prefWithDomain:(id)arg0 key:(id)arg1 title:(id)arg2 defaultValue:(id)arg3 valueChangedBlock:(id)arg4 ;
+(id)prototypePrefCache;
+(id)prototypePrefs;
+(id)showCarPlayTemplateUIHostInCluster;
+(id)showInternalApps;
+(id)showInternalSettings;
+(id)showPrototypeApps;
+(id)smartWidgetDebugGestures;
+(id)smartWidgetDebugShowScore;
+(id)smartWidgetRelaxHomeInRangeCheck;
+(id)statusBarEdgeOverride;
+(id)statusBarHorizontalThreshold;
+(id)useNightModeTester;
+(id)useSceneInterfaceStyle;
+(void)setConfirmedSafe:(BOOL)arg0 ;
+(void)setPrototypePrefCache:(id)arg0 ;
+(void)setQaModeLockout:(BOOL)arg0 ;
-(id)description;


@end


#endif