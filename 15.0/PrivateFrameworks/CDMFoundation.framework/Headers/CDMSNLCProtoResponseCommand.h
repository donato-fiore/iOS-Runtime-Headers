// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMSNLCPROTORESPONSECOMMAND_H
#define CDMSNLCPROTORESPONSECOMMAND_H

@class NSArray, SIRINLUINTERNALSNLCSNLCParserResponse;


#import "CDMBaseCommand.h"

@interface CDMSNLCProtoResponseCommand : CDMBaseCommand

@property int classLabel; // ivar: _classLabel
@property (readonly, nonatomic) NSArray *snlcParses; // ivar: _snlcParses
@property (readonly, nonatomic) SIRINLUINTERNALSNLCSNLCParserResponse *snlcResponse; // ivar: _snlcResponse


-(id)commandName;
-(id)initWithClassLabel:(int)arg0 snlcParses:(id)arg1 snlcResponse:(id)arg2 ;


@end


#endif