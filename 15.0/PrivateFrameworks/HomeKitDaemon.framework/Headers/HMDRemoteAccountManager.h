// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDREMOTEACCOUNTMANAGER_H
#define HMDREMOTEACCOUNTMANAGER_H

@class HMFObject, HMFUnfairLock, NSMutableSet, NSArray, NSString, NSMutableArray, IDSService;
@protocol HMDAccountManager, HMFLogging, HMFObject, IDSServiceDelegate, NSFastEnumeration, OS_dispatch_queue;


#import "HMDBackingStore.h"

@interface HMDRemoteAccountManager : HMFObject <HMDAccountManager, HMFLogging, HMFObject, IDSServiceDelegate, NSFastEnumeration>

 {
    NSObject<OS_dispatch_queue> *_queue;
    HMFUnfairLock *_lock;
    NSMutableSet *_accounts;
}


@property (retain, nonatomic) NSArray *accounts;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (retain, nonatomic) HMDBackingStore *backingStore; // ivar: _backingStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isMonitoring) BOOL monitoring; // ivar: _monitoring
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, nonatomic) NSMutableArray *resolveOperations; // ivar: _resolveOperations
@property (readonly, nonatomic) IDSService *service; // ivar: _service
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;


+(id)logCategory;
+(id)sharedManager;
-(BOOL)shouldAccount:(id)arg0 pushbackModel:(id)arg1 actions:(id)arg2 ;
-(BOOL)shouldCacheAccount:(id)arg0 ;
-(BOOL)shouldDevice:(id)arg0 processModel:(id)arg1 actions:(id)arg2 ;
-(BOOL)shouldSyncAccount:(id)arg0 ;
-(BOOL)shouldSyncDevice:(id)arg0 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)accountForHandle:(id)arg0 ;
-(id)accountForIdentifier:(id)arg0 ;
-(id)accountForModelIdentifier:(id)arg0 ;
-(id)accountForSenderContext:(id)arg0 ;
-(id)deviceForSenderContext:(id)arg0 ;
-(id)init;
-(id)initWithIDSService:(id)arg0 ;
-(void)__handleSendMessageFailureWithError:(id)arg0 destination:(id)arg1 ;
-(void)_resolveAccountForHandle:(id)arg0 completionHandler:(id)arg1 ;
-(void)addAccount:(id)arg0 ;
-(void)processAccountModel:(id)arg0 message:(id)arg1 ;
-(void)processAccountModelRemove:(id)arg0 message:(id)arg1 ;
-(void)removeAccount:(id)arg0 ;
-(void)reset;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(BOOL)arg3 error:(id)arg4 context:(id)arg5 ;
-(void)start;
-(void)stop;


@end


#endif