// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMEMBEDDINGGRAPHRESPONSECOMMAND_H
#define CDMEMBEDDINGGRAPHRESPONSECOMMAND_H



#import "CDMServiceGraphCommand.h"
#import "CDMEmbeddingProtoResponseCommand.h"

@interface CDMEmbeddingGraphResponseCommand : CDMServiceGraphCommand

@property (readonly, nonatomic) CDMEmbeddingProtoResponseCommand *embeddingProtoResponseCommand; // ivar: _embeddingProtoResponseCommand


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEmbeddingProtoResponseCommand:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif