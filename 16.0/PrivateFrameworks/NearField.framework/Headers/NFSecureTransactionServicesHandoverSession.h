// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NFSECURETRANSACTIONSERVICESHANDOVERSESSION_H
#define NFSECURETRANSACTIONSERVICESHANDOVERSESSION_H

@protocol NFSecureTransactionServicesHandoverSessionCallbacksInterface, NFSecureTransactionServicesHandoverSessionDelegate, NFTNEPTagDeviceDelegate, NFTNEPReaderDelegate;


#import "NFSession.h"

@interface NFSecureTransactionServicesHandoverSession : NFSession <NFSecureTransactionServicesHandoverSessionCallbacksInterface>



@property (weak) NSObject<NFSecureTransactionServicesHandoverSessionDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<NFTNEPTagDeviceDelegate> *tagDeviceDelegate; // ivar: _tagDeviceDelegate
@property (retain, nonatomic) NSObject<NFTNEPReaderDelegate> *tagReaderDelegate; // ivar: _tagReaderDelegate


-(id)deselectService;
-(id)restartPolling;
-(id)selectService:(id)arg0 ;
-(id)startTNEPReaderWithDelegate:(id)arg0 ;
-(id)startTNEPTagDeviceWithService:(id)arg0 optionalRecords:(id)arg1 delegate:(id)arg2 ;
-(void)connectionHandoverProcessCompleted;
-(void)connectionHandoverProcessFailure:(id)arg0 ;
-(void)connectionHandoverTNEPServiceSelected:(id)arg0 ;
-(void)fieldChange:(BOOL)arg0 ;
-(void)fieldNotification:(id)arg0 ;
-(void)handleSessionResumed;
-(void)handleSessionSuspended:(id)arg0 ;
-(void)singleResponseCommunicationReaderSend:(id)arg0 completionHandler:(id)arg1 ;
-(void)singleResponseCommunicationTagSend:(id)arg0 completionHandler:(id)arg1 ;
-(void)startSTSNotificationListenerWithEndpoint:(id)arg0 ;
-(void)stopTNEPOperation;
-(void)tnepReaderServicesAborted:(id)arg0 ;
-(void)tnepReaderServicesDiscovered:(id)arg0 ;
-(void)tnepTagDeviceDeselected:(id)arg0 ;
-(void)tnepTagDeviceNDEFMessageReceived:(id)arg0 ;
-(void)tnepTagDeviceReaderDetected;
-(void)tnepTagDeviceSelected:(id)arg0 respondHandler:(id)arg1 ;


@end


#endif