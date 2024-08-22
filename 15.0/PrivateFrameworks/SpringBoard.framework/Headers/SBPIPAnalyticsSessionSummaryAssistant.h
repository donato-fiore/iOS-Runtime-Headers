// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBPIPANALYTICSSESSIONSUMMARYASSISTANT_H
#define SBPIPANALYTICSSESSIONSUMMARYASSISTANT_H



#import "SBPIPAnalyticsAssistant.h"

@interface SBPIPAnalyticsSessionSummaryAssistant : SBPIPAnalyticsAssistant {
    CGFloat _stashedDuration;
    CGFloat _stashedTimestamp;
    NSInteger _numberOfStashEvents;
    BOOL _restoredFullScreen;
    BOOL _startedAutomatically;
    BOOL _appStoppedSession;
}




-(id)_generateMutableAnalyticsPayload;
-(id)analyticsIdentifier;
-(id)initWithBundleIdentifier:(id)arg0 contentType:(NSInteger)arg1 isAutoPIPEnabled:(BOOL)arg2 invalidationBlock:(id)arg3 ;
-(void)invalidate;
-(void)noteAppStoppedSession:(BOOL)arg0 ;
-(void)noteBecameStashedAtTime:(CGFloat)arg0 ;
-(void)noteBecameUnstashedAtTime:(CGFloat)arg0 ;
-(void)noteRestoredFullScreen:(BOOL)arg0 ;
-(void)noteStartedAutomatically:(BOOL)arg0 ;


@end


#endif