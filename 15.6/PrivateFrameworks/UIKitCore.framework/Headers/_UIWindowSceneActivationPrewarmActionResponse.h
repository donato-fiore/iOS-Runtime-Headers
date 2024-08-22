// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIWINDOWSCENEACTIVATIONPREWARMACTIONRESPONSE_H
#define _UIWINDOWSCENEACTIVATIONPREWARMACTIONRESPONSE_H

@class BSActionResponse;



@interface _UIWindowSceneActivationPrewarmActionResponse : BSActionResponse

@property (readonly, nonatomic) unsigned int sceneContainerContextId;
@property (readonly, nonatomic) NSUInteger sceneContainerRenderId;
@property (readonly, nonatomic) UIRectCornerRadii sceneCornerRadii;
@property (readonly, nonatomic) CGRect sceneFrame;


+(id)responseWithSceneContainer:(id)arg0 expectedSceneFrame:(struct CGRect )arg1 cornerRadii:(struct UIRectCornerRadii )arg2 ;


@end


#endif