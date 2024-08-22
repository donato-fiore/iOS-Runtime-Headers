// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDSIRIENDPOINTONBOARDINGMANAGER_H
#define HMDSIRIENDPOINTONBOARDINGMANAGER_H

@class NSMutableDictionary;
@protocol HMDSiriEndpointOnboardingManagerDataSource;

#import <Foundation/Foundation.h>


@interface HMDSiriEndpointOnboardingManager : NSObject {
    NSMutableDictionary *_onboardingSelections;
    NSMutableDictionary *_onboardingUserUUID;
    os_unfair_lock_s _lock;
}


@property (weak) NSObject<HMDSiriEndpointOnboardingManagerDataSource> *dataSource; // ivar: _dataSource


-(BOOL)readyToApplyOnboardingSelectionsWithHomeUUID:(id)arg0 accessoryUUID:(id)arg1 ;
-(id)initWithDataSource:(id)arg0 ;
-(void)_applyOnboardingSelections:(id)arg0 accessoryUUID:(id)arg1 homeUUID:(id)arg2 userUUID:(id)arg3 cacheKey:(id)arg4 completion:(id)arg5 ;
-(void)_enableUserListeningHistoryForHomeUUID:(id)arg0 accessoryUUID:(id)arg1 userUUID:(id)arg2 ;
-(void)_setNeedsOnboardingCompleteWitHomeUUID:(id)arg0 accessoryUUID:(id)arg1 completion:(id)arg2 ;
-(void)applyCachedOnboardingSelectionsWithAccessoryUUID:(id)arg0 homeUUID:(id)arg1 ;
-(void)applyOnboardingSelections:(id)arg0 accessoryUUID:(id)arg1 homeUUID:(id)arg2 userUUID:(id)arg3 completion:(id)arg4 ;
-(void)handleAccessoryConfigured:(id)arg0 ;
-(void)handleCompositeSettingsControllerConfigured:(id)arg0 ;


@end


#endif