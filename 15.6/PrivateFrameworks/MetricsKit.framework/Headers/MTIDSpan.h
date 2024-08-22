// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTIDSPAN_H
#define MTIDSPAN_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface MTIDSpan : NSObject

@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (retain, nonatomic) NSDate *referenceDate; // ivar: _referenceDate
@property (nonatomic) NSUInteger serialNumber; // ivar: _serialNumber
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate


+(id)localCalendar;
+(id)spanForScheme:(id)arg0 date:(id)arg1 referenceDate:(id)arg2 ;
-(id)initWithScheme:(id)arg0 date:(id)arg1 referenceDate:(id)arg2 ;


@end


#endif