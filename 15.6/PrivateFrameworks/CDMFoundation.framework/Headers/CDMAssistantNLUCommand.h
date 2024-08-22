// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDMASSISTANTNLUCOMMAND_H
#define CDMASSISTANTNLUCOMMAND_H

@class NSString, NLXSchemaNLXClientEventMetadata, SIRINLUEXTERNALCDMNluRequest;


#import "CDMBaseCommand.h"

@interface CDMAssistantNLUCommand : CDMBaseCommand

@property (readonly, nonatomic) NSString *clientId; // ivar: _clientId
@property (retain, nonatomic) NLXSchemaNLXClientEventMetadata *selfMetadata; // ivar: _selfMetadata
@property (readonly, nonatomic) SIRINLUEXTERNALCDMNluRequest *siriNLUTypeObj; // ivar: _siriNLUTypeObj


-(id)commandName;
-(id)initWithNLURequest:(id)arg0 clientId:(id)arg1 ;


@end


#endif