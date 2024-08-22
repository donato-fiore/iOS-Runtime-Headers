// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDMNLV4PROTORESPONSECOMMAND_H
#define CDMNLV4PROTORESPONSECOMMAND_H

@class SIRINLUEXTERNALCDMNluResponse, SIRINLUINTERNALNLV4_PARSERNLv4ParserResponse;


#import "CDMBaseCommand.h"

@interface CDMNLv4ProtoResponseCommand : CDMBaseCommand

@property (readonly, nonatomic) SIRINLUEXTERNALCDMNluResponse *nluResponse; // ivar: _nluResponse
@property (readonly, nonatomic) SIRINLUINTERNALNLV4_PARSERNLv4ParserResponse *parserResponse; // ivar: _parserResponse


-(id)commandName;
-(id)initWithParserResponse:(id)arg0 nluResponse:(id)arg1 ;


@end


#endif