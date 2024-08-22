// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICANVASAPPLICATIONSCENEACTIONSHANDLER_H
#define _UICANVASAPPLICATIONSCENEACTIONSHANDLER_H

@class UISceneApplicationActionsHandler, NSString;
@protocol _UICanvasSceneActionsHandler;



@interface _UICanvasApplicationSceneActionsHandler : UISceneApplicationActionsHandler <_UICanvasSceneActionsHandler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)respondToActions:(id)arg0 forScene:(id)arg1 inCanvas:(id)arg2 fromTransitionContext:(id)arg3 ;


@end


#endif