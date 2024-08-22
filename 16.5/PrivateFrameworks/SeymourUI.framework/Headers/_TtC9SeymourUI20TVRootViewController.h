// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9SEYMOURUI20TVROOTVIEWCONTROLLER_H
#define _TTC9SEYMOURUI20TVROOTVIEWCONTROLLER_H

@class UIViewController, NSArray;



@interface _TtC9SeymourUI20TVRootViewController : UIViewController {
    ? engagementPresentability;
    ? visibility;
    ? resignActiveObserver;
    ? accountProvider;
    ? bag;
    ? dependencies;
    ? dataProvider;
    ? avatarFetcher;
    ? contentAvailabilityClient;
    ? engagementPresentationCoordinator;
    ? marketingMetricFieldsProvider;
    ? remoteBrowsingSource;
    ? timerProvider;
    ? dynamicOfferCoordinator;
    ? purchaseCoordinator;
    ? purchaseHandler;
    ? webUserInterfaceCoordinator;
    ? eventHub;
    ? subscriptionToken;
    ? rootMenuPresenter;
    ? lastFocusedIndexPath;
    ? settlingTimer;
    ? shouldSendBrowsingBegan;
    ? layout;
    ? menuView;
}


@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)handleSignInTapped;
-(void)handleSignOutButtonLongPress;
-(void)handleSignOutTapped;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif