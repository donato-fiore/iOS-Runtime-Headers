// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMEMBEDDINGPROTORESPONSECOMMAND_H
#define CDMEMBEDDINGPROTORESPONSECOMMAND_H

@class SIRINLUINTERNALEMBEDDINGEmbeddingResponse;
@protocol NSSecureCoding;


#import "CDMBaseCommand.h"
#import "CDMEmbeddingConfigs.h"

@interface CDMEmbeddingProtoResponseCommand : CDMBaseCommand <NSSecureCoding>



@property (readonly, nonatomic) CDMEmbeddingConfigs *embeddingConfigs; // ivar: _embeddingConfigs
@property (retain, nonatomic) SIRINLUINTERNALEMBEDDINGEmbeddingResponse *response; // ivar: _response


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResponse:(id)arg0 embeddingConfigs:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif