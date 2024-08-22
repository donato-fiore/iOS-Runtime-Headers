// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDMGENERICSENDCOMMAND_H
#define CDMGENERICSENDCOMMAND_H

@class NSString, SIRINLUResponse, SIRINLUINTERNALPreprocessingWrapper;


#import "CDMBaseCommand.h"
#import "_TtC13CDMFoundation14CDMNluResponse.h"

@interface CDMGenericSendCommand : CDMBaseCommand

@property (readonly, nonatomic) _TtC13CDMFoundation14CDMNluResponse *cdmNluResponse; // ivar: _cdmNluResponse
@property (readonly, nonatomic) NSString *clientId; // ivar: _clientId
@property (readonly, nonatomic) SIRINLUResponse *nluResponse; // ivar: _nluResponse
@property (readonly, nonatomic) SIRINLUINTERNALPreprocessingWrapper *preprocessingWrapper; // ivar: _preprocessingWrapper


-(id)commandName;
-(id)initWithCDMNluResponse:(id)arg0 clientId:(id)arg1 ;
-(id)initWithError:(id)arg0 clientId:(id)arg1 ;
-(id)initWithPreprocessingWrapper:(id)arg0 clientId:(id)arg1 ;


@end


#endif