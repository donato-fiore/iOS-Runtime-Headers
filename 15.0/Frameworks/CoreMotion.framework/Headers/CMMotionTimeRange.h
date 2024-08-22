// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMMOTIONTIMERANGE_H
#define CMMOTIONTIMERANGE_H

@class NSDate;


#import "CMLogItem.h"

@interface CMMotionTimeRange : CMLogItem {
    NSDate *fStartDate;
    NSDate *fEndDate;
}


@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSDate *startDate;


+(BOOL)supportsSecureCoding;
+(id)CMMotionTimeRangeFromCLMotionTimeRange:(struct ? )arg0 ;
+(struct ? )CLMotionTimeRangeFromCMMotionTimeRange:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStartDate:(CGFloat)arg0 endDate:(CGFloat)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif