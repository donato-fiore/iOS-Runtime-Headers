// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC9SEYMOURUI37REMOTEBROWSINGDISCOVERYVIEWCONTROLLER_H
#define _TTC9SEYMOURUI37REMOTEBROWSINGDISCOVERYVIEWCONTROLLER_H

@class UIViewController, UILabel, NSArray;



@interface _TtC9SeymourUI37RemoteBrowsingDiscoveryViewController : UIViewController {
    ? layout;
    ? presenter;
    ? dataSource;
    ? collectionView;
    ? currentlyConnectingCell;
    ? titleLabel;
    ? indicatorView;
    ? menuGestureRecognizer;
    ? playPauseGestureRecognizer;
}


@property (nonatomic, readonly) UILabel *accessibilityTitleLabel;
@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)handleKohnahmiCodeSequence;
-(void)handleMenuButtonTapped;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif