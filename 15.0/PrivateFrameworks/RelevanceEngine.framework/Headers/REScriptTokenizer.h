// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RESCRIPTTOKENIZER_H
#define RESCRIPTTOKENIZER_H

@class NSString;
@protocol RETokenBuffer, REScriptBuffer, REScriptTokenizerDelegate;

#import <Foundation/Foundation.h>

#import "REScriptToken.h"

@interface REScriptTokenizer : NSObject <RETokenBuffer>

 {
    id<REScriptBuffer> *_buffer;
    REScriptToken *_currentToken;
    NSUInteger _line;
    NSUInteger _column;
}


@property (readonly, nonatomic) REScriptToken *currentToken;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<REScriptTokenizerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_hasChar;
-(BOOL)_matchTokenStart:(*unk)arg0 body:(*unk)arg1 value:(*id)arg2 ;
-(id)_readMultilineComment;
-(id)_readSingleComment;
-(id)_readString;
-(id)initWithScriptBuffer:(id)arg0 ;
-(unsigned short)_peekChar;
-(void)_consumeWhitespace;
-(void)_popChar;
-(void)_validateToken;
-(void)next;


@end


#endif