// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKMOVE_H
#define SKMOVE_H



#import "SKAction.h"

@interface SKMove : SKAction {
    *SKCMove _mycaction;
}




+(BOOL)supportsSecureCoding;
+(id)moveBy:(struct CGPoint )arg0 duration:(CGFloat)arg1 ;
+(id)moveByX:(CGFloat)arg0 duration:(CGFloat)arg1 ;
+(id)moveByX:(CGFloat)arg0 y:(CGFloat)arg1 duration:(CGFloat)arg2 ;
+(id)moveByY:(CGFloat)arg0 duration:(CGFloat)arg1 ;
+(id)moveTo:(struct CGPoint )arg0 duration:(CGFloat)arg1 ;
+(id)moveToX:(CGFloat)arg0 duration:(CGFloat)arg1 ;
+(id)moveToX:(CGFloat)arg0 y:(CGFloat)arg1 duration:(CGFloat)arg2 ;
+(id)moveToY:(CGFloat)arg0 duration:(CGFloat)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)reversedAction;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif