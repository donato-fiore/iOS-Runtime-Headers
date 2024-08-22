// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSIDATEFILTER_H
#define PSIDATEFILTER_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "PSIDate.h"

@interface PSIDateFilter : NSObject <NSCopying>



@property (copy, nonatomic) NSString *displayString; // ivar: _displayString
@property (readonly) PSIDate *endDate; // ivar: _endDate
@property (readonly) NSInteger int64RepresentationMask;
@property (readonly) PSIDate *singleDate; // ivar: _singleDate
@property (readonly) PSIDate *startDate; // ivar: _startDate


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithEndDateComponents:(id)arg0 ;
-(id)initWithSingleDate:(id)arg0 ;
-(id)initWithSingleDateComponents:(id)arg0 ;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 ;
-(id)initWithStartDateComponents:(id)arg0 ;
-(id)initWithStartDateComponents:(id)arg0 endDateComponents:(id)arg1 ;


@end


#endif