// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKSTATICDATEGRAPHVIEWCONTROLLER_H
#define _HKSTATICDATEGRAPHVIEWCONTROLLER_H

@class NSMutableArray;


#import "HKDateGraphViewController.h"
#import "HKValueRange.h"

@interface _HKStaticDateGraphViewController : HKDateGraphViewController

@property (retain, nonatomic) NSMutableArray *allStackedSeries; // ivar: _allStackedSeries
@property (readonly, nonatomic) HKValueRange *fixedRange; // ivar: _fixedRange


-(NSInteger)stackCountForGraphView:(id)arg0 ;
-(id)graphView:(id)arg0 graphSeriesForZoom:(NSInteger)arg1 stackOffset:(NSInteger)arg2 ;
-(id)initWithFixedRange:(id)arg0 currentCalendar:(id)arg1 ;
-(void)addStackedSeries:(id)arg0 ;
-(void)graphView:(id)arg0 didUpdateSeries:(id)arg1 newDataArrived:(BOOL)arg2 changeContext:(NSInteger)arg3 ;
-(void)viewDidLoad;


@end


#endif