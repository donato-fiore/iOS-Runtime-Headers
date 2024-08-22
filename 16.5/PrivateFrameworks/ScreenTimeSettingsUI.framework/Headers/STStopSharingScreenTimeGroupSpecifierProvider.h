// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STSTOPSHARINGSCREENTIMEGROUPSPECIFIERPROVIDER_H
#define STSTOPSHARINGSCREENTIMEGROUPSPECIFIERPROVIDER_H

@class PSSpecifier;


#import "STRootGroupSpecifierProvider.h"

@interface STStopSharingScreenTimeGroupSpecifierProvider : STRootGroupSpecifierProvider

@property (retain, nonatomic) PSSpecifier *stopSharingScreenTimeSpecifier; // ivar: _stopSharingScreenTimeSpecifier


-(id)init;
-(void)confirmStopSharingScreenTime:(id)arg0 ;
-(void)disableScreenTime:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setCoordinator:(id)arg0 ;


@end


#endif