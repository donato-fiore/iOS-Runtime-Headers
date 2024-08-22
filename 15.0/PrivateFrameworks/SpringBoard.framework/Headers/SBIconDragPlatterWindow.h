// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBICONDRAGPLATTERWINDOW_H
#define SBICONDRAGPLATTERWINDOW_H

@class UIView;
@protocol SBIconDragPreviewContaining;


#import "SBSecureMainScreenActiveInterfaceOrientationWindow.h"

@interface SBIconDragPlatterWindow : SBSecureMainScreenActiveInterfaceOrientationWindow <SBIconDragPreviewContaining>



@property (readonly, nonatomic) UIView *iconDragPreviewContainerView;




@end


#endif