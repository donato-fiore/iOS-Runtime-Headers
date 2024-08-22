// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RESCRIPTPROCESSOR_H
#define RESCRIPTPROCESSOR_H

@class NSString;
@protocol REScriptTokenizerDelegate, REScriptParserDelegate, REScriptBuffer, REBacktrackingTokenBuffer;

#import <Foundation/Foundation.h>

#import "REScriptTokenizer.h"
#import "REScriptParser.h"
#import "REScriptSymbolTable.h"

@interface REScriptProcessor : NSObject <REScriptTokenizerDelegate, REScriptParserDelegate>

 {
    NSString *_path;
    id<REScriptBuffer> *_buffer;
    REScriptTokenizer *_tokenizer;
    id<REBacktrackingTokenBuffer> *_tokenStack;
    REScriptParser *_parser;
    REScriptSymbolTable *_table;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_sharedSystemTable;
+(id)processorWithPath:(id)arg0 ;
+(id)processorWithSource:(id)arg0 ;
-(id)features;
-(id)featuresWithNames:(id)arg0 ;
-(id)initWithScriptBuffer:(id)arg0 path:(id)arg1 ;
-(id)rules;
-(id)rulesWithNames:(id)arg0 ;
-(void)_encounteredError:(id)arg0 ;
-(void)_process;
-(void)parser:(id)arg0 didEncouterParserError:(id)arg1 ;
-(void)tokenizer:(id)arg0 didEncouterTokenError:(id)arg1 ;


@end


#endif