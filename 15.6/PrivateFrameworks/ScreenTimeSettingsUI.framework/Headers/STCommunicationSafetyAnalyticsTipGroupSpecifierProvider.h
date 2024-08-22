// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STCOMMUNICATIONSAFETYANALYTICSTIPGROUPSPECIFIERPROVIDER_H
#define STCOMMUNICATIONSAFETYANALYTICSTIPGROUPSPECIFIERPROVIDER_H

@class PSSpecifier, UIViewController;


#import "STRootGroupSpecifierProvider.h"

@interface STCommunicationSafetyAnalyticsTipGroupSpecifierProvider : STRootGroupSpecifierProvider

@property (retain) PSSpecifier *communicationSafetyAnalyticsTipSpecifer; // ivar: _communicationSafetyAnalyticsTipSpecifer
@property (weak) UIViewController *rootViewController; // ivar: _rootViewController


+(id)providerWithCoordinator:(id)arg0 rootViewController:(id)arg1 ;
-(BOOL)_shouldShowAnalyticsTip;
-(id)init;
-(void)_acknowledgeTip;
-(void)_showCommunicationSafetyAnalyticsTipIfNeeded;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setCoordinator:(id)arg0 ;


@end


#endif