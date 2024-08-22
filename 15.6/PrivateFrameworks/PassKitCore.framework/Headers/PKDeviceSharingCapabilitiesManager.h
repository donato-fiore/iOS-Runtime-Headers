// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKDEVICESHARINGCAPABILITIESMANAGER_H
#define PKDEVICESHARINGCAPABILITIESMANAGER_H

@class NSHashTable, NSMutableArray, NSMutableDictionary, NSString;
@protocol PKPaymentServiceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PKPaymentService.h"

@interface PKDeviceSharingCapabilitiesManager : NSObject <PKPaymentServiceDelegate>

 {
    NSHashTable *_observers;
    os_unfair_lock_s _lockObservers;
    os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_replyQueue;
    PKPaymentService *_paymentService;
    NSMutableArray *_familyMembers;
    NSMutableDictionary *_fetchStatusByAppleID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)currentFetchStatusForAppleID:(id)arg0 ;
-(id)init;
-(void)_accessObserversWithHandler:(id)arg0 ;
-(void)_sendDeviceSharingCapabilitiesUpdated:(id)arg0 maximumPossibleDevices:(NSInteger)arg1 forAppleID:(id)arg2 ;
-(void)_sendDeviceSharingCapabilitiesUpdated:(id)arg0 newSharingCapabilties:(id)arg1 forAppleID:(id)arg2 ;
-(void)didReceiveDeviceSharingCapabilities:(id)arg0 forHandle:(id)arg1 ;
-(void)fetchDeviceCapabilitesForAppleIDs:(id)arg0 associatedFamilyMembers:(id)arg1 ;
-(void)registerObserver:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif