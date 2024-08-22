// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIWINDOWSCENEACTIVATIONCLEANUPACTION_H
#define _UIWINDOWSCENEACTIVATIONCLEANUPACTION_H

@class BSAction, NSString;



@interface _UIWindowSceneActivationCleanupAction : BSAction

@property (readonly, nonatomic) NSString *interactionIdentifier;


+(id)actionWithInteractionIdentifier:(id)arg0 responseHandler:(id)arg1 ;
-(NSInteger)UIActionType;


@end


#endif