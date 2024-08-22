// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKREPEAT_H
#define SKREPEAT_H



#import "SKAction.h"

@interface SKRepeat : SKAction {
    *SKCRepeat _mycaction;
    SKAction *_repeatedAction;
}




+(BOOL)supportsSecureCoding;
+(id)repeatAction:(id)arg0 count:(NSUInteger)arg1 ;
+(id)repeatActionForever:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)reversedAction;
-(id)subactions;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif