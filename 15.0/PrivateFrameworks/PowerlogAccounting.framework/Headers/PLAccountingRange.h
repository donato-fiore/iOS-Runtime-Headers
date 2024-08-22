// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLACCOUNTINGRANGE_H
#define PLACCOUNTINGRANGE_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface PLAccountingRange : NSObject

@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) CGFloat length;
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate


+(id)emptyRange;
+(id)rangeWithStartDate:(id)arg0 withEndDate:(id)arg1 ;
-(BOOL)containsDate:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)overlaps:(id)arg0 ;
-(id)description;
-(id)initWithStartDate:(id)arg0 withEndDate:(id)arg1 ;
-(id)intersect:(id)arg0 ;


@end


#endif