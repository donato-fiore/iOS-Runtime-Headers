// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXCHINSUGGESTIONTHROTTLINGMANAGER_H
#define ATXCHINSUGGESTIONTHROTTLINGMANAGER_H

@class NSUserDefaults;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ATXChinSuggestionRequest.h"

@interface ATXChinSuggestionThrottlingManager : NSObject {
    CGFloat _maxWallClockTimeCredits;
    CGFloat _wallClockTimeCreditsReplenishingRate;
    BOOL _requestIsScheduledToRunOrIsRunning;
    ATXChinSuggestionRequest *_pendingRequest;
    NSObject<OS_dispatch_queue> *_requestManagementQueue;
    NSObject<OS_dispatch_queue> *_requestProcessingQueue;
    NSUserDefaults *_defaults;
    NSUInteger _debuggingRequestSequenceNumber;
}




-(CGFloat)now;
-(CGFloat)timestampWallClockTimeCreditsLastReplenished;
-(CGFloat)wallClockTimeCredits;
-(id)init;
-(void)_processRequest:(id)arg0 ;
-(void)_schedulePendingRequest;
-(void)logAcceptedEventToCoreAnalytics;
-(void)logReceivedEventToCoreAnalytics;
-(void)logRejectedEventToCoreAnalytics;
-(void)logWallClockTimeToCoreAnalytics:(CGFloat)arg0 ;
-(void)replenishWallClockTimeCredits;
-(void)scheduleRequest:(id)arg0 ;
-(void)setTimestampWallClockTimeCreditsLastReplenished:(CGFloat)arg0 ;
-(void)setWallClockTimeCredits:(CGFloat)arg0 ;


@end


#endif