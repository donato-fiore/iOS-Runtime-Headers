// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICONTEXTLAYERHOSTVIEW_H
#define _UICONTEXTLAYERHOSTVIEW_H

@class UISceneLayerHostView;


#import "UISceneAsynchronousRenderingOptions.h"

@interface _UIContextLayerHostView : UISceneLayerHostView

@property (copy, nonatomic) UISceneAsynchronousRenderingOptions *asynchronousRenderingOptions;
@property (nonatomic) NSUInteger renderingMode;


+(Class)layerClass;
-(id)initWithSceneLayer:(id)arg0 ;
-(id)layer;


@end


#endif