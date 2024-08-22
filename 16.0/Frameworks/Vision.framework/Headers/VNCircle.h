// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNCIRCLE_H
#define VNCIRCLE_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "VNPoint.h"

@interface VNCircle : NSObject <NSCopying, NSSecureCoding>



@property (readonly) VNPoint *center; // ivar: _center
@property (readonly) CGFloat diameter;
@property (readonly) CGFloat radius; // ivar: _radius


+(BOOL)supportsSecureCoding;
+(id)zeroCircle;
-(BOOL)containsPoint:(id)arg0 ;
-(BOOL)containsPoint:(id)arg0 inCircumferentialRingOfWidth:(CGFloat)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCenter:(id)arg0 diameter:(CGFloat)arg1 ;
-(id)initWithCenter:(id)arg0 radius:(CGFloat)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif