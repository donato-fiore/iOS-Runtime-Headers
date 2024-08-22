// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMUAAPNLREQUESTCOMMAND_H
#define CDMUAAPNLREQUESTCOMMAND_H

@class NSArray, NSString;
@protocol SIRINLUSystemDialogAct;


#import "CDMBaseCommand.h"
#import "NLv4EmbeddingTensor.h"
#import "CDMTokenChain.h"

@interface CDMUaaPNLRequestCommand : CDMBaseCommand

@property (readonly, nonatomic) NLv4EmbeddingTensor *embeddingTensor; // ivar: _embeddingTensor
@property (retain, nonatomic) NSObject<SIRINLUSystemDialogAct> *lastSystemDialogActOrNil; // ivar: _lastSystemDialogActOrNil
@property (retain, nonatomic) NSArray *matchingSpans; // ivar: _matchingSpans
@property (retain, nonatomic) NSString *requestId; // ivar: _requestId
@property (readonly, nonatomic) CDMTokenChain *tokenChain; // ivar: _tokenChain


-(id)commandName;
-(id)initWithTokenChain:(id)arg0 embeddingTensor:(id)arg1 matchingSpans:(id)arg2 requestId:(id)arg3 lastSystemDialogAct:(id)arg4 ;


@end


#endif