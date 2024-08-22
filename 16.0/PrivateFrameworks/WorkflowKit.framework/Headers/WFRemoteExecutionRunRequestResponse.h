// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFREMOTEEXECUTIONRUNREQUESTRESPONSE_H
#define WFREMOTEEXECUTIONRUNREQUESTRESPONSE_H

@class NSString, NSError, NSData, WFContentCollection, NSMutableArray, NSDictionary;
@protocol WFPBCodable;


#import "WFRemoteExecutionRequest.h"
#import "WFRemoteExecutionCoordinator.h"

@interface WFRemoteExecutionRunRequestResponse : WFRemoteExecutionRequest <WFPBCodable>



@property (retain, nonatomic) WFRemoteExecutionCoordinator *coordinator; // ivar: _coordinator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSData *errorData; // ivar: _errorData
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WFContentCollection *output; // ivar: _output
@property (retain, nonatomic) NSMutableArray *outputData; // ivar: _outputData
@property (readonly, nonatomic) NSString *runRequestIdentifier; // ivar: _runRequestIdentifier
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDictionary *variables; // ivar: _variables
@property (retain, nonatomic) NSMutableArray *variablesData; // ivar: _variablesData


+(NSInteger)version;
-(BOOL)readMessageFromData:(id)arg0 error:(*id)arg1 ;
-(id)initWithData:(id)arg0 error:(*id)arg1 ;
-(id)initWithRunRequestIdentifier:(id)arg0 variables:(id)arg1 output:(id)arg2 error:(id)arg3 ;
-(id)writeMessageToWriter:(id)arg0 error:(*id)arg1 ;
-(void)inflateOutputData:(id)arg0 fileCoordinator:(id)arg1 completion:(id)arg2 ;
-(void)inflateVariablesData:(id)arg0 fileCoordinator:(id)arg1 completion:(id)arg2 ;
-(void)inflateWithFileCoordinator:(id)arg0 completion:(id)arg1 ;


@end


#endif