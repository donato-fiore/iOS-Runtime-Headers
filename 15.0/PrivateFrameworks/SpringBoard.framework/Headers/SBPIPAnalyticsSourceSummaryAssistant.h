// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBPIPANALYTICSSOURCESUMMARYASSISTANT_H
#define SBPIPANALYTICSSOURCESUMMARYASSISTANT_H



#import "SBPIPAnalyticsAssistant.h"

@interface SBPIPAnalyticsSourceSummaryAssistant : SBPIPAnalyticsAssistant {
    BOOL _PIPBecameActive;
    CGFloat _possibleDuration;
    CGFloat _possibleTimestamp;
}




-(id)_generateMutableAnalyticsPayload;
-(id)analyticsIdentifier;
-(id)initWithBundleIdentifier:(id)arg0 contentType:(NSInteger)arg1 isAutoPIPEnabled:(BOOL)arg2 invalidationBlock:(id)arg3 ;
-(void)invalidate;
-(void)noteBecameActiveAtTime:(CGFloat)arg0 ;
-(void)notePIPBecamePossibleAtTime:(CGFloat)arg0 ;
-(void)notePIPBecameProhibitedAtTime:(CGFloat)arg0 ;


@end


#endif