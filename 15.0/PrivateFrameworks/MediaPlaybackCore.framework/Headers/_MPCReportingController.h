// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MPCREPORTINGCONTROLLER_H
#define _MPCREPORTINGCONTROLLER_H

@class MPAssistantAnalyticsReportingController, NSString, MPRTCReportingController;
@protocol ICEnvironmentMonitorObserver;

#import <Foundation/Foundation.h>

#import "MPCJinglePlayActivityReportingController.h"
#import "MPCLyricsReportingController.h"
#import "MPCPlaybackEngine.h"
#import "MPCPlaybackHistoryController.h"
#import "MPCReportingPlaybackObserver.h"

@interface _MPCReportingController : NSObject <ICEnvironmentMonitorObserver>



@property (retain, nonatomic) MPAssistantAnalyticsReportingController *assistantAnalyticsController; // ivar: _assistantAnalyticsController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MPCJinglePlayActivityReportingController *jinglePlayActivityReportingController; // ivar: _jinglePlayActivityReportingController
@property (retain, nonatomic) MPCLyricsReportingController *lyricsReportingController; // ivar: _lyricsReportingController
@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine; // ivar: _playbackEngine
@property (retain, nonatomic) MPCPlaybackHistoryController *playbackHistoryController; // ivar: _playbackHistoryController
@property (retain, nonatomic) MPCReportingPlaybackObserver *reportingPlaybackObserver; // ivar: _reportingPlaybackObserver
@property (retain, nonatomic) MPRTCReportingController *rtcReportingController; // ivar: _rtcReportingController
@property (readonly) Class superclass;


-(id)initWithPlaybackEngine:(id)arg0 ;
-(void)dealloc;
-(void)environmentMonitorDidChangeNetworkType:(id)arg0 ;
-(void)recordLyricsViewEvent:(id)arg0 ;
-(void)reportUserSeekFromTime:(CGFloat)arg0 toTime:(CGFloat)arg1 ;


@end


#endif