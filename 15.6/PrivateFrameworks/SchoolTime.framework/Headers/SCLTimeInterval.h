// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCLTIMEINTERVAL_H
#define SCLTIMEINTERVAL_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SCLScheduleTime.h"

@interface SCLTimeInterval : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) SCLScheduleTime *endTime; // ivar: _endTime
@property (readonly, copy, nonatomic) SCLScheduleTime *startTime; // ivar: _startTime


+(BOOL)supportsSecureCoding;
-(BOOL)containsScheduleTime:(id)arg0 ;
-(BOOL)crossesDayBoundary;
-(BOOL)intersectsTimeInterval:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStartTime:(id)arg0 endTime:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif