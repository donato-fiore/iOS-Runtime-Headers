// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMLVCREQUESTCOMMAND_H
#define CDMLVCREQUESTCOMMAND_H

@class NSMutableArray, SIRINLUINTERNALITFMITFMParserRequest, SIRINLUEXTERNALRewriteMessage;


#import "CDMBaseCommand.h"

@interface CDMLVCRequestCommand : CDMBaseCommand

@property (readonly, nonatomic) NSMutableArray *overridesInputs; // ivar: _overridesInputs
@property (readonly, nonatomic) SIRINLUINTERNALITFMITFMParserRequest *parserRequest; // ivar: _parserRequest
@property (readonly, nonatomic) SIRINLUEXTERNALRewriteMessage *rewriteMsg; // ivar: _rewriteMsg


-(id)initWithParserRequest:(id)arg0 rewriteMsg:(id)arg1 overridesInputs:(id)arg2 ;


@end


#endif