// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDFITNESSMACHINEPAIRINGMANAGER_H
#define HDFITNESSMACHINEPAIRINGMANAGER_H

@class NSString;
@protocol HDFitnessMachineConnectionInitiatorProtocol, HDFitnessMachinePairingManagerDelegate;

#import <Foundation/Foundation.h>


@interface HDFitnessMachinePairingManager : NSObject <HDFitnessMachineConnectionInitiatorProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HDFitnessMachinePairingManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithProfile:(id)arg0 ;
-(void)deliverError:(id)arg0 ;
-(void)forbidConnectionForFitnessMachineSessionUUID:(id)arg0 withConnectionUUID:(id)arg1 ;
-(void)handleBLEConnectionCompletedSuccessfully:(BOOL)arg0 ;
-(void)permitConnectionForFitnessMachineSessionUUID:(id)arg0 activityType:(NSUInteger)arg1 withConnectionUUID:(id)arg2 ;
-(void)registerConnectionInitiatorClient:(id)arg0 withConnectionUUID:(id)arg1 ;
-(void)reset;
-(void)simulateAccept;
-(void)simulateTapWithFitnessMachineType:(NSUInteger)arg0 ;
-(void)updatedConnectionStateWithError:(id)arg0 ;
-(void)updatedFitnessMachine;
-(void)updatedFitnessMachineState:(NSUInteger)arg0 fitnessMachineSessionUUID:(id)arg1 ;
-(void)workoutAppIsReady;


@end


#endif