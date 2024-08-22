// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDREMOTEACCOUNTMESSAGEFILTER_H
#define HMDREMOTEACCOUNTMESSAGEFILTER_H

@class HMFMessageDestination, NSArray;
@protocol HAPKeyStore;


#import "HMDMessageFilter.h"
#import "HMDAppleAccountManager.h"

@interface HMDRemoteAccountMessageFilter : HMDMessageFilter

@property (retain, nonatomic) HMDAppleAccountManager *appleAccountManager; // ivar: _appleAccountManager
@property (retain, nonatomic) NSObject<HAPKeyStore> *systemKeychainStore; // ivar: _systemKeychainStore
@property (readonly) HMFMessageDestination *target; // ivar: _target
@property (readonly, copy) NSArray *whitelistedMessages; // ivar: _whitelistedMessages


+(id)logCategory;
-(BOOL)acceptMessage:(id)arg0 target:(id)arg1 errorReason:(*id)arg2 ;
-(id)initWithName:(id)arg0 ;
-(id)initWithTarget:(id)arg0 ;
-(id)initWithTarget:(id)arg0 whitelistedMessages:(id)arg1 ;
-(id)initWithTarget:(id)arg0 whitelistedMessages:(id)arg1 appleAccountManager:(id)arg2 systemKeychainStore:(id)arg3 ;
-(id)logIdentifier;


@end


#endif