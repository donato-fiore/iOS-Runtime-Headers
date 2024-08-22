// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UPQUERY_H
#define UPQUERY_H

@class NSDictionary, NSArray, NSString, NSUUID;
@protocol SIRINLUSystemDialogAct><NSObject;

#import <Foundation/Foundation.h>


@interface UPQuery : NSObject

@property (readonly) NSObject<SIRINLUSystemDialogAct><NSObject> *dialogAct; // ivar: _dialogAct
@property (readonly) NSDictionary *embeddingsByToken; // ivar: _embeddingsByToken
@property (readonly, copy) NSArray *spans; // ivar: _spans
@property (readonly) NSArray *tokens; // ivar: _tokens
@property (readonly, copy) NSString *utterance; // ivar: _utterance
@property (readonly, copy) NSUUID *uuid; // ivar: _uuid


+(id)tokenDescription:(id)arg0 ;
-(id)_buildEmbeddingsDictionaryWithNonWhitespaceTokens:(id)arg0 nonWhitespaceTokenIndexes:(id)arg1 embeddings:(id)arg2 error:(*id)arg3 ;
-(id)_buildTokenListWithTokenChain:(id)arg0 nonWhitespaceTokenIndexes:(id)arg1 ;
-(id)_createDialogActWithProtobufQuery:(id)arg0 ;
-(id)_getNonWhitespaceTokenIndexes:(id)arg0 ;
-(id)buildSpansListWithProtobufQuery:(id)arg0 nonWhitespaceTokenIndexes:(id)arg1 error:(*id)arg2 ;
-(id)description;
-(id)initWithProtobufQuery:(id)arg0 error:(*id)arg1 ;
-(id)initWithUtterance:(id)arg0 tokens:(id)arg1 embeddingsByToken:(id)arg2 spans:(id)arg3 dialogAct:(id)arg4 ;


@end


#endif