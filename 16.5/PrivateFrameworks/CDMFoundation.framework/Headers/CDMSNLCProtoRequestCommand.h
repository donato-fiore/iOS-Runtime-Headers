// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMSNLCPROTOREQUESTCOMMAND_H
#define CDMSNLCPROTOREQUESTCOMMAND_H

@class SIRINLUINTERNALSNLCSNLCParserRequest, SIRINLUEXTERNALRewriteMessage;


#import "CDMBaseCommand.h"

@interface CDMSNLCProtoRequestCommand : CDMBaseCommand

@property (readonly, nonatomic) SIRINLUINTERNALSNLCSNLCParserRequest *parserRequest; // ivar: _parserRequest
@property (readonly, nonatomic) SIRINLUEXTERNALRewriteMessage *rewriteMsg; // ivar: _rewriteMsg


-(id)initWithParserRequest:(id)arg0 rewriteMsg:(id)arg1 ;


@end


#endif