// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFREMOTEEXECUTIONASKEACHTIMEREQUESTRESPONSE_H
#define WFREMOTEEXECUTIONASKEACHTIMEREQUESTRESPONSE_H

@class NSError, NSDictionary, NSMutableArray, NSString;


#import "WFRemoteExecutionRequest.h"

@interface WFRemoteExecutionAskEachTimeRequestResponse : WFRemoteExecutionRequest

@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSDictionary *inputtedStates; // ivar: _inputtedStates
@property (retain, nonatomic) NSMutableArray *inputtedStatesData; // ivar: _inputtedStatesData
@property (readonly, nonatomic) NSString *originatingRequestIdentifier; // ivar: _originatingRequestIdentifier


+(NSInteger)version;
-(BOOL)readMessageFromData:(id)arg0 error:(*id)arg1 ;
-(id)initWithData:(id)arg0 error:(*id)arg1 ;
-(id)initWithOriginatingRequestIdentifier:(id)arg0 inputtedStates:(id)arg1 error:(id)arg2 ;
-(id)writeMessageToWriter:(id)arg0 error:(*id)arg1 ;
-(void)inflateInputtedStatesWithAction:(id)arg0 ;


@end


#endif