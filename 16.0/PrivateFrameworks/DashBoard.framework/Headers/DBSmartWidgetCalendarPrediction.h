// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBSMARTWIDGETCALENDARPREDICTION_H
#define DBSMARTWIDGETCALENDARPREDICTION_H

@class NSDate, NSArray;


#import "DBSmartWidgetPrediction.h"

@interface DBSmartWidgetCalendarPrediction : DBSmartWidgetPrediction

@property (readonly, nonatomic) BOOL allDay;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSArray *events; // ivar: _events
@property (nonatomic, getter=isSoonestEvent) BOOL soonestEvent; // ivar: _soonestEvent
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) BOOL variousEndDates;


+(CGFloat)initialValidInterval;
+(CGFloat)maxValue;
+(CGFloat)minValue;
+(NSInteger)baseScore;
+(SEL)isEqualClassSelector;
+(id)earliestStartDate;
+(id)latestStartDate;
+(id)now;
+(void)setNow:(id)arg0 ;
-(BOOL)isEqualToCalendarPrediction:(id)arg0 ;
-(BOOL)showImageBorder;
-(BOOL)updateWithPrediction:(id)arg0 ;
-(CGFloat)initialValidInterval;
-(CGFloat)value;
-(NSInteger)tieBreakScore;
-(id)_uuidFromString:(id)arg0 ;
-(id)actionBlock:(SEL)arg0 ;
-(id)defaultValidRanges;
-(id)image;
-(id)initWithEvent:(id)arg0 ;
-(id)predictedObject;
-(id)predictedObjectDescription;
-(id)subtitle;
-(id)title;
-(void)addEvent:(id)arg0 ;
-(void)updateRangeIfNeeded:(id)arg0 ;


@end


#endif