// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUAPPLERATINGROWSUBTITLEVIEW_H
#define MUAPPLERATINGROWSUBTITLEVIEW_H

@class UIStackView;



@interface MUAppleRatingRowSubtitleView : UIStackView {
    ? $__lazy_storage_$_percentLabel;
    ? $__lazy_storage_$_rollingLabelsView;
    ? $__lazy_storage_$_ratingsLabel;
    ? $__lazy_storage_$_lineTwoStackView;
    ? usingTwoLineLayout;
    ? isContentUpdateInProgress;
}




-(id)initWithArrangedSubviews:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)contentSizeDidChange;
-(void)layoutSubviews;
-(void)setPercentageString:(id)arg0 ratingsValueString:(id)arg1 ratingsValueAnimation:(NSInteger)arg2 ratingsString:(id)arg3 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif