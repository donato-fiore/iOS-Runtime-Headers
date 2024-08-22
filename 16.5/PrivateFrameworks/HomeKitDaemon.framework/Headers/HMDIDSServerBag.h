// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDIDSSERVERBAG_H
#define HMDIDSSERVERBAG_H

@class HMFObject, NSString, IDSServerBag, HMFTimer;
@protocol HMFLogging, HMFTimerDelegate, HMDIDSServerBagDelegate;



@interface HMDIDSServerBag : HMFObject <HMFLogging, HMFTimerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDIDSServerBagDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (getter=isHH2AutoMigrationEnabled) BOOL hh2AutoMigrationEnabled; // ivar: _hh2AutoMigrationEnabled
@property (getter=isHH2ManualMigrationEnabled) BOOL hh2ManualMigrationEnabled; // ivar: _hh2ManualMigrationEnabled
@property (getter=isHH2SoftwareReleased) BOOL hh2SoftwareReleased; // ivar: _hh2SoftwareReleased
@property BOOL hh2SuppressDuplicateUserModelBulletins; // ivar: _hh2SuppressDuplicateUserModelBulletins
@property BOOL homeSafetySecurityEnabled; // ivar: _homeSafetySecurityEnabled
@property (readonly) IDSServerBag *idsServerBag; // ivar: _idsServerBag
@property (readonly, copy) NSString *keySuffix; // ivar: _keySuffix
@property (readonly) HMFTimer *refreshTimer; // ivar: _refreshTimer
@property (readonly) Class superclass;


+(id)logCategory;
-(id)init;
-(id)initWithIDSServerBag:(id)arg0 refreshTimer:(id)arg1 keySuffix:(id)arg2 ;
-(void)configure;
-(void)timerDidFire:(id)arg0 ;


@end


#endif