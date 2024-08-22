// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ECMESSAGEBODYPARSER_H
#define ECMESSAGEBODYPARSER_H

@class NSMutableArray, NSError;


#import "ECMessageBodyParserObject.h"

@interface ECMessageBodyParser : ECMessageBodyParserObject {
    NSMutableArray *_subparsers;
    NSMutableArray *_elementPool;
    NSMutableArray *_paragraphNodes;
    id *_foundMessageBodyElementBlock;
    NSError *_parserError;
    *__CFArray _nodesStackCache;
    *__CFDictionary _nodesLevelCache;
    *__CFDictionary _nodesQuoteLevelCache;
}


@property (nonatomic) NSUInteger options; // ivar: _options
@property (readonly, nonatomic) NSError *parserError;


+(BOOL)cacheRetainsNodes;
+(BOOL)isLinebreakImpliedAfterTagName:(id)arg0 ;
+(BOOL)isLinebreakImpliedBeforeTagName:(id)arg0 ;
-(BOOL)isLandmarkTagName:(id)arg0 ;
-(BOOL)parse;
-(BOOL)shouldIgnoreTagWithTagName:(id)arg0 ;
-(BOOL)shouldProceedParsing;
-(Class)messageBodyElementClass;
-(Class)messageBodyStringAccumulatorClass;
-(NSUInteger)messageBodyStringAccumulatorDefaultOptions;
-(NSUInteger)quoteLevelForBodyNode:(id)arg0 ;
-(id)getAvailableMessageBodyElement;
-(id)init;
-(id)newStringAccumulatorWithOptions:(NSUInteger)arg0 lengthLimit:(NSUInteger)arg1 ;
-(void)addSubparser:(id)arg0 ;
-(void)dealloc;
-(void)didFindBodyElement:(id)arg0 ;
-(void)didFindError:(id)arg0 ;
-(void)didFinishParsing;
-(void)enqueueParagraphNode:(id)arg0 withTagName:(id)arg1 ;
-(void)flushParagraphNodes;
-(void)getLevel:(*NSInteger)arg0 quoteLevel:(*NSInteger)arg1 forBodyNode:(id)arg2 ;
-(void)removeSubparser:(id)arg0 ;
-(void)setFoundMessageBodyElementBlock:(id)arg0 ;
-(void)willBeginParsing;


@end


#endif