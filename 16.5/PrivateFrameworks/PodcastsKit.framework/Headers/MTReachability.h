// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTREACHABILITY_H
#define MTREACHABILITY_H

@class NSHashTable, RadiosPreferences, ITMReachability;
@protocol RadiosPreferencesDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MTReachability : NSObject <RadiosPreferencesDelegate>



@property (readonly, nonatomic, getter=isAirplaneModeEnabled) BOOL airplaneModeEnabled; // ivar: _airplaneModeEnabled
@property (retain, nonatomic) NSHashTable *callbacks; // ivar: _callbacks
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cellularQueue; // ivar: _cellularQueue
@property (nonatomic, getter=isGlobalCellularEnabled) BOOL globalCellularEnabled; // ivar: _globalCellularEnabled
@property (nonatomic) BOOL hasDeterminedActualGlobalCellularState; // ivar: _hasDeterminedActualGlobalCellularState
@property (nonatomic) NSInteger networkStatus; // ivar: _networkStatus
@property (readonly, nonatomic, getter=isPodcastsCellularDownloadsEnabled) BOOL podcastsCellularDownloadsEnabled;
@property (retain, nonatomic) RadiosPreferences *radiosPreferences; // ivar: _radiosPreferences
@property (retain, nonatomic) ITMReachability *reachability; // ivar: _reachability
@property (nonatomic, getter=isReachable) BOOL reachable; // ivar: _reachable
@property (readonly, nonatomic, getter=isReachableViaCellular) BOOL reachableViaCellular;
@property (readonly, nonatomic, getter=isReachableViaWifi) BOOL reachableViaWifi;


+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)sharedInstance;
-(BOOL)showInternetUnreachableDialog;
-(BOOL)showInternetUnreachableDialogWithAcknowledmentBlock:(id)arg0 ;
-(NSUInteger)reasonForNoInternet;
-(id)copy;
-(id)init;
-(id)reasonTextForNoInternet;
-(void)_applicationDidBecomeActive;
-(void)_showAlertForInternetUnavailableReason:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)_updateAirplaneMode;
-(void)_updateGlobalCellularWithCompletion:(id)arg0 ;
-(void)_updateReachability;
-(void)addObserver:(id)arg0 ;
-(void)airplaneModeChanged;
-(void)dealloc;
-(void)removeObserver:(id)arg0 ;


@end


#endif