// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCNACTIONRUNACTION_H
#define SCNACTIONRUNACTION_H

@class NSString;


#import "SCNAction.h"

@interface SCNActionRunAction : SCNAction {
    SCNAction *_action;
    NSString *_subSpriteKey;
    NSString *_actionKey;
    BOOL _waitForKeyedAction;
    BOOL _runOnSubSprite;
    BOOL _fired;
}




+(id)runAction:(id)arg0 afterActionWithKey:(id)arg1 ;
+(id)runAction:(id)arg0 onFirstChildWithName:(id)arg1 ;
-(BOOL)isCustom;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)reversedAction;
-(void)dealloc;
-(void)updateWithTarget:(id)arg0 forTime:(CGFloat)arg1 ;
-(void)willStartWithTarget:(id)arg0 atTime:(CGFloat)arg1 ;


@end


#endif