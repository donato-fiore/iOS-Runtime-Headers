// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ENBEACONCOUNTMETRICS_H
#define ENBEACONCOUNTMETRICS_H

@class NSMutableSet, NSDate;

#import <Foundation/Foundation.h>


@interface ENBeaconCountMetrics : NSObject {
    CGFloat _previousTimestamp;
    NSUInteger _currentInsertionWindowIndex;
    NSMutableSet *_currentInsertionWindowObservedRPI;
    NSUInteger _beaconCountWindowCount;
    *NSUInteger _beaconCountWindows;
}


@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly, nonatomic) CGFloat windowDuration; // ivar: _windowDuration


-(NSUInteger)beaconCountAtDate:(id)arg0 ;
-(id)differentialPrivacyRepresentationWithCountThresholds:(id)arg0 ;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 windowDuration:(CGFloat)arg2 ;
-(void)addAdvertisement:(id)arg0 ;
-(void)dealloc;
-(void)enumerateBeaconCountWindows:(id)arg0 ;


@end


#endif