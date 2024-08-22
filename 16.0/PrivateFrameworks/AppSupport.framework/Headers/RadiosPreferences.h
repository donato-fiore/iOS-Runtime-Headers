// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RADIOSPREFERENCES_H
#define RADIOSPREFERENCES_H

@protocol OS_dispatch_queue, OS_os_log, RadiosPreferencesDelegate;

#import <Foundation/Foundation.h>


@interface RadiosPreferences : NSObject {
    *__SCPreferences _prefs;
    int _applySkipCount;
    BOOL _isCachedAirplaneModeValid;
    BOOL _cachedAirplaneMode;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_os_log> *radios_prefs_log;
}


@property (nonatomic) BOOL airplaneMode;
@property (nonatomic) NSObject<RadiosPreferencesDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL notifyForExternalChangeOnly; // ivar: notifyForExternalChangeOnly


+(BOOL)shouldMirrorAirplaneMode;
-(*void)getValueForKey:(id)arg0 ;
-(*void)getValueWithLockForKey:(id)arg0 ;
-(BOOL)telephonyStateWithBundleIdentifierOut:(*id)arg0 ;
-(id)init;
-(id)initWithQueue:(id)arg0 ;
-(void)dealloc;
-(void)initializeSCPrefs:(id)arg0 ;
-(void)notifyTarget:(unsigned int)arg0 ;
-(void)refresh;
-(void)release;
-(void)setCallback:(*unk)arg0 withContext:(struct ? *)arg1 ;
-(void)setTelephonyState:(BOOL)arg0 fromBundleID:(id)arg1 ;
-(void)setValue:(*void)arg0 forKey:(id)arg1 ;
-(void)synchronize;


@end


#endif