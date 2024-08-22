// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRSUBSCRIBEPARAMS_H
#define MTRSUBSCRIBEPARAMS_H

@class NSNumber;


#import "MTRReadParams.h"

@interface MTRSubscribeParams : MTRReadParams

@property (copy, nonatomic) NSNumber *autoResubscribe;
@property (copy, nonatomic) NSNumber *keepPreviousSubscriptions;
@property (copy, nonatomic) NSNumber *maxInterval; // ivar: _maxInterval
@property (copy, nonatomic) NSNumber *minInterval; // ivar: _minInterval
@property (nonatomic, getter=shouldReplaceExistingSubscriptions) BOOL replaceExistingSubscriptions; // ivar: _replaceExistingSubscriptions
@property (nonatomic, getter=shouldReportEventsUrgently) BOOL reportEventsUrgently; // ivar: _reportEventsUrgently
@property (nonatomic, getter=shouldResubscribeAutomatically) BOOL resubscribeAutomatically; // ivar: _resubscribeAutomatically


+(id)new;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithMinInterval:(id)arg0 maxInterval:(id)arg1 ;
-(void)toReadPrepareParams:(*void)arg0 ;


@end


#endif