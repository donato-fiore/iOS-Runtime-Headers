// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC9SEYMOURUI25SUMMARYCONTENTSUMMARYVIEW_H
#define _TTC9SEYMOURUI25SUMMARYCONTENTSUMMARYVIEW_H

@class UIView;



@interface _TtC9SeymourUI25SummaryContentSummaryView : UIView {
    ? thumbnailDimensions;
    ? thumbnailView;
    ? bookmarkButton;
    ? labels;
    ? layoutGuide;
    ? layoutGuideConstraints;
    ? layoutGuideSecondaryConstraints;
    ? labelsBottomConstraint;
    ? bookmarkButtonBottomConstraint;
    ? thumbnailWidthConstraint;
    ? thumbnailHeightConstraint;
    ? onBookmarkTapped;
}


@property (nonatomic, readonly) CGSize intrinsicContentSize;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)bookmarkButtonTapped;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConstraints;


@end


#endif