// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKFALLOFF_H
#define SKFALLOFF_H



#import "SKAction.h"

@interface SKFalloff : SKAction {
    *SKCFalloff _mycaction;
}




+(BOOL)supportsSecureCoding;
+(id)falloffBy:(CGFloat)arg0 duration:(CGFloat)arg1 ;
+(id)falloffTo:(CGFloat)arg0 duration:(CGFloat)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)reversedAction;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif