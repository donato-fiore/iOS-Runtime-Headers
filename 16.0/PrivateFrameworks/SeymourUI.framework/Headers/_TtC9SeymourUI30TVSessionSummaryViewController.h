// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC9SEYMOURUI30TVSESSIONSUMMARYVIEWCONTROLLER_H
#define _TTC9SEYMOURUI30TVSESSIONSUMMARYVIEWCONTROLLER_H

@class UIViewController, NSArray;



@interface _TtC9SeymourUI30TVSessionSummaryViewController : UIViewController {
    ? eventHub;
    ? storefrontLocalizer;
    ? presenter;
    ? stringBuilder;
    ? headerView;
    ? footerView;
    ? metricGridView;
    ? separatorView;
    ? burnBarView;
    ? activityRingsView;
    ? gridViewWidthConstraint;
    ? activityRingsTopPinningConstraint;
    ? activityRingsBottomPinningConstraint;
    ? summary;
    ? additionalMetadata;
}


@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)menuButtonTapped;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif