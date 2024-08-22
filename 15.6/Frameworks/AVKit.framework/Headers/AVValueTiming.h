// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVVALUETIMING_H
#define AVVALUETIMING_H

@protocol NSSecureCoding, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface AVValueTiming : NSObject <NSSecureCoding, NSCopying, NSMutableCopying>



@property (readonly, nonatomic) CGFloat anchorTimeStamp;
@property (readonly, nonatomic) CGFloat anchorValue;
@property (readonly, nonatomic) CGFloat currentValue;
@property (readonly, nonatomic) CGFloat rate;


+(BOOL)supportsSecureCoding;
+(CGFloat)currentTimeStamp;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)valueTimingWithAnchorValue:(CGFloat)arg0 anchorTimeStamp:(CGFloat)arg1 rate:(CGFloat)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToValueTiming:(id)arg0 ;
-(CGFloat)timeStampForValue:(CGFloat)arg0 ;
-(CGFloat)valueForTimeStamp:(CGFloat)arg0 ;
-(Class)classForCoder;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAnchorValue:(CGFloat)arg0 anchorTimeStamp:(CGFloat)arg1 rate:(CGFloat)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithValueTiming:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(struct ? )_timing;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif