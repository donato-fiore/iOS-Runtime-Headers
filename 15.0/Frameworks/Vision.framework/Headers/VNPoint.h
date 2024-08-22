// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNPOINT_H
#define VNPOINT_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface VNPoint : NSObject <NSCopying, NSSecureCoding>



@property (readonly) CGPoint location;
@property (readonly) CGFloat x; // ivar: _x
@property (readonly) CGFloat y; // ivar: _y


+(BOOL)supportsSecureCoding;
+(CGFloat)distanceBetweenPoint:(id)arg0 point:(id)arg1 ;
+(id)pointByApplyingVector:(id)arg0 toPoint:(id)arg1 ;
+(id)zeroPoint;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)distanceToPoint:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocation:(struct CGPoint )arg0 ;
-(id)initWithX:(CGFloat)arg0 y:(CGFloat)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif