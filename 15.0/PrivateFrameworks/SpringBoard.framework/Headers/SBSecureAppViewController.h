// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSECUREAPPVIEWCONTROLLER_H
#define SBSECUREAPPVIEWCONTROLLER_H

@protocol SBSecureAppViewControllerDelegate;


#import "SBDashBoardHostedAppViewController.h"

@interface SBSecureAppViewController : SBDashBoardHostedAppViewController

@property (weak, nonatomic) NSObject<SBSecureAppViewControllerDelegate> *delegate;


-(BOOL)handleEvent:(id)arg0 ;
-(void)configureDisplayLayoutElement:(id)arg0 ;


@end


#endif