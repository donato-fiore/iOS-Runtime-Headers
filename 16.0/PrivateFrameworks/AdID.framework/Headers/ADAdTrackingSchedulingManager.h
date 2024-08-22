// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ADADTRACKINGSCHEDULINGMANAGER_H
#define ADADTRACKINGSCHEDULINGMANAGER_H

@class NSString, APSConnection;
@protocol APSConnectionDelegate, NSObject;

#import <Foundation/Foundation.h>

#import "ADLoggingProfileMonitor.h"

@interface ADAdTrackingSchedulingManager : NSObject <APSConnectionDelegate>



@property (retain, nonatomic) NSObject<NSObject> *accountChangedNotifyToken; // ivar: _accountChangedNotifyToken
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isConfigRequestInFlight; // ivar: _isConfigRequestInFlight
@property (retain, nonatomic) ADLoggingProfileMonitor *loggingProfileMonitor; // ivar: _loggingProfileMonitor
@property (retain, nonatomic) APSConnection *pushConnection; // ivar: _pushConnection
@property (retain, nonatomic) NSObject<NSObject> *storeFrontNotifyToken; // ivar: _storeFrontNotifyToken
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)_shouldSaveConfig;
-(BOOL)isAdEnabledLocality;
-(BOOL)isNewsOrStocksEnabledLocality;
-(BOOL)isSearchAdsEnabled;
-(BOOL)isSearchOrSegmentEnabled;
-(NSInteger)latestPersonalizedConsentVersion;
-(id)currentBundleID;
-(id)init;
-(id)retrieveNewsRecord:(*id)arg0 ;
-(void)connection:(id)arg0 didReceiveIncomingMessage:(id)arg1 ;
-(void)connection:(id)arg0 didReceivePublicToken:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveToken:(id)arg1 forTopic:(id)arg2 identifier:(id)arg3 ;
-(void)dealloc;
-(void)forceExpiration;
-(void)handleAccountChange;
-(void)handleConfiguration;
-(void)migratePersonalizedAdsFromLAT;
-(void)migratePersonalizedAdsOnboarding;
-(void)pushDisable;
-(void)pushEnable;
-(void)refreshConfiguration:(id)arg0 ;
-(void)registerForLockStateNotification;


@end


#endif