// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9SEYMOURUI41PHONESESSIONPORTRAITSUMMARYVIEWCONTROLLER_H
#define _TTC9SEYMOURUI41PHONESESSIONPORTRAITSUMMARYVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC9SeymourUI41PhoneSessionPortraitSummaryViewController : UIViewController {
    ? presenter;
    ? eventHub;
    ? storefrontLocalizer;
    ? contentSummaryView;
    ? stringBuilder;
    ? mediaTagStringBuilder;
    ? scrollView;
    ? contentView;
    ? gridView;
    ? bottomStackView;
    ? doneButton;
    ? shareButton;
    ? cooldownButton;
    ? ttrButton;
    ? activityRingsView;
    ? activityRingsToScrollViewBottomConstraint;
    ? contentSummaryViewTopConstraint;
    ? gridViewHeight;
    ? gridViewWidth;
    ? gridViewTopSpacing;
    ? summary;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)updateViewConstraints;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif