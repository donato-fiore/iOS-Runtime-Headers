// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BTSFITTESTWELCOMECONTROLLER_H
#define BTSFITTESTWELCOMECONTROLLER_H

@class UIViewController;


#import "BTSDevice.h"

@interface BTSFitTestWelcomeController : UIViewController

@property (retain, nonatomic) BTSDevice *currentDevice; // ivar: _currentDevice


-(id)init;
-(void)cancelFitTest;
-(void)continueToFitTest;
-(void)deviceDisconnectedHandler:(id)arg0 ;
-(void)loadView;
-(void)powerChangedHandler:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif