// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RCPDISCRETEGESTURESPEC_H
#define RCPDISCRETEGESTURESPEC_H


#import <Foundation/Foundation.h>


@interface RCPDiscreteGestureSpec : NSObject

@property (nonatomic) BOOL isRotation; // ivar: _isRotation
@property (nonatomic) BOOL isScale; // ivar: _isScale
@property (nonatomic) BOOL isTranslation; // ivar: _isTranslation
@property (nonatomic) CGFloat x; // ivar: _x
@property (nonatomic) CGFloat y; // ivar: _y
@property (nonatomic) CGFloat z; // ivar: _z


+(id)rotationZ:(CGFloat)arg0 ;
+(id)scaleZ:(CGFloat)arg0 ;
+(id)translation:(struct CGPoint )arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;


@end


#endif