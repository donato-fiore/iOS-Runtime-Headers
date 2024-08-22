// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDSIRIENDPOINTONBOARDINGMANAGER_H
#define HMDSIRIENDPOINTONBOARDINGMANAGER_H

@class NSMutableDictionary, HMFUnfairLock;
@protocol HMDSiriEndpointOnboardingManagerDataSource;

#import <Foundation/Foundation.h>


@interface HMDSiriEndpointOnboardingManager : NSObject {
    NSMutableDictionary *_onboardingSelections;
    HMFUnfairLock *_lock;
}


@property (weak) NSObject<HMDSiriEndpointOnboardingManagerDataSource> *dataSource; // ivar: _dataSource


-(BOOL)readyToApplyOnboardingSelectionsWithHomeUUID:(id)arg0 accessoryUUID:(id)arg1 ;
-(id)initWithDataSource:(id)arg0 ;
-(void)_setNeedsOnboardingCompleteWitHomeUUID:(id)arg0 accessoryUUID:(id)arg1 completion:(id)arg2 ;
-(void)applyCachedOnboardingSelectionsWithAccessoryUUID:(id)arg0 homeUUID:(id)arg1 ;
-(void)applyOnboardingSelections:(id)arg0 accessoryUUID:(id)arg1 homeUUID:(id)arg2 completion:(id)arg3 ;
-(void)handleAccessoryConfigured:(id)arg0 ;
-(void)handleCompositeSettingsControllerConfigured:(id)arg0 ;


@end


#endif