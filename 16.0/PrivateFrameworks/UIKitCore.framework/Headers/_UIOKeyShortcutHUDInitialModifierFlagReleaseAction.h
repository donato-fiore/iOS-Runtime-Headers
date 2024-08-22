// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIOKEYSHORTCUTHUDINITIALMODIFIERFLAGRELEASEACTION_H
#define _UIOKEYSHORTCUTHUDINITIALMODIFIERFLAGRELEASEACTION_H

@class UIOAction;



@interface _UIOKeyShortcutHUDInitialModifierFlagReleaseAction : UIOAction

@property (readonly, nonatomic) NSInteger releasedModifierFlag;


+(id)actionWithReleasedModifierFlag:(NSInteger)arg0 ;
-(BOOL)isPermitted;
-(void)performActionFromConnection:(id)arg0 ;


@end


#endif