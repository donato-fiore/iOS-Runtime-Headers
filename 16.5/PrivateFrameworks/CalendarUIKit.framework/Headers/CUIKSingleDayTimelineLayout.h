// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUIKSINGLEDAYTIMELINELAYOUT_H
#define CUIKSINGLEDAYTIMELINELAYOUT_H

@class NSArray, NSMutableArray, NSDate, NSCalendar;
@protocol CUIKSingleDayTimelineViewItem, CUIKSingleDayTimelineGeometryDelegate, CUIKSingleDayTimelineLayoutScreenUtils;

#import <Foundation/Foundation.h>


@interface CUIKSingleDayTimelineLayout : NSObject {
    NSArray *_occurrences;
    NSUInteger _currentOccurrenceIndex;
    id<CUIKSingleDayTimelineViewItem> *_currentOccurrence;
    NSMutableArray *_partitions;
    NSMutableArray *_occurrenceBuckets;
    NSMutableArray *_collidingOccurrences;
    NSDate *_startOfDay;
    NSDate *_endOfDay;
    CGFloat _startOfDayAbsoluteTime;
    CGFloat _endOfDayAbsoluteTime;
    CGRect _frame;
    NSCalendar *_calendar;
    id<CUIKSingleDayTimelineGeometryDelegate> *_geometryDelegate;
    id<CUIKSingleDayTimelineLayoutScreenUtils> *_screenUtilsDelegate;
}




-(BOOL)_inputIsInvalid;
-(BOOL)isRightToLeftLayout;
-(CGFloat)_adjustedEndTimeForOccurrence:(id)arg0 ;
-(CGFloat)_adjustedStartTimeForOccurrence:(id)arg0 ;
-(CGFloat)_combinedWidthOfPartitions;
-(CGFloat)_effectiveEndTimeForOccurrence:(id)arg0 ;
-(CGFloat)_endOfCollisionZoneForY:(CGFloat)arg0 occurrence:(id)arg1 ;
-(CGFloat)_topOfOccurrence:(id)arg0 ;
-(id)initWithOccurrences:(id)arg0 startOfDay:(id)arg1 endOfDay:(id)arg2 geometryDelegate:(id)arg3 screenUtilsDelegate:(id)arg4 calendar:(id)arg5 ;
-(struct CGRect )_rectForStartSeconds:(NSInteger)arg0 endSeconds:(NSInteger)arg1 ;
-(void)_calculateVerticalFrameAspectsForOccurrence:(id)arg0 ;
-(void)_capVisibleTextForBucket:(id)arg0 ;
-(void)_findCollidingOccurrences;
-(void)_generateNewPartitions;
-(void)_initializeFirstGridStripe;
-(void)_mergePartitions;
-(void)_popOccurrencesInPartition:(id)arg0 endingBeforeTime:(CGFloat)arg1 ;
-(void)_putCollidingOccurrencesIntoBucketsInResize:(BOOL)arg0 ;
-(void)_reclaimSpaceFromStackedOccurrences;
-(void)_stampOccurrenceFrames;
-(void)applyLayoutToOccurrences;
-(void)applyLayoutToOccurrencesInResize:(BOOL)arg0 ;


@end


#endif