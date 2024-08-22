// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDMSPANMATCHPROTORESPONSECOMMAND_H
#define CDMSPANMATCHPROTORESPONSECOMMAND_H

@class SIRINLUINTERNALSPANMATCHSpanMatchResponse;


#import "CDMBaseCommand.h"

@interface CDMSpanMatchProtoResponseCommand : CDMBaseCommand

@property (retain, nonatomic) SIRINLUINTERNALSPANMATCHSpanMatchResponse *spanMatchResponse; // ivar: _spanMatchResponse


-(id)commandName;
-(id)description;
-(id)initWithResponse:(id)arg0 ;


@end


#endif