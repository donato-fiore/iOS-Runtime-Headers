// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKROTATE_H
#define SKROTATE_H



#import "SKAction.h"

@interface SKRotate : SKAction {
    *SKCRotate _mycaction;
}




+(BOOL)supportsSecureCoding;
+(id)rotateByAngle:(CGFloat)arg0 duration:(CGFloat)arg1 ;
+(id)rotateByX:(CGFloat)arg0 duration:(CGFloat)arg1 ;
+(id)rotateByX:(CGFloat)arg0 y:(CGFloat)arg1 z:(CGFloat)arg2 duration:(CGFloat)arg3 ;
+(id)rotateByY:(CGFloat)arg0 duration:(CGFloat)arg1 ;
+(id)rotateToAngle:(CGFloat)arg0 duration:(CGFloat)arg1 ;
+(id)rotateToAngle:(CGFloat)arg0 duration:(CGFloat)arg1 shortestUnitArc:(BOOL)arg2 ;
+(id)rotateToX:(CGFloat)arg0 duration:(CGFloat)arg1 ;
+(id)rotateToX:(CGFloat)arg0 y:(CGFloat)arg1 z:(CGFloat)arg2 duration:(CGFloat)arg3 ;
+(id)rotateToY:(CGFloat)arg0 duration:(CGFloat)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)reversedAction;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif