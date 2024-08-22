// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPPLUGINPROTOCOLOPERATIONMANAGER_H
#define CHIPPLUGINPROTOCOLOPERATIONMANAGER_H


#import <Foundation/Foundation.h>


@interface CHIPPluginProtocolOperationManager : NSObject



+(id)sharedInstance;
-(id)_processGenericResponseForOperation:(id)arg0 responseValues:(id)arg1 responseError:(id)arg2 ;
-(id)_processReadResponseForOperation:(id)arg0 readResponseValues:(id)arg1 readResponseError:(id)arg2 ;
-(id)_processResponseForOperation:(id)arg0 responseValues:(id)arg1 responseError:(id)arg2 ;
-(id)_processWriteResponseForOperation:(id)arg0 writeResponseValues:(id)arg1 writeResponseError:(id)arg2 ;
-(id)_responseTupleWithMappedValueForOperation:(id)arg0 responseValue:(id)arg1 responseError:(id)arg2 ;
// -(void)_addArgumentsToInvocation:(id)arg0 primaryArgument:(id)arg1 completionHandlerArgument:(id)arg2 characteristicDescriptor:(unk)arg3 forCharacteristic:(id)arg4  ;
-(void)registerOperation:(id)arg0 clientQueue:(id)arg1 operationResponseHandler:(id)arg2 ;


@end


#endif