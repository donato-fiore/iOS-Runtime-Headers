// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISCROLLVIEWSCROLLINDICATOR_H
#define _UISCROLLVIEWSCROLLINDICATOR_H

@class NSString;
@protocol UIPointerInteractionDelegate, _UIScrollViewScrollIndicatorVisualStyle;


#import "UIView.h"
#import "UIColor.h"

@interface _UIScrollViewScrollIndicator : UIView <UIPointerInteractionDelegate>

 {
    id<_UIScrollViewScrollIndicatorVisualStyle> *_visualStyle;
    BOOL _expandedForDirectManipulation;
    BOOL _hasPointer;
    NSUInteger _type;
    NSInteger _style;
}


@property (readonly, nonatomic, getter=_visualStyle) NSObject<_UIScrollViewScrollIndicatorVisualStyle> *_visualStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIColor *foregroundColor; // ivar: _foregroundColor
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *roundedFillView; // ivar: _roundedFillView
@property (readonly) Class superclass;


+(id)visualStyleForIdiom:(NSInteger)arg0 ;
+(id)visualStyleForTraitCollection:(id)arg0 ;
+(void)_ensureDefaultStyles;
+(void)registerVisualStyle:(id)arg0 forIdiom:(NSInteger)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(struct CGRect )_offsetFillViewRectForExpandedState:(struct CGRect )arg0 ;
-(void)_layoutFillViewAnimated:(BOOL)arg0 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)pointerInteraction:(id)arg0 willEnterRegion:(id)arg1 animator:(id)arg2 ;
-(void)pointerInteraction:(id)arg0 willExitRegion:(id)arg1 animator:(id)arg2 ;


@end


#endif