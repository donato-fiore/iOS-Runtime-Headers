// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMSNLCPROTOREQUESTCOMMAND_H
#define CDMSNLCPROTOREQUESTCOMMAND_H

@class SIRINLUINTERNALSNLCSNLCParserRequest, NSArray;


#import "CDMBaseCommand.h"

@interface CDMSNLCProtoRequestCommand : CDMBaseCommand

@property (readonly, nonatomic) SIRINLUINTERNALSNLCSNLCParserRequest *parserRequest; // ivar: _parserRequest
@property (readonly, nonatomic) NSArray *rewrittenUtterances; // ivar: _rewrittenUtterances


-(id)commandName;
-(id)initWithParserRequest:(id)arg0 rewrittenUtterances:(id)arg1 ;


@end


#endif