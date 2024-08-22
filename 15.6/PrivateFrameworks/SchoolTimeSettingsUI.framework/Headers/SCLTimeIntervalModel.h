// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCLTIMEINTERVALMODEL_H
#define SCLTIMEINTERVALMODEL_H

@class NSMutableArray, NSCalendar, NSDateInterval, NSArray, NSString;
@protocol SCLTimeIntervalDateConverting;

#import <Foundation/Foundation.h>


@interface SCLTimeIntervalModel : NSObject <SCLTimeIntervalDateConverting>

 {
    NSMutableArray *_timeIntervals;
}


@property (readonly, nonatomic) NSCalendar *calendar; // ivar: _calendar
@property (nonatomic) BOOL canAppendTimeInterval; // ivar: _canAppendTimeInterval
@property (readonly, nonatomic) BOOL canRemoveTimeIntervals;
@property (readonly, nonatomic) NSDateInterval *canonicalDateInterval; // ivar: _canonicalDateInterval
@property (readonly, copy, nonatomic) NSArray *constraintIntervals;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *timeIntervals;


+(id)defaultTimeInterval;
-(id)canonicalDateIntervalForTimeInterval:(id)arg0 ;
-(id)init;
-(id)initWithTimeIntervals:(id)arg0 ;
-(id)nextProposedTimeInterval;
-(id)scheduleTimeWithDate:(id)arg0 ;
-(void)_recalculateCanAppend;
-(void)appendTimeInterval:(id)arg0 ;
-(void)removeTimeIntervalAtIndex:(NSUInteger)arg0 ;
-(void)replaceTimeIntervalAtIndex:(NSUInteger)arg0 withTimeInterval:(id)arg1 ;


@end


#endif