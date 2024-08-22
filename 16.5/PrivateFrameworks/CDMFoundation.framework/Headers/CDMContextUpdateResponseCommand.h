// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMCONTEXTUPDATERESPONSECOMMAND_H
#define CDMCONTEXTUPDATERESPONSECOMMAND_H

@class SIRINLUEXTERNALCorrectionOutcome, SIRINLUINTERNALCONTEXTUPDATEContextUpdateResponse, SIRINLUINTERNALCONTEXTUPDATEReformedTurnInputBundle;


#import "CDMBaseCommand.h"

@interface CDMContextUpdateResponseCommand : CDMBaseCommand

@property (retain, nonatomic) SIRINLUEXTERNALCorrectionOutcome *correctionOutcome; // ivar: _correctionOutcome
@property (retain, nonatomic) SIRINLUINTERNALCONTEXTUPDATEContextUpdateResponse *ctxUpdateResponse; // ivar: _ctxUpdateResponse
@property (retain, nonatomic) SIRINLUINTERNALCONTEXTUPDATEReformedTurnInputBundle *firstReformedInput; // ivar: _firstReformedInput


-(id)initWithCtxUpdateResponse:(id)arg0 ;


@end


#endif