// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMTRRESIDENTSTATEMANAGER_H
#define HMMTRRESIDENTSTATEMANAGER_H

@class HMFObject, NSString;
@protocol HMFLogging, HMMTRResidentStateManagerDataSource;



@interface HMMTRResidentStateManager : HMFObject <HMFLogging>

 {
    os_unfair_lock_s _lock;
}


@property (nonatomic, getter=isCurrentDevicePrimaryResident) BOOL currentDevicePrimaryResident; // ivar: _currentDevicePrimaryResident
@property (weak) NSObject<HMMTRResidentStateManagerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)init;
-(void)handleResidentStateUpdated;


@end


#endif