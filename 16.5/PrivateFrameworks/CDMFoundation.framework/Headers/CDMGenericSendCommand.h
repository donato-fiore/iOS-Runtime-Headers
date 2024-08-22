// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMGENERICSENDCOMMAND_H
#define CDMGENERICSENDCOMMAND_H

@class NSString, SIRINLUResponse, SIRINLUINTERNALPreprocessingWrapper;


#import "CDMServiceGraphCommand.h"
#import "CDMNluResponse.h"
#import "CDMEmbeddingGraphResponseCommand.h"

@interface CDMGenericSendCommand : CDMServiceGraphCommand

@property (readonly, nonatomic) CDMNluResponse *cdmNluResponse; // ivar: _cdmNluResponse
@property (readonly, nonatomic) NSString *clientId; // ivar: _clientId
@property (readonly, nonatomic) CDMEmbeddingGraphResponseCommand *embeddingResponse; // ivar: _embeddingResponse
@property (readonly, nonatomic) SIRINLUResponse *nluResponse; // ivar: _nluResponse
@property (readonly, nonatomic) SIRINLUINTERNALPreprocessingWrapper *preprocessingWrapper; // ivar: _preprocessingWrapper


+(BOOL)supportsSecureCoding;
-(id)initWithCDMNluResponse:(id)arg0 clientId:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEmbeddingGraphResponse:(id)arg0 ;
-(id)initWithError:(id)arg0 clientId:(id)arg1 ;
-(id)initWithPreprocessingWrapper:(id)arg0 clientId:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif