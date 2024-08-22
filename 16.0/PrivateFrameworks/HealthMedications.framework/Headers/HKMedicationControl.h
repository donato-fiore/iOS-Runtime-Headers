// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKMEDICATIONCONTROL_H
#define HKMEDICATIONCONTROL_H

@class NSString, HKHealthStore, HKTaskServerProxyProvider;
@protocol _HKXPCExportable, HKMedicationControlClientInterface;

#import <Foundation/Foundation.h>


@interface HKMedicationControl : NSObject <_HKXPCExportable, HKMedicationControlClientInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (retain, nonatomic) HKTaskServerProxyProvider *proxyProvider; // ivar: _proxyProvider
@property (readonly) Class superclass;


+(id)clientInterface;
+(id)serverInterface;
-(id)exportedInterface;
-(id)init;
-(id)initWithHealthStore:(id)arg0 ;
-(id)remoteInterface;
-(void)allDismissedDrugInteractionsWithCompletion:(id)arg0 ;
-(void)connectionInvalidated;
-(void)deleteDismissedDrugInteractionsForMedication:(id)arg0 completion:(id)arg1 ;
-(void)markInteractionAsDismissed:(id)arg0 completion:(id)arg1 ;
-(void)unitTest_noOpWithCompletion:(id)arg0 ;


@end


#endif