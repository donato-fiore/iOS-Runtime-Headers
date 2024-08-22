// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PRRANGEMEASUREMENT_H
#define PRRANGEMEASUREMENT_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PRRangeMeasurement : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) CGFloat measurement; // ivar: _measurement
@property (readonly, nonatomic) CGFloat uncertainty; // ivar: _uncertainty


+(BOOL)supportsSecureCoding;
+(id)measurementWithRange:(CGFloat)arg0 uncertainty:(CGFloat)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRange:(CGFloat)arg0 uncertainty:(CGFloat)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif