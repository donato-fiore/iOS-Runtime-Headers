// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKSTRENGTH_H
#define SKSTRENGTH_H



#import "SKAction.h"

@interface SKStrength : SKAction {
    *SKCStrength _mycaction;
}




+(BOOL)supportsSecureCoding;
+(id)strengthBy:(CGFloat)arg0 duration:(CGFloat)arg1 ;
+(id)strengthTo:(CGFloat)arg0 duration:(CGFloat)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)reversedAction;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif