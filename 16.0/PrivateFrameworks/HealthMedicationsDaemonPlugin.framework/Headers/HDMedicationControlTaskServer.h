// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDMEDICATIONCONTROLTASKSERVER_H
#define HDMEDICATIONCONTROLTASKSERVER_H

@class HDStandardTaskServer;
@protocol HKMedicationControlServerInterface;



@interface HDMedicationControlTaskServer : HDStandardTaskServer <HKMedicationControlServerInterface>





+(id)taskIdentifier;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)connectionInvalidated;
-(void)remote_allDismissedDrugInteractionsWithCompletion:(id)arg0 ;
-(void)remote_deleteDismissedDrugInteractionsForMedication:(id)arg0 completion:(id)arg1 ;
-(void)remote_markInteractionAsDismissed:(id)arg0 completion:(id)arg1 ;


@end


#endif