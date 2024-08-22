// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SBTODAYSPOTLIGHTVIEWCONTROLLER_H
#define _SBTODAYSPOTLIGHTVIEWCONTROLLER_H



#import "SBSpotlightMultiplexingViewController.h"

@interface _SBTodaySpotlightViewController : SBSpotlightMultiplexingViewController

@property (nonatomic) NSInteger location; // ivar: _location


-(BOOL)_canShowWhileLocked;
-(NSUInteger)level;
-(NSUInteger)remoteSearchViewPresentationSource;


@end


#endif