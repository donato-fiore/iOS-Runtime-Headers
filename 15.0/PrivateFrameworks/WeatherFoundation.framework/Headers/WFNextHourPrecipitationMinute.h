// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFNEXTHOURPRECIPITATIONMINUTE_H
#define WFNEXTHOURPRECIPITATIONMINUTE_H

@class NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFNextHourPrecipitationMinute : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) CGFloat chance; // ivar: _chance
@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) CGFloat intensity; // ivar: _intensity
@property (readonly, nonatomic) CGFloat perceivedIntensity; // ivar: _perceivedIntensity


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIntensity:(CGFloat)arg0 chance:(CGFloat)arg1 perceivedIntensity:(CGFloat)arg2 date:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif