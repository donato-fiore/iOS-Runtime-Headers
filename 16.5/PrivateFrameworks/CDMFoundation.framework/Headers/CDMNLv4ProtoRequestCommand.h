// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMNLV4PROTOREQUESTCOMMAND_H
#define CDMNLV4PROTOREQUESTCOMMAND_H

@class SIRINLUINTERNALNLV4_PARSERNLv4ParserRequest, SIRINLUEXTERNALRequestID;


#import "CDMBaseCommand.h"

@interface CDMNLv4ProtoRequestCommand : CDMBaseCommand

@property (readonly, nonatomic) SIRINLUINTERNALNLV4_PARSERNLv4ParserRequest *parserRequest; // ivar: _parserRequest
@property (readonly, nonatomic) SIRINLUEXTERNALRequestID *requestId; // ivar: _requestId


-(id)initWithParserRequest:(id)arg0 requestId:(id)arg1 ;


@end


#endif