// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBSSCENEEVENT_H
#define FBSSCENEEVENT_H

@class NSSet;


#import "FBSSceneMessage.h"
#import "FBSSceneClientSettingsDiff.h"
#import "FBSSceneSettingsDiff.h"
#import "FBSSceneTransitionContext.h"

@interface FBSSceneEvent : FBSSceneMessage

@property (readonly, nonatomic) NSSet *actions;
@property (retain, nonatomic) FBSSceneClientSettingsDiff *clientSettingsDiff; // ivar: _clientSettingsDiff
@property (retain, nonatomic) FBSSceneSettingsDiff *settingsDiff; // ivar: _settingsDiff
@property (nonatomic) NSInteger source; // ivar: _source
@property (retain, nonatomic) FBSSceneTransitionContext *transitionContext; // ivar: _transitionContext


-(id)description;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif