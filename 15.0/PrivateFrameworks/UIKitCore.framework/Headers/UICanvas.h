// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UICANVAS_H
#define UICANVAS_H

@class FBSScene;


#import "UIWindowScene.h"
#import "_UICanvasDefinition.h"

@interface UICanvas : UIWindowScene

@property (readonly, nonatomic) _UICanvasDefinition *_definition;
@property (readonly, nonatomic, getter=isKeyCanvas) BOOL keyCanvas;
@property (readonly, nonatomic, getter=_scene) FBSScene *scene;
@property (readonly, nonatomic) NSInteger state;




@end


#endif