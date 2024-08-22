// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPFIRMWAREUPDATESESSION_H
#define SPFIRMWAREUPDATESESSION_H

@class NSString, FMXPCSession, FMFuture;
@protocol SPFirmwareUpdateSessionPrivateProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SPFirmwareUpdateSession : NSObject <SPFirmwareUpdateSessionPrivateProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) FMXPCSession *session; // ivar: _session
@property (retain, nonatomic) FMFuture *sessionInvalidationFuture; // ivar: _sessionInvalidationFuture
@property (readonly) Class superclass;


-(id)init;
-(id)proxy;
-(id)remoteInterface;
-(id)serviceDescription;
-(void)beaconsInFirmwareUpdateState:(NSInteger)arg0 dateInterval:(id)arg1 completion:(id)arg2 ;
-(void)candidateBeaconsWithCompletion:(id)arg0 ;
-(void)connectionTokensForBeaconUUID:(id)arg0 dateInterval:(id)arg1 completion:(id)arg2 ;
-(void)firmwareUpdateStateForBeaconUUID:(id)arg0 completion:(id)arg1 ;
-(void)initiateFirmwareUpdateForAllEligibleBeaconsWithCompletion:(id)arg0 ;
-(void)updateBeaconUUID:(id)arg0 firmwareUpdateState:(NSInteger)arg1 systemVersion:(id)arg2 error:(id)arg3 completion:(id)arg4 ;


@end


#endif