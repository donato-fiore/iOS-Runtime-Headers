// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef __NSLOCALTIMEZONE_H
#define __NSLOCALTIMEZONE_H



#import "NSTimeZone.h"

@interface __NSLocalTimeZone : NSTimeZone



+(BOOL)supportsSecureCoding;
-(BOOL)isDaylightSavingTimeForDate:(id)arg0 ;
-(CGFloat)daylightSavingTimeOffsetForDate:(id)arg0 ;
-(Class)classForCoder;
-(NSInteger)secondsFromGMTForDate:(id)arg0 ;
-(id)abbreviationForDate:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)data;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)localizedName:(NSInteger)arg0 locale:(id)arg1 ;
-(id)name;
-(id)nextDaylightSavingTimeTransitionAfterDate:(id)arg0 ;
-(id)replacementObjectForPortCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif