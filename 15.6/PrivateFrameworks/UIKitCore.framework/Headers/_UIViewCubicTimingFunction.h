// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIVIEWCUBICTIMINGFUNCTION_H
#define _UIVIEWCUBICTIMINGFUNCTION_H

@protocol NSCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface _UIViewCubicTimingFunction : NSObject <NSCoding, NSCopying>

 {
    CGPoint _point1;
    CGPoint _point2;
}


@property (readonly, nonatomic) CGPoint controlPoint1;
@property (readonly, nonatomic) CGPoint controlPoint2;


-(BOOL)isEqual:(id)arg0 ;
-(id)_mediaTimingFunction;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithControlPoint1:(struct CGPoint )arg0 controlPoint2:(struct CGPoint )arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif