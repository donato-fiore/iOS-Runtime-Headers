// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKRUNACTION_H
#define SKRUNACTION_H

@class NSString;


#import "SKAction.h"

@interface SKRunAction : SKAction {
    SKAction *_action;
    NSString *_subSpriteKey;
    NSString *_actionKey;
    BOOL _waitForKeyedAction;
    BOOL _runOnSubSprite;
    BOOL _fired;
}




+(BOOL)supportsSecureCoding;
+(id)runAction:(id)arg0 afterActionWithKey:(id)arg1 ;
+(id)runAction:(id)arg0 onFirstChildWithName:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)reversedAction;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithTarget:(id)arg0 forTime:(CGFloat)arg1 ;
-(void)willStartWithTarget:(id)arg0 atTime:(CGFloat)arg1 ;


@end


#endif