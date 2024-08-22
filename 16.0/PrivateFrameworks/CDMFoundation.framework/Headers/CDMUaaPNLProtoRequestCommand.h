// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDMUAAPNLPROTOREQUESTCOMMAND_H
#define CDMUAAPNLPROTOREQUESTCOMMAND_H

@class SIRINLUINTERNALUAAP_PARSERUaaPParserRequest, SIRINLUEXTERNALRequestID;


#import "CDMBaseCommand.h"

@interface CDMUaaPNLProtoRequestCommand : CDMBaseCommand

@property (readonly, nonatomic) SIRINLUINTERNALUAAP_PARSERUaaPParserRequest *parserRequest; // ivar: _parserRequest
@property (readonly, nonatomic) SIRINLUEXTERNALRequestID *requestId; // ivar: _requestId


-(id)commandName;
-(id)initWithParserRequest:(id)arg0 requestId:(id)arg1 ;


@end


#endif