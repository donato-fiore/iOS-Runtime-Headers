// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC9SEYMOURUI18EXPANDABLETEXTVIEW_H
#define _TTC9SEYMOURUI18EXPANDABLETEXTVIEW_H

@class UIView;



@interface _TtC9SeymourUI18ExpandableTextView : UIView {
    ? onMoreTapped;
    ? linkIconsAndTitles;
    ? linksBottomConstraint;
    ? tapGestureRecognizer;
    ? textLabelBottomConstraint;
    ? textLabelTruncatedLines;
    ? state;
    ? moreTextLabel;
    ? textLabel;
    ? sizingLabel;
    ? tapTargetView;
    ? layout;
}


@property (nonatomic, readonly) UIView *viewForFirstBaselineLayout;
@property (nonatomic, readonly) UIView *viewForLastBaselineLayout;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didTapLink:(id)arg0 ;
-(void)handleTapGesture:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif