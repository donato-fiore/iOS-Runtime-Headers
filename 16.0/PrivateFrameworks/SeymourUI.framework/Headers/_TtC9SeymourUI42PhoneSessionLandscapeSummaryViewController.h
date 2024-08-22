// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC9SEYMOURUI42PHONESESSIONLANDSCAPESUMMARYVIEWCONTROLLER_H
#define _TTC9SEYMOURUI42PHONESESSIONLANDSCAPESUMMARYVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC9SeymourUI42PhoneSessionLandscapeSummaryViewController : UIViewController {
    ? presenter;
    ? eventHub;
    ? storefrontLocalizer;
    ? stringBuilder;
    ? backgroundView;
    ? scrollView;
    ? scrollViewSizingView;
    ? leadingStackView;
    ? contentSummaryView;
    ? gridView;
    ? trailingStackView;
    ? doneButton;
    ? shareButton;
    ? cooldownButton;
    ? ttrButton;
    ? activityRingsView;
    ? activityRingsToScrollViewBottomConstraint;
    ? burnBarView;
    ? burnBarToContentSummaryLeadingConstraint;
    ? burnBarToActivityRingsTopConstraint;
    ? burnBarToActivityRingsLeadingConstraint;
    ? burnBarToGridViewTopConstraint;
    ? burnBarToScrollViewBottomConstraint;
    ? burnBarConstraints;
    ? gridViewHeight;
    ? gridViewWidth;
    ? gridViewTopSpacing;
    ? summary;
    ? additionalMetadata;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)updateViewConstraints;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif