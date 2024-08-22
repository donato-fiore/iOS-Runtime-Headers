// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMTRSYSTEMCOMMISSIONERPAIRINGMANAGER_H
#define HMMTRSYSTEMCOMMISSIONERPAIRINGMANAGER_H

@class HMFObject, NSString;
@protocol HMFLogging, OS_dispatch_queue;


#import "HMMTRAccessoryServerBrowser.h"
#import "HMMTRStorage.h"

@interface HMMTRSystemCommissionerPairingManager : HMFObject <HMFLogging>



@property (readonly, weak, nonatomic) HMMTRAccessoryServerBrowser *browser; // ivar: _browser
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) HMMTRStorage *storage; // ivar: _storage
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)initWithQueue:(id)arg0 accessoryServerBrowser:(id)arg1 ;
-(void)_fetchAllDevicePairingsForSystemCommissionerDevicePairingWithUUID:(id)arg0 completionHandler:(id)arg1 ;
-(void)_fetchSystemCommissionerPairingsWithCompletionHandler:(id)arg0 ;
-(void)_removeAllDevicePairingsForSystemCommissionerPairingUUID:(id)arg0 completionHandler:(id)arg1 ;
-(void)_removeDevicePairingWithUUID:(id)arg0 forSystemCommissionerPairingUUID:(id)arg1 completionHandler:(id)arg2 ;
-(void)_removeSystemCommissionerPairingWithUUID:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchDevicePairingsForSystemCommissionerPairingUUID:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchSystemCommissionerPairingsWithCompletionHandler:(id)arg0 ;
-(void)removeAllDevicePairingsForSystemCommissionerPairingUUID:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeDevicePairingWithUUID:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeDevicePairingWithUUID:(id)arg0 forSystemCommissionerPairingUUID:(id)arg1 completionHandler:(id)arg2 ;
-(void)removeSystemCommissionerPairingWithUUID:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif