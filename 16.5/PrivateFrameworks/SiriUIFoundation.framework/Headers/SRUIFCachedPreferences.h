// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SRUIFCACHEDPREFERENCES_H
#define SRUIFCACHEDPREFERENCES_H

@class NSUserDefaults, NSHashTable, AFSettingsConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SRUIFCachedPreferences : NSObject {
    NSUserDefaults *_textInputDefaults;
    BOOL _isHoldToTalkForTextInputEnabled;
    BOOL _isSiriMiniEnabled;
    BOOL _isStreamingDictationEnabled;
    BOOL _isSiriSafeForLockScreen;
    BOOL _announceNotificationsInCarPlayTemporarilyDisabled;
    BOOL _understandingOnDeviceAssetsAvailable;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_uodAssetsqueue;
    NSHashTable *_observers;
    AFSettingsConnection *_settingsConnection;
}


@property (readonly, nonatomic) BOOL announceNotificationsInCarPlayTemporarilyDisabled;
@property (readonly, nonatomic) BOOL isHoldToTalkForTextInputEnabled;
@property (readonly, nonatomic) BOOL isSiriMiniEnabled;
@property (readonly, nonatomic) BOOL isSiriSafeForLockScreen;
@property (readonly, nonatomic) BOOL isStreamingDictationEnabled;
@property (readonly, nonatomic) BOOL understandingOnDeviceAssetsAvailable;


+(id)sharedInstance;
-(id)init;
-(void)_notifyObserversOfSettingsChangeWithBlock:(id)arg0 ;
-(void)_setUODAssetsAvailable:(BOOL)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)removeObserver:(id)arg0 ;
-(void)updatePreferences;
-(void)updateUODAssetsState;


@end


#endif