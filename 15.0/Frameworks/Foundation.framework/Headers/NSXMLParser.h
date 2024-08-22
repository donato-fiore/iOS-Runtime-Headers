// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSXMLPARSER_H
#define NSXMLPARSER_H

@class NSMutableArray, NSData, NSSet, NSURL;
@protocol NSXMLParserDelegate;

#import <Foundation/Foundation.h>

#import "NSError.h"

@interface NSXMLParser : NSObject {
    id *_reserved0;
    id *_delegate;
    id *_reserved1;
    id *_reserved2;
    id *_reserved3;
    *_xmlSAXHandler _saxHandler;
    ? _parserContext;
    NSUInteger _parserFlags;
    NSError *_error;
    NSMutableArray *_namespaces;
    *__CFDictionary _slowStringMap;
    BOOL _delegateAborted;
    BOOL _haveDetectedEncoding;
    NSData *_bomChunk;
    NSUInteger _chunkSize;
    NSSet *_allowedEntityURLs;
    NSURL *_url;
    NSUInteger _externalEntityResolvingPolicy;
}


@property (copy) NSSet *allowedExternalEntityURLs;
@property NSObject<NSXMLParserDelegate> *delegate;
@property NSUInteger externalEntityResolvingPolicy;
@property (readonly, copy) NSError *parserError;
@property BOOL shouldProcessNamespaces;
@property BOOL shouldReportNamespacePrefixes;
@property BOOL shouldResolveExternalEntities;


+(id)currentParser;
+(void)setCurrentParser:(id)arg0 ;
-(BOOL)_handleParseResult:(NSInteger)arg0 ;
-(BOOL)finishIncrementalParse;
-(BOOL)parse;
-(BOOL)parseData:(id)arg0 ;
-(BOOL)parseFromStream;
-(BOOL)shouldContinueAfterFatalError;
-(NSInteger)columnNumber;
-(NSInteger)lineNumber;
-(id)initForIncrementalParsing;
-(id)initWithContentsOfURL:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithStream:(id)arg0 ;
-(id)publicID;
-(id)systemID;
-(struct _xmlParserInput *)_xmlExternalEntityWithURL:(char *)arg0 identifier:(char *)arg1 context:(struct _xmlParserCtxt *)arg2 originalLoaderFunction:(*unk)arg3 ;
-(void)_initializeSAX2Callbacks;
-(void)_popNamespaces;
-(void)_pushNamespaces:(id)arg0 ;
-(void)_setExpandedParserError:(id)arg0 ;
-(void)abortParsing;
-(void)dealloc;
-(void)setShouldContinueAfterFatalError:(BOOL)arg0 ;


@end


#endif