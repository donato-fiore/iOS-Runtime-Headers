// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMSPANMATCHPROTORESPONSECOMMAND_H
#define CDMSPANMATCHPROTORESPONSECOMMAND_H

@class NSArray, SIRINLUINTERNALSPANMATCHSpanMatchResponse;


#import "CDMBaseCommand.h"

@interface CDMSpanMatchProtoResponseCommand : CDMBaseCommand

@property (readonly, nonatomic) NSArray *matchingSpansForExternalParsers; // ivar: _matchingSpansForExternalParsers
@property (readonly, nonatomic) NSArray *matchingSpansForNL; // ivar: _matchingSpansForNL
@property (retain, nonatomic) SIRINLUINTERNALSPANMATCHSpanMatchResponse *spanMatchResponse; // ivar: _spanMatchResponse


-(id)description;
-(id)initWithResponse:(id)arg0 ;


@end


#endif