// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKCURRENTVALUEVIEWDATASOURCE_H
#define HKCURRENTVALUEVIEWDATASOURCE_H

@class NSArray, NSString, UILabel, HKHealthStore, UIFont, UIColor;
@protocol HKInteractiveChartAnnotationViewDataSource, HKCurrentValueViewDataSourceDelegate;

#import <Foundation/Foundation.h>

#import "HKDateCache.h"
#import "HKDisplayCategoryController.h"
#import "HKDisplayType.h"
#import "HKSelectedRangeFormatter.h"

@interface HKCurrentValueViewDataSource : NSObject <HKInteractiveChartAnnotationViewDataSource>



@property (retain, nonatomic) NSArray *annotationLabels; // ivar: _annotationLabels
@property (retain, nonatomic) HKDateCache *dateCache; // ivar: _dateCache
@property (retain, nonatomic) NSString *dateIntervalString; // ivar: _dateIntervalString
@property (retain, nonatomic) UILabel *dateLabelView; // ivar: _dateLabelView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HKCurrentValueViewDataSourceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HKDisplayCategoryController *displayCategoryController; // ivar: _displayCategoryController
@property (retain, nonatomic) HKDisplayType *displayType; // ivar: _displayType
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (retain, nonatomic) UIFont *majorFont; // ivar: _majorFont
@property (retain, nonatomic) UIFont *minorFont; // ivar: _minorFont
@property (nonatomic) BOOL pendingData; // ivar: _pendingData
@property (retain, nonatomic) NSArray *selectedRangeData; // ivar: _selectedRangeData
@property (retain, nonatomic) HKSelectedRangeFormatter *selectedRangeFormatter; // ivar: _selectedRangeFormatter
@property (readonly) Class superclass;
@property (retain, nonatomic) UIColor *titleColor; // ivar: _titleColor
@property (retain, nonatomic) UIColor *valueColor; // ivar: _valueColor


+(id)defaultStringForValueRange:(id)arg0 timeScope:(NSInteger)arg1 ;
-(BOOL)_pendingDataForGraphView:(id)arg0 ;
-(BOOL)showSeparators;
-(NSInteger)numberOfValuesForAnnotationView:(id)arg0 ;
-(id)_annotationLabelsFromRangeData:(id)arg0 displayType:(id)arg1 ;
-(id)_dateIntervalStringForGraphView:(id)arg0 timeScope:(NSInteger)arg1 ;
-(id)_delegateTitleForSelectedRangeData:(id)arg0 displayType:(id)arg1 ;
-(id)_delegateValueForSelectedRangeData:(id)arg0 ;
-(id)_delegateValueStringForGraphView:(id)arg0 timeScope:(NSInteger)arg1 ;
-(id)dateViewWithOrientation:(NSInteger)arg0 ;
-(id)initWithDateCache:(id)arg0 displayCategoryController:(id)arg1 healthStore:(id)arg2 selectedRangeFormatter:(id)arg3 ;
-(id)leftMarginViewWithOrientation:(NSInteger)arg0 ;
-(id)valueViewForColumnAtIndex:(NSInteger)arg0 orientation:(NSInteger)arg1 ;
-(void)updateDataSourceWithGraphView:(id)arg0 displayType:(id)arg1 timeScope:(NSInteger)arg2 ;


@end


#endif