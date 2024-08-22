// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TVPDATERANGE_H
#define TVPDATERANGE_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface TVPDateRange : NSObject

@property (readonly, nonatomic) CGFloat durationInSeconds; // ivar: _durationInSeconds
@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate


-(BOOL)containsDate:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)dateRangeByIntersectingDateRange:(id)arg0 ;
-(id)description;
-(id)initWithStartDate:(id)arg0 duration:(CGFloat)arg1 ;


@end


#endif