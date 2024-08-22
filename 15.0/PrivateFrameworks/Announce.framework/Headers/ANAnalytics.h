// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ANANALYTICS_H
#define ANANALYTICS_H

@class NSString;
@protocol ANAnalyticsDailyDelegate, ANAnalyticsAssistantProtocol, ANAnalyticsDailyProtocol, ANAnalyticsSystemProtocol;

#import <Foundation/Foundation.h>


@interface ANAnalytics : NSObject <ANAnalyticsDailyDelegate>



@property (readonly) NSObject<ANAnalyticsAssistantProtocol> *assistant; // ivar: _assistant
@property (readonly) NSObject<ANAnalyticsDailyProtocol> *dailyReporter; // ivar: _dailyReporter
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) NSObject<ANAnalyticsSystemProtocol> *system; // ivar: _system


+(id)shared;
-(id)initWithSystem:(id)arg0 assistant:(id)arg1 dailyReporter:(id)arg2 ;
-(void)announcementEntryAgeLimit:(id)arg0 timeExceeded:(CGFloat)arg1 context:(id)arg2 ;
-(void)announcementFinishedPlaying:(id)arg0 withTime:(CGFloat)arg1 ofGroupCount:(NSInteger)arg2 context:(id)arg3 ;
-(void)announcementPlayed:(id)arg0 withTime:(CGFloat)arg1 deadlineViolation:(CGFloat)arg2 playbackSource:(NSUInteger)arg3 ofGroupCount:(NSInteger)arg4 context:(id)arg5 ;
-(void)announcementReceived:(id)arg0 withTime:(CGFloat)arg1 receiveTimeType:(NSUInteger)arg2 context:(id)arg3 ;
-(void)announcementSent:(id)arg0 inHome:(id)arg1 withError:(NSInteger)arg2 withTime:(CGFloat)arg3 sendType:(NSUInteger)arg4 ofGroupCount:(NSInteger)arg5 context:(id)arg6 ;
-(void)announcementsExpired:(id)arg0 ofGroupCount:(NSInteger)arg1 context:(id)arg2 ;
-(void)announcementsStorageAgeLimit:(id)arg0 context:(id)arg1 ;
-(void)dailyReport:(id)arg0 withPayload:(id)arg1 ;
-(void)dailyReportComplete;
-(void)dailyReportError:(NSInteger)arg0 ;
-(void)error:(NSInteger)arg0 ;
-(void)error:(NSInteger)arg0 context:(id)arg1 ;
-(void)playbackAction:(NSUInteger)arg0 fromSource:(NSUInteger)arg1 context:(id)arg2 ;
-(void)recordReachableHomes:(id)arg0 ;


@end


#endif