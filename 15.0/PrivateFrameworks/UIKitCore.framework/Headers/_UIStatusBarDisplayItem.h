// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISTATUSBARDISPLAYITEM_H
#define _UISTATUSBARDISPLAYITEM_H

@class NSString, UIView<_UIStatusBarDisplayable>;
@protocol _UIStatusBarPrioritized, _UIStatusBarActionable, _UIStatusBarDisplayable, UILayoutItem;

#import <Foundation/Foundation.h>

#import "_UIStatusBarAction.h"
#import "UIView.h"
#import "_UIStatusBarIdentifier.h"
#import "_UIStatusBarItem.h"
#import "_UIStatusBarStyleAttributes.h"
#import "_UIStatusBarDisplayItemPlacement.h"
#import "_UIStatusBarRegion.h"

@interface _UIStatusBarDisplayItem : NSObject <_UIStatusBarPrioritized, _UIStatusBarActionable>



@property (nonatomic) CGRect absoluteFrame;
@property (readonly, nonatomic) CGRect absoluteHoverFrame;
@property (retain, nonatomic) _UIStatusBarAction *action; // ivar: _action
@property (nonatomic) UIEdgeInsets actionInsets; // ivar: _actionInsets
@property (nonatomic) CGFloat alpha; // ivar: _alpha
@property (nonatomic, getter=isBackground) BOOL background; // ivar: _background
@property (nonatomic) CGFloat baselineOffset; // ivar: _baselineOffset
@property (nonatomic) CGFloat centerOffset; // ivar: _centerOffset
@property (weak, nonatomic) UIView *containerView; // ivar: _containerView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<_UIStatusBarDisplayable> *displayable;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (nonatomic) NSDirectionalEdgeInsets extendedHoverInsets; // ivar: _extendedHoverInsets
@property (nonatomic) BOOL floating; // ivar: _floating
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *highlightView; // ivar: _highlightView
@property (retain, nonatomic) _UIStatusBarAction *hoverAction; // ivar: _hoverAction
@property (readonly, nonatomic) BOOL hoverHighlightsAsRegion;
@property (readonly, nonatomic) UIView *hoverView;
@property (readonly, copy, nonatomic) _UIStatusBarIdentifier *identifier; // ivar: _identifier
@property (readonly, weak, nonatomic) _UIStatusBarItem *item; // ivar: _item
@property (retain, nonatomic) NSObject<UILayoutItem> *layoutItem; // ivar: _layoutItem
@property (nonatomic) BOOL needsAddingToLayout; // ivar: _needsAddingToLayout
@property (retain, nonatomic) _UIStatusBarStyleAttributes *overriddenStyleAttributes; // ivar: _overriddenStyleAttributes
@property (nonatomic) NSInteger overriddenVerticalAlignment; // ivar: _overriddenVerticalAlignment
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *placement; // ivar: _placement
@property (readonly, nonatomic) NSInteger priority;
@property (weak, nonatomic) _UIStatusBarRegion *region; // ivar: _region
@property (readonly) Class superclass;
@property (nonatomic) CGAffineTransform transform; // ivar: _transform
@property (readonly, nonatomic) UIView<_UIStatusBarDisplayable> *view; // ivar: _view
@property (nonatomic) CGFloat viewAlpha; // ivar: _viewAlpha
@property (nonatomic) CGAffineTransform viewTransform; // ivar: _viewTransform
@property (readonly, nonatomic) BOOL visible;


-(id)initWithIdentifier:(id)arg0 item:(id)arg1 ;
-(void)_updateComputedAlpha;
-(void)_updateComputedTransform;
-(void)applyStyleAttributes:(id)arg0 ;


@end


#endif