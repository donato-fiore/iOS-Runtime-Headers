// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSMAGSAFEACCESSORYWALLETVIEWCONTROLLER_H
#define CSMAGSAFEACCESSORYWALLETVIEWCONTROLLER_H



#import "CSMagSafeAccessoryViewController.h"
#import "CSMagSafeAccessoryWalletView.h"

@interface CSMagSafeAccessoryWalletViewController : CSMagSafeAccessoryViewController

@property (nonatomic) BOOL isAnimatingPresentation; // ivar: _isAnimatingPresentation
@property (retain, nonatomic) CSMagSafeAccessoryWalletView *walletView; // ivar: _walletView


-(CGFloat)animationDurationBeforeDismissal;
-(id)accessoryView;
-(id)initWithAccessory:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif