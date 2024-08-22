// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSPRECEIVERETACONTROLLER_H
#define MSPRECEIVERETACONTROLLER_H

@class NSMutableDictionary, MDNotificationCenter, NSTimer, NSArray, NSString;
@protocol MSPSharedTripStorageDelegate, MSPSharedTripRelayDelegate, OS_os_transaction, MSPReceiverETAControllerDelegate;

#import <Foundation/Foundation.h>

#import "MSPSharedTripRelay.h"
#import "MSPSharedTripBlocklist.h"

@interface MSPReceiverETAController : NSObject <MSPSharedTripStorageDelegate, MSPSharedTripRelayDelegate>

 {
    NSObject<OS_os_transaction> *_transaction;
    NSMutableDictionary *_sharedSessions;
    NSMutableDictionary *_sharedNavStates;
    NSMutableDictionary *_waitingNavStates;
    MDNotificationCenter *_mapsNotificationCenter;
    MSPSharedTripRelay *_idsRelay;
    MSPSharedTripBlocklist *_blockedList;
    NSTimer *_cleanupTimer;
}


@property (readonly, nonatomic) NSArray *allTrips;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MSPReceiverETAControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_allowMessageWithState:(id)arg0 forGroup:(id)arg1 fromID:(id)arg2 ;
-(BOOL)_cleanUpNecessaryForGroup:(id)arg0 ;
-(BOOL)subscribeToUpdatesToSharedTrip:(id)arg0 error:(*id)arg1 ;
-(BOOL)unsubscribeFromUpdatesToSharedTrip:(id)arg0 error:(*id)arg1 ;
-(id)initWithRelay:(id)arg0 ;
-(void)_cleanGroup:(id)arg0 ;
-(void)_cleanupIfNecessary;
-(void)_resolveContactIfNeeded:(id)arg0 fromId:(id)arg1 completion:(id)arg2 ;
-(void)_setNotificationCenter:(id)arg0 ;
-(void)_showOrUpdateNotificationIfNeeded:(id)arg0 ;
-(void)_updateData:(id)arg0 forGroup:(id)arg1 fromID:(id)arg2 ;
-(void)_updateDelegateWithUpdateState:(id)arg0 to:(id)arg1 freshAvailable:(BOOL)arg2 ;
-(void)blockSharedTrip:(id)arg0 ;
-(void)cleanTimer;
-(void)dealloc;
-(void)groupSession:(id)arg0 participantDidJoin:(id)arg1 ;
-(void)groupSession:(id)arg0 participantDidLeave:(id)arg1 ;
-(void)groupSessionEnded:(id)arg0 ;
-(void)relay:(id)arg0 receiveData:(id)arg1 info:(id)arg2 fromID:(id)arg3 ;
-(void)relay:(id)arg0 sharingClosed:(id)arg1 ;
-(void)storageController:(id)arg0 updatedSharedTripGroupStorage:(id)arg1 ;
-(void)updateContacts;


@end


#endif