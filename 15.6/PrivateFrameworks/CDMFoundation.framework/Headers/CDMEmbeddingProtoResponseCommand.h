// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDMEMBEDDINGPROTORESPONSECOMMAND_H
#define CDMEMBEDDINGPROTORESPONSECOMMAND_H

@class SIRINLUINTERNALEMBEDDINGEmbeddingResponse;


#import "CDMBaseCommand.h"

@interface CDMEmbeddingProtoResponseCommand : CDMBaseCommand

@property (retain, nonatomic) SIRINLUINTERNALEMBEDDINGEmbeddingResponse *response; // ivar: _response


-(id)commandName;
-(id)initWithResponse:(id)arg0 ;


@end


#endif