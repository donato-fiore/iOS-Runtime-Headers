// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICONSTRAINTBASEDLAYOUTHOSTINGVIEW_H
#define _UICONSTRAINTBASEDLAYOUTHOSTINGVIEW_H



#import "UIView.h"

@interface _UIConstraintBasedLayoutHostingView : UIView {
    BOOL _hasAddedConstraints;
}


@property (retain, nonatomic) UIView *hostedView; // ivar: _hostedView


+(BOOL)requiresConstraintBasedLayout;
-(BOOL)_layoutHeightDependsOnWidth;
-(id)initWithHostedView:(id)arg0 ;
-(struct ? )_baselineOffsetsAtSize:(struct CGSize )arg0 ;
-(struct CGSize )_layoutSizeThatFits:(struct CGSize )arg0 fixedAxes:(NSUInteger)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )alignmentRectInsets;
-(void)_intrinsicContentSizeInvalidatedForChildView:(id)arg0 ;
-(void)_layoutMetricsInvalidatedForHostedView;
-(void)_scheduleUpdateConstraintsPassAsEngineHostNeedingLayout:(BOOL)arg0 ;
-(void)_setFrameWithAlignmentRect:(struct CGRect )arg0 ;
-(void)constraintsDidChangeInEngine:(id)arg0 ;
-(void)updateConstraints;
-(void)willRemoveSubview:(id)arg0 ;


@end


#endif