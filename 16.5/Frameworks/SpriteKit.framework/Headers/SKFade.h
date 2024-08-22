// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKFADE_H
#define SKFADE_H



#import "SKAction.h"

@interface SKFade : SKAction {
    *SKCFade _mycaction;
}




+(BOOL)supportsSecureCoding;
+(id)fadeAlphaBy:(CGFloat)arg0 duration:(CGFloat)arg1 ;
+(id)fadeAlphaTo:(CGFloat)arg0 duration:(CGFloat)arg1 ;
+(id)fadeInWithDuration:(CGFloat)arg0 ;
+(id)fadeOutWithDuration:(CGFloat)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)reversedAction;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif