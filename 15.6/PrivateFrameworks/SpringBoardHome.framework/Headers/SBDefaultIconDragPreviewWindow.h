// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBDEFAULTICONDRAGPREVIEWWINDOW_H
#define SBDEFAULTICONDRAGPREVIEWWINDOW_H

@class UIWindow, UIView;
@protocol SBIconDragPreviewContaining;



@interface SBDefaultIconDragPreviewWindow : UIWindow <SBIconDragPreviewContaining>



@property (readonly, nonatomic) UIView *iconDragPreviewContainerView;




@end


#endif