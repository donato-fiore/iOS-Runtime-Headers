// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FHDATETIMEAGGREGATEFEATURE_H
#define FHDATETIMEAGGREGATEFEATURE_H

@class NSDate;


#import "FHAggregateFeature.h"

@interface FHDateTimeAggregateFeature : FHAggregateFeature

@property (copy, nonatomic) NSDate *endDate; // ivar: _endDate
@property (copy, nonatomic) NSDate *startDate; // ivar: _startDate


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif