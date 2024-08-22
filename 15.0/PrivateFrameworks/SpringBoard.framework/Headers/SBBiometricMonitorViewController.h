// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBBIOMETRICMONITORVIEWCONTROLLER_H
#define SBBIOMETRICMONITORVIEWCONTROLLER_H

@class UIViewController;


#import "SBBiometricMonitorView.h"

@interface SBBiometricMonitorViewController : UIViewController

@property (readonly, retain, nonatomic) SBBiometricMonitorView *monitorView;


-(void)loadView;


@end


#endif