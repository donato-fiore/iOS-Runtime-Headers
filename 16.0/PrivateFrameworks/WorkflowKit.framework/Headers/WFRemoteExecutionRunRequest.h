// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFREMOTEEXECUTIONRUNREQUEST_H
#define WFREMOTEEXECUTIONRUNREQUEST_H

@class NSString, WFContentCollection, NSMutableArray, NSDictionary;
@protocol WFPBCodable;


#import "WFRemoteExecutionRequest.h"
#import "WFRemoteExecutionCoordinator.h"

@interface WFRemoteExecutionRunRequest : WFRemoteExecutionRequest <WFPBCodable>



@property (readonly, nonatomic) NSString *actionIdentifier; // ivar: _actionIdentifier
@property (retain, nonatomic) WFRemoteExecutionCoordinator *coordinator; // ivar: _coordinator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WFContentCollection *input; // ivar: _input
@property (retain, nonatomic) NSMutableArray *inputData; // ivar: _inputData
@property (readonly, nonatomic) NSDictionary *processedParameters; // ivar: _processedParameters
@property (retain, nonatomic) NSMutableArray *processedParametersData; // ivar: _processedParametersData
@property (readonly, nonatomic) NSDictionary *serializedParameters; // ivar: _serializedParameters
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDictionary *variables; // ivar: _variables
@property (retain, nonatomic) NSMutableArray *variablesData; // ivar: _variablesData
@property (readonly, nonatomic) NSString *workflowID; // ivar: _workflowID


+(NSInteger)version;
-(BOOL)readMessageFromData:(id)arg0 error:(*id)arg1 ;
-(id)initWithAction:(id)arg0 workflowControllerState:(id)arg1 ;
-(id)initWithData:(id)arg0 error:(*id)arg1 ;
-(id)writeMessageToWriter:(id)arg0 error:(*id)arg1 ;
-(void)inflateInputData:(id)arg0 fileCoordinator:(id)arg1 completion:(id)arg2 ;
-(void)inflateProcessedParametersData:(id)arg0 fileCoordinator:(id)arg1 completion:(id)arg2 ;
-(void)inflateVariablesData:(id)arg0 fileCoordinator:(id)arg1 completion:(id)arg2 ;
-(void)inflateWithFileCoordinator:(id)arg0 completion:(id)arg1 ;


@end


#endif