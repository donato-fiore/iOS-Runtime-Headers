// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPPLUGINRESIDENTSTATEMANAGER_H
#define CHIPPLUGINRESIDENTSTATEMANAGER_H

@class HMFObject, NSString;
@protocol HMFLogging, CHIPPluginResidentStateManagerDataSource, CHIPPluginResidentStateManagerDelegate;



@interface CHIPPluginResidentStateManager : HMFObject <HMFLogging>

 {
    os_unfair_lock_s _lock;
}


@property (nonatomic, getter=isCurrentDevicePrimaryResident) BOOL currentDevicePrimaryResident; // ivar: _currentDevicePrimaryResident
@property (weak) NSObject<CHIPPluginResidentStateManagerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<CHIPPluginResidentStateManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isResidentEnabledInAnyHome) BOOL residentEnabledInAnyHome; // ivar: _residentEnabledInAnyHome
@property (readonly) Class superclass;


+(id)logCategory;
-(id)init;
-(id)logIdentifier;
-(void)handleResidentStateUpdated;


@end


#endif