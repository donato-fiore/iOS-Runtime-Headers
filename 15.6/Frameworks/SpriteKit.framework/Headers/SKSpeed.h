// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKSPEED_H
#define SKSPEED_H



#import "SKAction.h"

@interface SKSpeed : SKAction {
    *SKCSpeed _mycaction;
}




+(BOOL)supportsSecureCoding;
+(id)speedBy:(CGFloat)arg0 duration:(CGFloat)arg1 ;
+(id)speedTo:(CGFloat)arg0 duration:(CGFloat)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)reversedAction;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif