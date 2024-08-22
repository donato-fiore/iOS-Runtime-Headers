// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFREMOTEEXECUTIONASKEACHTIMEREQUEST_H
#define WFREMOTEEXECUTIONASKEACHTIMEREQUEST_H

@class NSString, NSDictionary, NSArray, NSMutableArray;


#import "WFRemoteExecutionRequest.h"

@interface WFRemoteExecutionAskEachTimeRequest : WFRemoteExecutionRequest

@property (readonly, nonatomic) NSString *actionIdentifier; // ivar: _actionIdentifier
@property (readonly, nonatomic) NSDictionary *actionSerializedParameters; // ivar: _actionSerializedParameters
@property (readonly, nonatomic) NSString *associatedRunRequestIdentifier; // ivar: _associatedRunRequestIdentifier
@property (readonly, nonatomic) NSArray *parameterKeys; // ivar: _parameterKeys
@property (readonly, nonatomic) NSDictionary *parameterKeysAndStates; // ivar: _parameterKeysAndStates
@property (retain, nonatomic) NSMutableArray *parameterKeysAndStatesData; // ivar: _parameterKeysAndStatesData
@property (readonly, nonatomic) NSDictionary *possibleStatesByParameterKey; // ivar: _possibleStatesByParameterKey
@property (retain, nonatomic) NSMutableArray *possibleStatesByParameterKeyData; // ivar: _possibleStatesByParameterKeyData


+(NSInteger)version;
-(BOOL)readMessageFromData:(id)arg0 error:(*id)arg1 ;
-(id)initWithAction:(id)arg0 parameters:(id)arg1 associatedRunRequestIdentifier:(id)arg2 possibleStatesByParameterKey:(id)arg3 ;
-(id)initWithData:(id)arg0 error:(*id)arg1 ;
-(id)writeMessageToWriter:(id)arg0 error:(*id)arg1 ;
-(void)inflateParameterStatesWithAction:(id)arg0 ;


@end


#endif