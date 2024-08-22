// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMXPCGENERICSENDCOMMAND_H
#define CDMXPCGENERICSENDCOMMAND_H

@class NSString, SIRINLUResponse, SIRINLUINTERNALPreprocessingWrapper;


#import "CDMBaseCommand.h"
#import "CDMNLXResponse.h"

@interface CDMXPCGenericSendCommand : CDMBaseCommand

@property (readonly, nonatomic) NSString *clientId; // ivar: _clientId
@property (readonly, nonatomic) SIRINLUResponse *nluResponse; // ivar: _nluResponse
@property (readonly, nonatomic) CDMNLXResponse *nlxResponse; // ivar: _nlxResponse
@property (readonly, nonatomic) SIRINLUINTERNALPreprocessingWrapper *preprocessingWrapper; // ivar: _preprocessingWrapper


-(id)commandName;
-(id)initWithError:(id)arg0 clientId:(id)arg1 ;
-(id)initWithNLUResponseDeprecated:(id)arg0 shouldConvertNLXResponse:(BOOL)arg1 clientId:(id)arg2 ;
-(id)initWithNLXResponse:(id)arg0 clientId:(id)arg1 ;
-(id)initWithPreprocessingWrapper:(id)arg0 clientId:(id)arg1 ;


@end


#endif