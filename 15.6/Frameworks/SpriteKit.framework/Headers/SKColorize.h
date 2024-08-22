// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKCOLORIZE_H
#define SKCOLORIZE_H



#import "SKAction.h"

@interface SKColorize : SKAction {
    *SKCColorize _mycaction;
}




+(BOOL)supportsSecureCoding;
+(id)colorizeWithColor:(id)arg0 colorBlendFactor:(CGFloat)arg1 duration:(CGFloat)arg2 ;
+(id)colorizeWithColorBlendFactor:(CGFloat)arg0 duration:(CGFloat)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)reversedAction;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif