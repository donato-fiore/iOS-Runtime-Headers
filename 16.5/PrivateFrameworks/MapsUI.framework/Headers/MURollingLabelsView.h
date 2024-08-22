// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUROLLINGLABELSVIEW_H
#define MUROLLINGLABELSVIEW_H

@class UIView;



@interface MURollingLabelsView : UIView {
    ? $__lazy_storage_$_currentLabelAndConstraints;
    ? $__lazy_storage_$_labelAndConstraintsAnimatingIn;
    ? $__lazy_storage_$_labelForBaselineAlignment;
    ? transitioningContentSize;
}


@property (nonatomic, readonly) CGSize intrinsicContentSize;
@property (nonatomic, readonly) UIView *viewForFirstBaselineLayout;
@property (nonatomic, readonly) UIView *viewForLastBaselineLayout;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif