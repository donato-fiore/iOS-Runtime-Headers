// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDMEMBEDDINGREQUESTCOMMAND_H
#define CDMEMBEDDINGREQUESTCOMMAND_H

@class NSString;


#import "CDMBaseCommand.h"
#import "CDMTokenChain.h"

@interface CDMEmbeddingRequestCommand : CDMBaseCommand

@property (readonly, nonatomic) NSString *text; // ivar: _text
@property (readonly, nonatomic) CDMTokenChain *tokenChain; // ivar: _tokenChain


-(id)commandName;
-(id)initWithTokenChain:(id)arg0 text:(id)arg1 ;


@end


#endif