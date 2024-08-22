// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOROUTEHYPOTHESIZERANALYTICSSTORE_H
#define GEOROUTEHYPOTHESIZERANALYTICSSTORE_H

@class NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GEORouteHypothesizerAnalyticsStore : NSObject <NSSecureCoding>

 {
    CGFloat _observedEarlyDeltaFromRequiredTimeToLeave;
    CGFloat _observedLateDeltaFromRequiredTimeToLeave;
    NSUInteger _hypothesizerRerouteCount;
    NSUInteger _hypothesisCount;
    BOOL _stopped;
    NSUInteger _uiNotificationType;
    NSDate *_lastGenerationDate;
}


@property (nonatomic) NSUInteger etaUpdatesAfterEventStart; // ivar: _etaUpdatesAfterEventStart
@property (nonatomic) BOOL etaUpdatesWereReported; // ivar: _etaUpdatesWereReported


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)didArriveWithExpectedArrivalTime:(id)arg0 ;
-(void)didGenerateHypothesis;
-(void)didReroute;
-(void)didShowUI:(NSUInteger)arg0 ;
-(void)didStartMovingWithExpectedDepartureTime:(id)arg0 ;
-(void)didStopHypothesizing;
-(void)didStopMoving;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif