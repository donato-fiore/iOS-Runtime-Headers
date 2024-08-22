// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMTRPROTOCOLOPERATIONMANAGER_H
#define HMMTRPROTOCOLOPERATIONMANAGER_H

@class HMFObject, NSString;
@protocol HMFLogging;



@interface HMMTRProtocolOperationManager : HMFObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
+(id)sharedInstance;
-(BOOL)_isBasicClusterOperationForBridgedDevice:(Class)arg0 endpointID:(NSUInteger)arg1 ;
-(BOOL)handleSpecialCaseCharacteristicWithOperation:(id)arg0 clientQueue:(id)arg1 operationResponseHandler:(id)arg2 ;
-(id)_processGenericResponseForOperation:(id)arg0 responseValues:(id)arg1 responseError:(id)arg2 ;
-(id)_processReadResponseForOperation:(id)arg0 readResponseValues:(id)arg1 readResponseError:(id)arg2 ;
-(id)_processResponseForOperation:(id)arg0 responseValues:(id)arg1 responseError:(id)arg2 ;
-(id)_processWriteResponseForOperation:(id)arg0 writeResponseValues:(id)arg1 writeResponseError:(id)arg2 ;
-(id)_responseTupleWithMappedValueForOperation:(id)arg0 responseValue:(id)arg1 responseError:(id)arg2 ;
// -(void)_addArgumentsToInvocation:(id)arg0 primaryArgument:(id)arg1 completionHandlerArgument:(id)arg2 characteristicDescriptor:(unk)arg3 forCharacteristic:(id)arg4  ;
// -(void)_addArgumentsToInvocation:(id)arg0 primaryArgument:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandlerArgument:(id)arg4 characteristicDescriptor:(unk)arg5 forCharacteristic:(id)arg6  ;
-(void)_addParamsToInvocation:(id)arg0 paramsObject:(id)arg1 completionHandlerArgument:(id)arg2 characteristicDescriptor:(id)arg3 forCharacteristic:(id)arg4 ;
-(void)_addParamsToInvocation:(id)arg0 paramsObject:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandlerArgument:(id)arg4 characteristicDescriptor:(id)arg5 forCharacteristic:(id)arg6 ;
-(void)handleIdentifyDeviceWriteWithOperation:(id)arg0 clientQueue:(id)arg1 operationResponseHandler:(id)arg2 ;
-(void)handleLockTargetStateWriteWithOperation:(id)arg0 clientQueue:(id)arg1 operationResponseHandler:(id)arg2 ;
-(void)registerOperation:(id)arg0 clientQueue:(id)arg1 operationResponseHandler:(id)arg2 ;


@end


#endif