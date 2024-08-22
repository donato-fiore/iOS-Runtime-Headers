// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STENABLESCREENTIMEGROUPSPECIFIERPROVIDER_H
#define STENABLESCREENTIMEGROUPSPECIFIERPROVIDER_H

@class NSString, UIViewController, PSSpecifier;
@protocol MCProfileConnectionObserver;


#import "STRootGroupSpecifierProvider.h"

@interface STEnableScreenTimeGroupSpecifierProvider : STRootGroupSpecifierProvider <MCProfileConnectionObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak) UIViewController *rootViewController; // ivar: _rootViewController
@property (retain) PSSpecifier *setupScreenTimeSpecifier; // ivar: _setupScreenTimeSpecifier
@property (readonly) Class superclass;


+(id)providerWithCoordinator:(id)arg0 rootViewController:(id)arg1 ;
-(id)enableScreenTimeFooterText;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg0 userInfo:(id)arg1 ;
-(void)saveValuesForModel:(id)arg0 ;
-(void)setCoordinator:(id)arg0 ;
-(void)setupScreenTime:(id)arg0 ;


@end


#endif