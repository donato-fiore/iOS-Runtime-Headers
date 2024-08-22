// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIWINDOWSCENEACTIVATIONPREWARMACTION_H
#define _UIWINDOWSCENEACTIVATIONPREWARMACTION_H

@class BSAction, NSString;



@interface _UIWindowSceneActivationPrewarmAction : BSAction

@property (readonly, nonatomic) NSUInteger deparentingPortalAlphaSourceLayerRenderId;
@property (readonly, nonatomic) NSString *interactionIdentifier;
@property (readonly, nonatomic) NSUInteger morphContainerRenderId;
@property (readonly, nonatomic) BOOL requestCenterSlot;
@property (readonly, nonatomic) BOOL requestFullscreen;
@property (readonly, nonatomic) NSString *sourceAppBundleIdentifier;
@property (readonly, nonatomic) unsigned int sourceLayerContextId;
@property (readonly, nonatomic) NSString *sourceSceneIdentifier;


+(id)actionWithMorphContainer:(id)arg0 alphaSource:(id)arg1 sourceIdentifier:(id)arg2 interactionIdentifier:(id)arg3 requestCenterSlot:(BOOL)arg4 requestFullscreen:(BOOL)arg5 responseHandler:(id)arg6 ;
-(NSInteger)UIActionType;


@end


#endif