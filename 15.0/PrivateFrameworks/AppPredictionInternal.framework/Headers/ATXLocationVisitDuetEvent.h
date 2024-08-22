// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXLOCATIONVISITDUETEVENT_H
#define ATXLOCATIONVISITDUETEVENT_H

@protocol NSSecureCoding;


#import "ATXDuetEvent.h"

@interface ATXLocationVisitDuetEvent : ATXDuetEvent <NSSecureCoding>





+(BOOL)supportsSecureCoding;
-(id)description;
-(id)identifier;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCurrentContextStoreValues;
-(id)initWithCurrentContextStoreValues:(id)arg0 ;
-(id)initWithLocationOfInterestIdentifier:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif