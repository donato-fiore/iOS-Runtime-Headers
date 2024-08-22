// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDMEMBEDDINGPROTORESPONSECOMMAND_H
#define CDMEMBEDDINGPROTORESPONSECOMMAND_H

@class SIRINLUINTERNALEMBEDDINGEmbeddingResponse;


#import "CDMBaseCommand.h"

@interface CDMEmbeddingProtoResponseCommand : CDMBaseCommand

@property (retain, nonatomic) SIRINLUINTERNALEMBEDDINGEmbeddingResponse *response; // ivar: _response


-(id)commandName;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithResponse:(id)arg0 ;


@end


#endif