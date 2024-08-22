// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDREMOTEACCOUNTMESSAGEFILTER_H
#define HMDREMOTEACCOUNTMESSAGEFILTER_H

@class NSArray, HMFMessageDestination;
@protocol HAPKeyStore;


#import "HMDMessageFilter.h"
#import "HMDAppleAccountManager.h"

@interface HMDRemoteAccountMessageFilter : HMDMessageFilter

@property (readonly, copy) NSArray *allowedMessages; // ivar: _allowedMessages
@property (retain, nonatomic) HMDAppleAccountManager *appleAccountManager; // ivar: _appleAccountManager
@property (retain, nonatomic) NSObject<HAPKeyStore> *systemKeychainStore; // ivar: _systemKeychainStore
@property (readonly) HMFMessageDestination *target; // ivar: _target


+(id)logCategory;
-(BOOL)acceptMessage:(id)arg0 target:(id)arg1 errorReason:(*id)arg2 ;
-(id)initWithName:(id)arg0 ;
-(id)initWithTarget:(id)arg0 ;
-(id)initWithTarget:(id)arg0 allowedMessages:(id)arg1 ;
-(id)initWithTarget:(id)arg0 allowedMessages:(id)arg1 appleAccountManager:(id)arg2 systemKeychainStore:(id)arg3 ;
-(id)logIdentifier;


@end


#endif