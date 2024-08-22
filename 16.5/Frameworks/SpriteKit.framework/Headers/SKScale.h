// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKSCALE_H
#define SKSCALE_H



#import "SKAction.h"

@interface SKScale : SKAction {
    *SKCScale _mycaction;
}




+(BOOL)supportsSecureCoding;
+(id)scaleBy:(CGFloat)arg0 duration:(CGFloat)arg1 ;
+(id)scaleTo:(CGFloat)arg0 duration:(CGFloat)arg1 ;
+(id)scaleToSize:(struct CGSize )arg0 duration:(CGFloat)arg1 ;
+(id)scaleXBy:(CGFloat)arg0 duration:(CGFloat)arg1 ;
+(id)scaleXBy:(CGFloat)arg0 y:(CGFloat)arg1 duration:(CGFloat)arg2 ;
+(id)scaleXTo:(CGFloat)arg0 duration:(CGFloat)arg1 ;
+(id)scaleXTo:(CGFloat)arg0 y:(CGFloat)arg1 duration:(CGFloat)arg2 ;
+(id)scaleYBy:(CGFloat)arg0 duration:(CGFloat)arg1 ;
+(id)scaleYTo:(CGFloat)arg0 duration:(CGFloat)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)reversedAction;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif