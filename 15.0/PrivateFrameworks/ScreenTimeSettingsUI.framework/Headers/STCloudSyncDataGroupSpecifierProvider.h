// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STCLOUDSYNCDATAGROUPSPECIFIERPROVIDER_H
#define STCLOUDSYNCDATAGROUPSPECIFIERPROVIDER_H

@class NSString, PSSpecifier;
@protocol MCProfileConnectionObserver;


#import "STRootGroupSpecifierProvider.h"

@interface STCloudSyncDataGroupSpecifierProvider : STRootGroupSpecifierProvider <MCProfileConnectionObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PSSpecifier *toggleCloudSyncDataSpecifier; // ivar: _toggleCloudSyncDataSpecifier


-(id)cloudSyncData:(id)arg0 ;
-(id)init;
-(void)_updateEnabledValue;
-(void)changeCloudSyncData:(BOOL)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)performHSA2RepairIfNeeded:(id)arg0 ;
-(void)presentHSA2RepairUI:(id)arg0 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg0 userInfo:(id)arg1 ;
-(void)setCloudSyncData:(id)arg0 specifier:(id)arg1 ;
-(void)setCoordinator:(id)arg0 ;
-(void)setScreenTimeSyncing:(BOOL)arg0 ;


@end


#endif