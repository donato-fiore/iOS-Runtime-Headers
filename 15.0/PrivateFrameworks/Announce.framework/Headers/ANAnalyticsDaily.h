// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ANANALYTICSDAILY_H
#define ANANALYTICSDAILY_H

@protocol ANAnalyticsDailyProtocol, ANBackgroundActivityProtocol, ANDefaultsProtocol, ANAnalyticsDailyDelegate, ANAnalyticsDailyMessagingProtocol;

#import <Foundation/Foundation.h>

#import "ANAnalyticsStorage.h"
#import "ANHomeManager.h"

@interface ANAnalyticsDaily : NSObject <ANAnalyticsDailyProtocol>



@property (retain, nonatomic) NSObject<ANBackgroundActivityProtocol> *backgroundActivity; // ivar: _backgroundActivity
@property (retain, nonatomic) NSObject<ANDefaultsProtocol> *defaults; // ivar: _defaults
@property (weak, nonatomic) NSObject<ANAnalyticsDailyDelegate> *delegate; // ivar: delegate
@property (readonly, nonatomic) ANAnalyticsStorage *eventStorage; // ivar: _eventStorage
@property (retain, nonatomic) ANHomeManager *homeManager; // ivar: _homeManager
@property (retain, nonatomic) NSObject<ANAnalyticsDailyMessagingProtocol> *messagingConnection; // ivar: _messagingConnection


-(BOOL)_isCoordinationDevice;
-(id)_dailyResponse;
-(id)_stringForDeferredResult:(NSInteger)arg0 ;
-(id)init;
-(id)initWithBackgroundActivity:(id)arg0 defaults:(id)arg1 homeManager:(id)arg2 messagingConnection:(id)arg3 ;
-(void)_cleanup;
-(void)_collectForAnnounce:(id)arg0 ;
-(void)_collectForAnnouncementsInHome:(id)arg0 completion:(id)arg1 ;
-(void)_collectForHome:(id)arg0 homes:(id)arg1 ;
-(void)_collectPayload:(id)arg0 ;
-(void)_executeBackgroundActivity:(id)arg0 ;
-(void)_recordExecutionTime;
-(void)_registerRapportDailyRequest;
-(void)_reportEventStorage;
-(void)_resetDailyAnnouncements;
-(void)announcementSent:(id)arg0 inHome:(id)arg1 ;
-(void)recordReachableHomes:(id)arg0 ;
-(void)start;


@end


#endif