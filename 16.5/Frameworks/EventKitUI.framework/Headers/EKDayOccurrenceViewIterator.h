// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKDAYOCCURRENCEVIEWITERATOR_H
#define EKDAYOCCURRENCEVIEWITERATOR_H

@class NSString, NSArray;
@protocol EKBidirectionallyIterable;

#import <Foundation/Foundation.h>


@interface EKDayOccurrenceViewIterator : NSObject <EKBidirectionallyIterable>



@property NSInteger currentIndex; // ivar: _currentIndex
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property NSInteger firstTimedOccurrenceIndex; // ivar: _firstTimedOccurrenceIndex
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *occurrenceViews; // ivar: _occurrenceViews
@property (readonly) Class superclass;


-(NSInteger)_firstTimedOccurrenceViewIndexInOccurrenceViews:(id)arg0 ;
-(NSInteger)_nextIndexFromCurrentIndex:(NSInteger)arg0 forward:(BOOL)arg1 ;
-(NSInteger)_selectedCopyOccurrenceViewIndexInOccurrenceViews:(id)arg0 selectedIndex:(NSInteger)arg1 ;
-(NSInteger)_selectedOccurrenceViewIndexInOccurrenceViews:(id)arg0 selectedEvent:(id)arg1 ;
-(id)_occurrenceViewAtIndex:(NSInteger)arg0 ;
-(id)initWithOccurrenceViews:(id)arg0 selectedEvent:(id)arg1 ;
-(id)next;
-(id)previous;
-(void)_prepareOccurrenceViewsForIteration:(id)arg0 selectedEvent:(id)arg1 result:(id)arg2 ;
-(void)_separateOccurrenceViews:(id)arg0 result:(id)arg1 ;


@end


#endif