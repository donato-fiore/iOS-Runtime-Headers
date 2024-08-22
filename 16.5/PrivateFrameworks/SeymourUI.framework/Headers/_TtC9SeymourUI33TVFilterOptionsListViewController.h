// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9SEYMOURUI33TVFILTEROPTIONSLISTVIEWCONTROLLER_H
#define _TTC9SEYMOURUI33TVFILTEROPTIONSLISTVIEWCONTROLLER_H

@class UIViewController, NSArray;



@interface _TtC9SeymourUI33TVFilterOptionsListViewController : UIViewController {
    ? layout;
    ? visibility;
    ? dependencies;
    ? lastFocusedIndexPath;
    ? settlingTimer;
    ? timerProvider;
    ? optionsActionsHeightConstraint;
    ? optionsActionView;
    ? titleLabel;
    ? dataProvider;
    ? metricPublishingDelegate;
}


@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)handleActionButtonTapped;
-(void)menuButtonTapped;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif