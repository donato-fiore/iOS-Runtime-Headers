// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDWINDOWROOTVIEWCONTROLLER_H
#define EDWINDOWROOTVIEWCONTROLLER_H

@class UIViewController;


#import "EDLensView.h"

@interface EDWindowRootViewController : UIViewController

@property (retain, nonatomic) EDLensView *lensView; // ivar: _lensView


-(BOOL)_canShowWhileLocked;
-(NSUInteger)supportedInterfaceOrientations;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)getRotationContentSettings:(struct ? *)arg0 forWindow:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif