// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDHRCARDIOFITNESSSTORESERVER_H
#define HDHRCARDIOFITNESSSTORESERVER_H

@class HDStandardTaskServer, NSString;
@protocol HDDiagnosticObject, HDHRCardioFitnessStorePluginServerInterface;



@interface HDHRCardioFitnessStoreServer : HDStandardTaskServer <HDDiagnosticObject, HDHRCardioFitnessStorePluginServerInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)taskIdentifier;
-(BOOL)_insertSampleWithLocalSource:(id)arg0 error:(*id)arg1 ;
-(BOOL)_saveCardioFitnessNotificationWithValue:(id)arg0 threshold:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 options:(NSUInteger)arg4 error:(*id)arg5 ;
-(id)diagnosticDescription;
-(id)exportedInterface;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(id)remoteInterface;
-(void)_triggerNanoSync;
-(void)connectionInvalidated;
-(void)remote_saveCardioFitnessAlertWithValue:(id)arg0 threshold:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 options:(NSUInteger)arg4 completion:(id)arg5 ;


@end


#endif