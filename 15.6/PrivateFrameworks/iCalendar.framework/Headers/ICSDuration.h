// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICSDURATION_H
#define ICSDURATION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ICSDuration : NSObject <NSSecureCoding>

 {
    CGFloat _duration;
}




+(BOOL)supportsSecureCoding;
+(id)durationFromICSString:(id)arg0 ;
+(id)durationFromRFC2445UTF8String:(char *)arg0 ;
+(id)generateDurationFromICSString:(id)arg0 ;
-(BOOL)isNegative;
-(CGFloat)timeInterval;
-(NSInteger)days;
-(NSInteger)hours;
-(NSInteger)minutes;
-(NSInteger)seconds;
-(NSInteger)weeks;
-(id)ICSStringWithOptions:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithWeeks:(NSInteger)arg0 days:(NSInteger)arg1 hours:(NSInteger)arg2 minutes:(NSInteger)arg3 seconds:(NSInteger)arg4 ;
-(void)_ICSStringWithOptions:(NSUInteger)arg0 appendingToString:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif