// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPRESTRICTIONSMONITOR_H
#define MPRESTRICTIONSMONITOR_H

@class NSMutableDictionary, MCProfileConnection, NSString;
@protocol MCProfileConnectionObserver;

#import <Foundation/Foundation.h>


@interface MPRestrictionsMonitor : NSObject <MCProfileConnectionObserver>

 {
    os_unfair_lock_s _lock;
    NSMutableDictionary *_cachedSettings;
    MCProfileConnection *_connection;
}


@property (readonly, nonatomic) BOOL allowsAccountModification; // ivar: _allowsAccountModification
@property (readonly, nonatomic) BOOL allowsDeletion; // ivar: _allowsDeletion
@property (readonly, nonatomic) BOOL allowsExplicitContent; // ivar: _allowsExplicitContent
@property (readonly, nonatomic) BOOL allowsMusicSubscription; // ivar: _allowsMusicSubscription
@property (readonly, nonatomic) BOOL allowsMusicVideos; // ivar: _allowsMusicVideos
@property (readonly, nonatomic) BOOL allowsRadioPurchases; // ivar: _allowsRadioPurchases
@property (readonly, nonatomic) BOOL allowsRadioService; // ivar: _allowsRadioService
@property (readonly, nonatomic) BOOL allowsStorePurchases; // ivar: _allowsStorePurchases
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasRestrictionsPasscode;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger maximumMovieRating;
@property (nonatomic) NSInteger maximumMovieRatingForAgeGate; // ivar: _maximumMovieRatingForAgeGate
@property (readonly, nonatomic) NSInteger maximumTVShowRating;
@property (nonatomic) NSInteger maximumTVShowRatingForAgeGate; // ivar: _maximumTVShowRatingForAgeGate
@property (readonly) Class superclass;


+(id)sharedRestrictionsMonitor;
-(BOOL)_isRunningInStoreDemoMode;
-(id)effectiveValueForSetting:(id)arg0 ;
-(id)init;
-(void)_cacheValue:(id)arg0 forSetting:(id)arg1 ;
-(void)_updateWithCanPostNotifications:(BOOL)arg0 ;
-(void)dealloc;
-(void)handleAllowExplicitSettingDidChangeNotification:(id)arg0 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg0 userInfo:(id)arg1 ;


@end


#endif