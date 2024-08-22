// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BKUIINDICATORVIEWCONTROLLER_H
#define BKUIINDICATORVIEWCONTROLLER_H

@class UIViewController, LAUIPhysicalButtonView;



@interface BKUIIndicatorViewController : UIViewController

@property (retain, nonatomic) LAUIPhysicalButtonView *physicalButtonView; // ivar: _physicalButtonView
@property (nonatomic) BOOL shouldShow; // ivar: _shouldShow


-(BOOL)prefersStatusBarHidden;
-(id)init;
-(void)_updateUI;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif