// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDMUAAPNLPROTORESPONSECOMMAND_H
#define CDMUAAPNLPROTORESPONSECOMMAND_H

@class SIRINLUEXTERNALCDMNluResponse, SIRINLUINTERNALUAAP_PARSERUaaPParserResponse;


#import "CDMBaseCommand.h"

@interface CDMUaaPNLProtoResponseCommand : CDMBaseCommand

@property (readonly, nonatomic) SIRINLUEXTERNALCDMNluResponse *nluResponse; // ivar: _nluResponse
@property (readonly, nonatomic) SIRINLUINTERNALUAAP_PARSERUaaPParserResponse *parserResponse; // ivar: _parserResponse


-(id)initWithParserResponse:(id)arg0 nluResponse:(id)arg1 ;


@end


#endif