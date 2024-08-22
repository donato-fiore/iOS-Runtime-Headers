// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICONTEXTMENUSTYLE_H
#define _UICONTEXTMENUSTYLE_H

@class NSArray;
@protocol NSCopying, _UITraitEnvironmentInternal;

#import <Foundation/Foundation.h>

#import "UIView.h"
#import "UIWindow.h"
#import "UITraitCollection.h"

@interface _UIContextMenuStyle : NSObject <NSCopying>



@property (nonatomic, getter=_allowsImmediateSelection) BOOL _allowsImmediateSelection; // ivar: __allowsImmediateSelection
@property (readonly, nonatomic, getter=_layoutAllowsMenu) BOOL _layoutAllowsMenu;
@property (readonly, nonatomic, getter=_layoutAllowsPreview) BOOL _layoutAllowsPreview;
@property (nonatomic, getter=_orderMenuBasedOnPriority) BOOL _orderMenuBasedOnPriority; // ivar: __orderMenuBasedOnPriority
@property (retain, nonatomic, getter=_parentTraitEnvironmentForUserInterfaceStyle) NSObject<_UITraitEnvironmentInternal> *_parentTraitEnvironmentForUserInterfaceStyle; // ivar: __parentTraitEnvironmentForUserInterfaceStyle
@property (nonatomic, getter=_preferredAnchor) ? _preferredAnchor; // ivar: __preferredAnchor
@property (nonatomic, getter=_preferredMenuAttachmentPoint) CGPoint _preferredMenuAttachmentPoint; // ivar: __preferredMenuAttachmentPoint
@property (nonatomic, getter=_shouldAvoidInputViews) BOOL _shouldAvoidInputViews; // ivar: __shouldAvoidInputViews
@property (retain, nonatomic) UIView *containerView; // ivar: _containerView
@property (retain, nonatomic) UIWindow *containerWindow; // ivar: _containerWindow
@property (nonatomic) BOOL hasInteractivePreview; // ivar: _hasInteractivePreview
@property (nonatomic) BOOL ignoresContainerSizeChange; // ivar: _ignoresContainerSizeChange
@property (nonatomic) BOOL ignoresDefaultSizingRules; // ivar: _ignoresDefaultSizingRules
@property (nonatomic) BOOL keepsInputViewsVisible; // ivar: _keepsInputViewsVisible
@property (nonatomic) NSUInteger preferredAttachmentEdge; // ivar: _preferredAttachmentEdge
@property (retain, nonatomic) NSArray *preferredBackgroundEffects; // ivar: _preferredBackgroundEffects
@property (nonatomic) UIEdgeInsets preferredBackgroundInsets; // ivar: _preferredBackgroundInsets
@property (nonatomic) UIEdgeInsets preferredEdgeInsets; // ivar: _preferredEdgeInsets
@property (nonatomic) NSUInteger preferredLayout; // ivar: _preferredLayout
@property (retain, nonatomic) UITraitCollection *preferredTraitCollection; // ivar: _preferredTraitCollection
@property (nonatomic) BOOL prefersCenteredPreviewWhenActionsAreAbsent;
@property (nonatomic) BOOL prefersStackedHierarchy; // ivar: _prefersStackedHierarchy
@property (nonatomic) BOOL preventPreviewRasterization; // ivar: _preventPreviewRasterization
@property (nonatomic) BOOL previewOverlapsMenu; // ivar: _previewOverlapsMenu
@property (nonatomic) BOOL reversesActionOrderWhenAttachedToTop;


+(id)defaultStyle;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif