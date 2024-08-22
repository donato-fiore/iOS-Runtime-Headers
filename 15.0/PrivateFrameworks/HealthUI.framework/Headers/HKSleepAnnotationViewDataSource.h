// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKSLEEPANNOTATIONVIEWDATASOURCE_H
#define HKSLEEPANNOTATIONVIEWDATASOURCE_H

@class NSString, NSArray;
@protocol HKInteractiveChartAnnotationViewDataSource;

#import <Foundation/Foundation.h>

#import "HKSleepChartPointUserInfo.h"

@interface HKSleepAnnotationViewDataSource : NSObject <HKInteractiveChartAnnotationViewDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HKSleepChartPointUserInfo *sleepChartPointUserInfo; // ivar: _sleepChartPointUserInfo
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *titles; // ivar: _titles
@property (retain, nonatomic) NSArray *values; // ivar: _values


-(BOOL)showSeparators;
-(NSInteger)numberOfValuesForAnnotationView:(id)arg0 ;
-(id)_dateGroupWithDate:(id)arg0 orientation:(NSInteger)arg1 ;
-(id)_dateRowWithDate:(id)arg0 ;
-(id)_titleBodyGroupWithTitle:(id)arg0 body:(id)arg1 orientation:(NSInteger)arg2 ;
-(id)dateViewWithOrientation:(NSInteger)arg0 ;
-(id)leftMarginViewWithOrientation:(NSInteger)arg0 ;
-(id)valueViewForColumnAtIndex:(NSInteger)arg0 orientation:(NSInteger)arg1 ;


@end


#endif