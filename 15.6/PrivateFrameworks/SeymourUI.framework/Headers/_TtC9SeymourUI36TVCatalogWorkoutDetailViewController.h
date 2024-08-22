// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC9SEYMOURUI36TVCATALOGWORKOUTDETAILVIEWCONTROLLER_H
#define _TTC9SEYMOURUI36TVCATALOGWORKOUTDETAILVIEWCONTROLLER_H

@class UIViewController, UILabel, NSArray;



@interface _TtC9SeymourUI36TVCatalogWorkoutDetailViewController : UIViewController {
    ? visibility;
    ? resignActiveObserver;
    ? bag;
    ? dataProvider;
    ? dependencies;
    ? eventHub;
    ? marketingMetricFieldsProvider;
    ? storefrontLocalizer;
    ? purchaseCoordinator;
    ? purchaseHandler;
    ? dynamicOfferCoordinator;
    ? webUserInterfaceCoordinator;
    ? lastFocusedIndexPath;
    ? settlingTimer;
    ? timerProvider;
    ? layout;
    ? artworkView;
    ? shroudView;
    ? bottomBlurView;
    ? titleLabel;
    ? subtitleLabel;
    ? gradientMaskLayer;
}


@property (nonatomic, readonly) UILabel *accessibilitySubtitleLabel;
@property (nonatomic, readonly) UILabel *accessibilityTitleLabel;
@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif