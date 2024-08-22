// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSMAGSAFEACCESSORYTRAYVIEWCONTROLLER_H
#define CSMAGSAFEACCESSORYTRAYVIEWCONTROLLER_H



#import "CSMagSafeAccessoryViewController.h"
#import "CSMagSafeAccessoryTrayView.h"

@interface CSMagSafeAccessoryTrayViewController : CSMagSafeAccessoryViewController

@property (nonatomic) BOOL isAnimatingPresentation; // ivar: _isAnimatingPresentation
@property (retain, nonatomic) CSMagSafeAccessoryTrayView *trayView; // ivar: _trayView


-(CGFloat)animationDurationBeforeDismissal;
-(id)_trayColorForAccessory:(id)arg0 ;
-(id)accessoryView;
-(id)initWithAccessory:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif