// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICONTEXTMENUPRESENTATION_H
#define _UICONTEXTMENUPRESENTATION_H

@class UIClickPresentation;


#import "_UIPlatterView.h"
#import "UIView.h"
#import "UIWindow.h"

@interface _UIContextMenuPresentation : UIClickPresentation

@property (retain, nonatomic) _UIPlatterView *destinationPlatterView; // ivar: _destinationPlatterView
@property (retain, nonatomic) UIView *dragAnimationPortalView; // ivar: _dragAnimationPortalView
@property (retain, nonatomic) UIWindow *dragAnimationWindow; // ivar: _dragAnimationWindow
@property (retain, nonatomic) UIView *dragContainer; // ivar: _dragContainer
@property (copy, nonatomic) id *postDismissCleanUp; // ivar: _postDismissCleanUp
@property (copy, nonatomic) id *postDismissItemUpdate; // ivar: _postDismissItemUpdate
@property (nonatomic) BOOL suppressInputViewDuringPresentation; // ivar: _suppressInputViewDuringPresentation




@end


#endif