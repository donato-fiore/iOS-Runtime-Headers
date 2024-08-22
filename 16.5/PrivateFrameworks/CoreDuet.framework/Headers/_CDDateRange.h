// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CDDATERANGE_H
#define _CDDATERANGE_H

@class NSDate;
@protocol _CDDateRangeProtocol;

#import <Foundation/Foundation.h>


@interface _CDDateRange : NSObject <_CDDateRangeProtocol>



@property (readonly) CGFloat duration;
@property (readonly) NSDate *endDate; // ivar: _endDate
@property (readonly) NSDate *startDate; // ivar: _startDate


+(id)periodWithEnd:(id)arg0 duration:(CGFloat)arg1 ;
+(id)periodWithStart:(id)arg0 duration:(CGFloat)arg1 ;
+(id)periodWithStart:(id)arg0 end:(id)arg1 ;
-(BOOL)contains:(id)arg0 ;
-(id)description;
-(id)initWithStart:(id)arg0 andEnd:(id)arg1 ;


@end


#endif