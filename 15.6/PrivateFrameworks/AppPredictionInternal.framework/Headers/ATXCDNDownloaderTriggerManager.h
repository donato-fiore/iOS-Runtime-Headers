// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXCDNDOWNLOADERTRIGGERMANAGER_H
#define ATXCDNDOWNLOADERTRIGGERMANAGER_H

@class ATXLocationManager;
@protocol OS_dispatch_queue, ATXProactiveCDNDownloaderProtocol, ATXPredictionContextBuilderProtocol;

#import <Foundation/Foundation.h>

#import "ATXHeroAppManager.h"
#import "ATXHeroClipManager.h"
#import "ATXTimeBucketedRateLimiter.h"
#import "ATXHeroDataServer.h"

@interface ATXCDNDownloaderTriggerManager : NSObject {
    id *_restrictionChangedNotificationToken;
    int _siriSettingsChangedNotificationToken;
    NSObject<OS_dispatch_queue> *_queue;
    ATXLocationManager *_locationManager;
}


@property (readonly, nonatomic) NSObject<ATXProactiveCDNDownloaderProtocol> *cdnDownloader; // ivar: _cdnDownloader
@property (readonly, nonatomic) ATXHeroAppManager *heroAppManager; // ivar: _heroAppManager
@property (readonly, nonatomic) ATXHeroClipManager *heroClipManager; // ivar: _heroClipManager
@property (readonly, nonatomic) NSObject<ATXPredictionContextBuilderProtocol> *predictionContextBuilder; // ivar: _predictionContextBuilder
@property (readonly, nonatomic) ATXTimeBucketedRateLimiter *rateLimiter; // ivar: _rateLimiter
@property (readonly, nonatomic) ATXHeroDataServer *server; // ivar: _server


+(BOOL)_locationIsStaleOrNotAccurateEnough:(id)arg0 now:(id)arg1 ;
-(id)init;
-(id)initWithCDNDownloader:(id)arg0 heroAppServer:(id)arg1 heroClipManager:(id)arg2 heroAppManager:(id)arg3 predictionContextBuilder:(id)arg4 nudgeRegistrar:(Class)arg5 locationManager:(id)arg6 ;
-(id)initWithCDNDownloader:(id)arg0 predictionContextBuilder:(id)arg1 nudgeRegistrar:(Class)arg2 ;
-(id)requestHighQualityLocationWithHundredMeterAccuracy;
-(void)_forwardHeroAppPredictionsToHeroAppPredictionsServer:(id)arg0 ;
-(void)_registerForRestrictionChangedNotifications;
-(void)_registerForSiriSettingsChangedNotifications;
-(void)forwardLocationToCDNDownloaderAndHandleReply;
-(void)handleProfileChangedNotification;
-(void)handleSiriSettingsChangedNotification;


@end


#endif