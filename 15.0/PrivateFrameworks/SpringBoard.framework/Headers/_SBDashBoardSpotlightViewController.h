// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SBDASHBOARDSPOTLIGHTVIEWCONTROLLER_H
#define _SBDASHBOARDSPOTLIGHTVIEWCONTROLLER_H

@protocol _SBDashBoardSpotlightViewControllerDelegate;


#import "SBSpotlightMultiplexingViewController.h"

@interface _SBDashBoardSpotlightViewController : SBSpotlightMultiplexingViewController

@property (weak, nonatomic) NSObject<_SBDashBoardSpotlightViewControllerDelegate> *delegate; // ivar: _delegate


-(BOOL)_canShowWhileLocked;
-(NSUInteger)level;
-(NSUInteger)remoteSearchViewPresentationSource;


@end


#endif