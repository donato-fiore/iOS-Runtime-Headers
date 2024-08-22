// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLTIMEREFERENCEDYNAMIC_H
#define PLTIMEREFERENCEDYNAMIC_H

@class NSDate, NSMutableArray, NSMutableDictionary;


#import "PLTimeReference.h"
#import "PLTimer.h"

@interface PLTimeReferenceDynamic : PLTimeReference

@property (retain) NSDate *lastQueryTime; // ivar: _lastQueryTime
@property (retain) NSMutableArray *offsetHistory; // ivar: _offsetHistory
@property int offsetHistoryHead; // ivar: _offsetHistoryHead
@property (retain) PLTimer *periodicCurrentTime; // ivar: _periodicCurrentTime
@property (retain) NSMutableDictionary *timeChangeBlocks; // ivar: _timeChangeBlocks
@property CGFloat tooFarInFutureDistance; // ivar: _tooFarInFutureDistance
@property CGFloat tooFarInPastDistance; // ivar: _tooFarInPastDistance


+(CGFloat)nearestDistanceFromDate:(id)arg0 toRegionWithStartDate:(id)arg1 andEndDate:(id)arg2 ;
-(BOOL)shouldQueryCurrentTime;
-(id)initWithTimeManager:(id)arg0 entryDefinitionKey:(id)arg1 timeReferenceType:(NSInteger)arg2 ;
-(id)newOffsetEntryWithCurrentTime;
-(id)removeTimeOffsetFromReferenceTime:(id)arg0 ;
-(void)checkForTimeChangeWithCurrentTime:(id)arg0 ;
-(void)initializeOffsetHistoryWithEntries:(id)arg0 ;
-(void)initializeOffsetWithEntries:(id)arg0 ;
-(void)notifyTimeChange:(CGFloat)arg0 ;
-(void)registerForClockSetNotification;
-(void)registerForTimeChangedCallbackWithIdentifier:(id)arg0 usingBlock:(id)arg1 ;
-(void)registerForTimeChangedNotification;
-(void)setOffset:(CGFloat)arg0 ;
-(void)unregisterForTimeChangedCallbackWithIdentifier:(id)arg0 ;


@end


#endif