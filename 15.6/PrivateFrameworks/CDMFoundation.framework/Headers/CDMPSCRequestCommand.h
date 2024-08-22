// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDMPSCREQUESTCOMMAND_H
#define CDMPSCREQUESTCOMMAND_H

@class SIRINLUINTERNALITFMITFMParserRequest, SIRINLUEXTERNALRewriteMessage;


#import "CDMBaseCommand.h"

@interface CDMPSCRequestCommand : CDMBaseCommand

@property (readonly, nonatomic) SIRINLUINTERNALITFMITFMParserRequest *parserRequest; // ivar: _parserRequest
@property (readonly, nonatomic) SIRINLUEXTERNALRewriteMessage *rewriteMsg; // ivar: _rewriteMsg


-(id)commandName;
-(id)initWithParserRequest:(id)arg0 rewriteMsg:(id)arg1 ;


@end


#endif