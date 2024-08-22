// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISCROLLVIEWSCROLLINDICATOR_H
#define _UISCROLLVIEWSCROLLINDICATOR_H

@class NSString;
@protocol UIPointerInteractionDelegate;


#import "UIView.h"
#import "UIColor.h"

@interface _UIScrollViewScrollIndicator : UIView <UIPointerInteractionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL expandedForDirectManipulation; // ivar: _expandedForDirectManipulation
@property (retain, nonatomic) UIColor *foregroundColor; // ivar: _foregroundColor
@property (nonatomic) BOOL hasPointer; // ivar: _hasPointer
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *roundedFillView; // ivar: _roundedFillView
@property (nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger type; // ivar: _type


+(CGFloat)_expandedIndicatorDimension;
+(CGFloat)indicatorDimension;
+(struct UIEdgeInsets )_cursorHitTestingInsets;
-(id)_colorForStyle:(NSInteger)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(struct CGRect )_offsetFillViewRectForExpandedState:(struct CGRect )arg0 ;
-(void)_layoutFillViewAnimated:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)pointerInteraction:(id)arg0 willEnterRegion:(id)arg1 animator:(id)arg2 ;
-(void)pointerInteraction:(id)arg0 willExitRegion:(id)arg1 animator:(id)arg2 ;


@end


#endif