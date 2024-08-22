// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ANANALYTICSDAILYMESSAGING_H
#define ANANALYTICSDAILYMESSAGING_H

@class NSDictionary;
@protocol ANAnalyticsDailyMessagingProtocol, ANRapportConnectionProvider;

#import <Foundation/Foundation.h>


@interface ANAnalyticsDailyMessaging : NSObject <ANAnalyticsDailyMessagingProtocol>



@property (readonly, nonatomic) NSDictionary *devicesCountingAnnouncements;
@property (readonly, nonatomic) BOOL isDeviceAnalyticsCoordinator;
@property (readonly, nonatomic) NSObject<ANRapportConnectionProvider> *rapportConnection; // ivar: _rapportConnection


-(id)init;
-(void)registerDailyRequest:(id)arg0 ;
-(void)sendDailyRequest:(id)arg0 handler:(id)arg1 ;


@end


#endif