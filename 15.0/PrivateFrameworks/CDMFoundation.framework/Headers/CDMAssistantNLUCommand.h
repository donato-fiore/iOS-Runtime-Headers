// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMASSISTANTNLUCOMMAND_H
#define CDMASSISTANTNLUCOMMAND_H

@class NSString, SIRINLURequest, NLXSchemaNLXClientEventMetadata, SIRINLUEXTERNALCDMNluRequest;


#import "CDMBaseCommand.h"

@interface CDMAssistantNLUCommand : CDMBaseCommand

@property (readonly, nonatomic) NSString *clientId; // ivar: _clientId
@property (readonly, nonatomic) BOOL initWithNLURequestCalled; // ivar: _initWithNLURequestCalled
@property (readonly, nonatomic) SIRINLURequest *nluRequest; // ivar: _nluRequest
@property (retain, nonatomic) NLXSchemaNLXClientEventMetadata *selfMetadata; // ivar: _selfMetadata
@property (readonly, nonatomic) SIRINLUEXTERNALCDMNluRequest *siriNLUTypeObj; // ivar: _siriNLUTypeObj


-(id)commandName;
-(id)initWithNLURequest:(id)arg0 clientId:(id)arg1 ;
-(id)initWithNLURequestDeprecated:(id)arg0 clientId:(id)arg1 ;


@end


#endif