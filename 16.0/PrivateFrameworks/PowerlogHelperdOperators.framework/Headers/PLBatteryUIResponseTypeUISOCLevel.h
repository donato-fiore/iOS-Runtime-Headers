// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLBATTERYUIRESPONSETYPEUISOCLEVEL_H
#define PLBATTERYUIRESPONSETYPEUISOCLEVEL_H

@class NSArray, NSString, NSDate, PLEntry;
@protocol PLBatteryUIResponseProtocol;

#import <Foundation/Foundation.h>

#import "PLBatteryUIResponderService.h"

@interface PLBatteryUIResponseTypeUISOCLevel : NSObject <PLBatteryUIResponseProtocol>



@property (retain) NSArray *battEntries; // ivar: _battEntries
@property CGFloat bucketSize; // ivar: _bucketSize
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSDate *end; // ivar: _end
@property (readonly) NSUInteger hash;
@property (retain) PLEntry *lastBattEntry; // ivar: _lastBattEntry
@property (retain) PLEntry *lastLPMEntry; // ivar: _lastLPMEntry
@property (retain) NSArray *lpmEntries; // ivar: _lpmEntries
@property (retain) PLBatteryUIResponderService *responderService; // ivar: _responderService
@property (retain) NSArray *resultArray; // ivar: _resultArray
@property (retain) NSDate *start; // ivar: _start
@property (readonly) Class superclass;


-(BOOL)dateIntervals:(id)arg0 containDate:(id)arg1 ;
-(id)entriesInRange:(struct _PLTimeIntervalRange )arg0 fromEntries:(id)arg1 ;
-(id)getLPMIntervalsSpanningRange:(struct _PLTimeIntervalRange )arg0 ;
-(id)result;
-(int)criticalLevel;
-(void)coalesce;
-(void)configure:(id)arg0 ;
-(void)run;


@end


#endif