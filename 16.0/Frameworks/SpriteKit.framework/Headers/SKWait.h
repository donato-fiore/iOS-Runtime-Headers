// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKWAIT_H
#define SKWAIT_H



#import "SKAction.h"

@interface SKWait : SKAction {
    *SKCWait _mycaction;
}




+(BOOL)supportsSecureCoding;
+(id)waitForDuration:(CGFloat)arg0 ;
+(id)waitForDuration:(CGFloat)arg0 withRange:(CGFloat)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)reversedAction;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif