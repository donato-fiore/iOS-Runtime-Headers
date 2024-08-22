// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMCATIREQUESTCOMMAND_H
#define CDMCATIREQUESTCOMMAND_H

@class SIRINLURequest;


#import "CDMBaseCommand.h"
#import "NLv4EmbeddingTensor.h"

@interface CDMCATIRequestCommand : CDMBaseCommand

@property (readonly, nonatomic) NLv4EmbeddingTensor *embeddingTensor; // ivar: _embeddingTensor
@property (readonly, nonatomic) SIRINLURequest *nluRequest; // ivar: _nluRequest


-(id)commandName;
-(id)initWithEmbedding:(id)arg0 nluRequest:(id)arg1 ;


@end


#endif