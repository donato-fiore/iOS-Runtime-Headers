// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKCATEGORICALDATEAXIS_H
#define HKCATEGORICALDATEAXIS_H

@class NSArray, NSDateComponents;


#import "HKDateAxis.h"

@interface HKCategoricalDateAxis : HKDateAxis

@property (nonatomic) NSInteger categoriesStartHourPosition; // ivar: _categoriesStartHourPosition
@property (copy, nonatomic) NSArray *categoryTitles; // ivar: _categoryTitles
@property (copy, nonatomic) NSDateComponents *majorAxisIntervalComponents; // ivar: _majorAxisIntervalComponents
@property (copy, nonatomic) NSDateComponents *minorAxisIntervalComponents; // ivar: _minorAxisIntervalComponents


+(CGFloat)_categoryLocationIntervalForCategoryCount:(NSInteger)arg0 ;
+(CGFloat)_categoryStartLocationForCategoryCount:(NSInteger)arg0 ;
+(id)datePositionForCategoryIndex:(NSInteger)arg0 categoryCount:(NSInteger)arg1 startDate:(id)arg2 calendar:(id)arg3 ;
-(BOOL)canAddLabelForAxisLabelType:(NSInteger)arg0 ;
-(id)axisLabelIntervalComponentsForZoomLevelConfiguration:(id)arg0 ;
-(id)initWithCurrentCalendar:(id)arg0 axisStyle:(id)arg1 categoryTitles:(id)arg2 ;
-(id)minorAxisIntervalComponentsForZoomLevelConfiguration:(id)arg0 ;
-(id)stringForDate:(id)arg0 zoom:(NSInteger)arg1 labelType:(NSInteger)arg2 ;


@end


#endif