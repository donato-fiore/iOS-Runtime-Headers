// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICANVASDEFINITION_H
#define _UICANVASDEFINITION_H

@protocol NSCopying, NSMutableCopying;


#import "UISceneSession.h"
#import "UICanvas.h"

@interface _UICanvasDefinition : UISceneSession <NSCopying, NSMutableCopying>



@property (readonly, nonatomic) Class canvasSubclass;
@property (readonly, nonatomic) Class delegateClass;
@property (readonly, nonatomic) UICanvas *representedCanvas;
@property (readonly, nonatomic) NSInteger systemType;




@end


#endif