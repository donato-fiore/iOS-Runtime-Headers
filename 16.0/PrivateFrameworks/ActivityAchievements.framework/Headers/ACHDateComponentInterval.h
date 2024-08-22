// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACHDATECOMPONENTINTERVAL_H
#define ACHDATECOMPONENTINTERVAL_H

@class NSDateComponents;

#import <Foundation/Foundation.h>


@interface ACHDateComponentInterval : NSObject

@property (readonly, nonatomic) NSDateComponents *endDateComponents; // ivar: _endDateComponents
@property (readonly, nonatomic) NSDateComponents *startDateComponents; // ivar: _startDateComponents


-(BOOL)containsDateComponents:(id)arg0 inCalendar:(id)arg1 ;
-(NSUInteger)countOfDaysContainedInIntervalInCalendar:(id)arg0 ;
-(id)chunked:(NSInteger)arg0 calendar:(id)arg1 ;
-(id)description;
-(id)initWithStartDateComponents:(id)arg0 endDateComponents:(id)arg1 ;


@end


#endif