// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC9SEYMOURUI16SESSIONRINGSVIEW_H
#define _TTC9SEYMOURUI16SESSIONRINGSVIEW_H

@class UIView, UIVisualEffectView;



@interface _TtC9SeymourUI16SessionRingsView : UIView {
    ? presenter;
    ? onNotchSide;
    ? shouldTuckToSide;
    ? contentView;
    ? containerView;
    ? ringsContainer;
    ? ringsView;
    ? moveLabel;
    ? exerciseLabel;
    ? standLabel;
    ? metricsContainer;
    ? metricsPlatter;
    ? stackView;
    ? ringClosureLabelView;
    ? ringClosureLabelPlatter;
    ? metricBuilder;
    ? stringBuilder;
    ? layoutGuideConstraints;
    ? metricsViewExpandedConstraints;
    ? metricsViewContractedConstraints;
    ? ringsContainerTopConstraint;
    ? ringsContainerRightConstraint;
    ? ringsContainerWidthConstraint;
    ? ringsContainerHeightConstraint;
    ? celebrationLoadingQueue;
    ? contentLayoutGuide;
}


@property (nonatomic, readonly) UIVisualEffectView *ringsPlatter; // ivar: ringsPlatter


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didMoveToSuperview;
-(void)layoutSubviews;


@end


#endif