// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC9SEYMOURUI34TABLETSESSIONSUMMARYVIEWCONTROLLER_H
#define _TTC9SEYMOURUI34TABLETSESSIONSUMMARYVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC9SeymourUI34TabletSessionSummaryViewController : UIViewController {
    ? presenter;
    ? eventHub;
    ? storefrontLocalizer;
    ? stringBuilder;
    ? backgroundView;
    ? scrollView;
    ? scrollViewSizingView;
    ? contentSummaryView;
    ? gridView;
    ? buttonStackView;
    ? doneButton;
    ? cooldownButton;
    ? ttrBarButtonItem;
    ? shareBarButtonItem;
    ? activityRingsView;
    ? activityRingsBottomPinningConstraint;
    ? burnBarView;
    ? burnBarToContentSummaryLeadingConstraint;
    ? burnBarToActivityRingsTopConstraint;
    ? burnBarToActivityRingsLeadingConstraint;
    ? burnBarToGridViewTopConstraint;
    ? burnBarBottomPinningConstraint;
    ? burnBarConstraints;
    ? gridViewHeight;
    ? gridViewWidth;
    ? gridViewTopSpacing;
    ? summary;
    ? additionalMetadata;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)shareButtonTapped;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)ttrButtonTapped;
-(void)updateViewConstraints;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif