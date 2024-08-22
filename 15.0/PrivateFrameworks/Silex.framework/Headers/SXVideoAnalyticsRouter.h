// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXVIDEOANALYTICSROUTER_H
#define SXVIDEOANALYTICSROUTER_H

@class NSString, NSMutableDictionary;
@protocol SXAnalyticsReporting;

#import <Foundation/Foundation.h>


@interface SXVideoAnalyticsRouter : NSObject <SXAnalyticsReporting>



@property (nonatomic) NSUInteger currentPlaybackLocation; // ivar: _currentPlaybackLocation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasReroutedInitiatedPlaybackEvent; // ivar: _hasReroutedInitiatedPlaybackEvent
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger initiatedPlaybackLocation; // ivar: _initiatedPlaybackLocation
@property (readonly, nonatomic) NSMutableDictionary *reporters; // ivar: _reporters
@property (readonly) Class superclass;


-(id)analyticsReporterForEvent:(id)arg0 ;
-(id)initWithInitiatedPlaybackLocation:(NSUInteger)arg0 analyticsReporter:(id)arg1 ;
-(id)reporterForPlaybackLocation:(NSUInteger)arg0 ;
-(void)reportEvent:(id)arg0 ;
-(void)setAnalyticsReporter:(id)arg0 forPlaybackLocation:(NSUInteger)arg1 ;


@end


#endif