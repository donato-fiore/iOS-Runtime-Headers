// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUFACERECOGNITIONRECENTEVENTSITEMPROVIDER_H
#define HUFACERECOGNITIONRECENTEVENTSITEMPROVIDER_H

@class HFItemProvider, NSDateInterval, HMHome, NSMutableSet;



@interface HUFaceRecognitionRecentEventsItemProvider : HFItemProvider

@property (retain, nonatomic) NSDateInterval *dateRange; // ivar: _dateRange
@property (nonatomic) NSUInteger fetchLimit; // ivar: _fetchLimit
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) NSMutableSet *personItems; // ivar: _personItems


+(BOOL)prefersNonBlockingReloads;
+(id)_coalescedItems:(id)arg0 ;
+(id)cameraSignificantEventDateComparator:(SEL)arg0 ;
-(id)initWithHome:(id)arg0 ;
-(id)invalidationReasons;
-(id)items;
-(id)reloadItems;


@end


#endif