// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKDATECOMPONENTSRANGEFORMATTER_H
#define PKDATECOMPONENTSRANGEFORMATTER_H

@class NSDateIntervalFormatter;

#import <Foundation/Foundation.h>


@interface PKDateComponentsRangeFormatter : NSObject

@property (retain, nonatomic) NSDateIntervalFormatter *dateIntervalFormatter; // ivar: _dateIntervalFormatter


-(BOOL)_areHoursDefinedInDateComponentsRange:(id)arg0 ;
-(BOOL)_isSameDayInDateComponentsRange:(id)arg0 ;
-(BOOL)_isSameEraInDateComponentsRange:(id)arg0 currentDateComponents:(id)arg1 ;
-(BOOL)_isSameYearInDateComponentsRange:(id)arg0 currentDateComponents:(id)arg1 ;
-(NSInteger)_resolvedEraFromEra:(NSInteger)arg0 currentEra:(NSInteger)arg1 ;
-(id)_currentDateComponents;
-(id)_formatForDateComponentsRange:(id)arg0 ;
-(id)stringFromDateComponentsRange:(id)arg0 ;


@end


#endif