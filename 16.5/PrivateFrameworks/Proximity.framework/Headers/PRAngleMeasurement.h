// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRANGLEMEASUREMENT_H
#define PRANGLEMEASUREMENT_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PRAngleMeasurement : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) CGFloat measurement; // ivar: _measurement
@property (readonly, nonatomic) CGFloat uncertainty; // ivar: _uncertainty


+(BOOL)supportsSecureCoding;
+(id)measurementWithAngle:(CGFloat)arg0 uncertainty:(CGFloat)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAngle:(CGFloat)arg0 uncertainty:(CGFloat)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif