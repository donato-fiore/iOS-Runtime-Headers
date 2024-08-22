// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKAVAILABILITYSPANDATE_H
#define EKAVAILABILITYSPANDATE_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface EKAvailabilitySpanDate : NSObject

@property NSInteger dateType; // ivar: _dateType
@property (retain, nonatomic) NSDate *spanDate; // ivar: _spanDate
@property NSInteger spanType; // ivar: _spanType


+(unsigned int)valueForSpanType:(NSInteger)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)description;
-(id)initWithDate:(id)arg0 dateType:(NSInteger)arg1 spanType:(NSInteger)arg2 ;


@end


#endif