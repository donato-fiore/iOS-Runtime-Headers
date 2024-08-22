// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ENMLUTILITY_H
#define ENMLUTILITY_H

@class NSString, NSMutableString, NSArray, NSXMLParser;
@protocol NSXMLParserDelegate;

#import <Foundation/Foundation.h>

#import "KSHTMLWriter.h"

@interface ENMLUtility : NSObject <NSXMLParserDelegate>



@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) KSHTMLWriter *htmlWriter; // ivar: _htmlWriter
@property (retain, nonatomic) NSMutableString *outputHTML; // ivar: _outputHTML
@property (retain, nonatomic) NSArray *resources; // ivar: _resources
@property (nonatomic) BOOL shouldIgnoreNextEndElement; // ivar: _shouldIgnoreNextEndElement
@property (nonatomic) BOOL shouldInlineResources; // ivar: _shouldInlineResources
@property (readonly) Class superclass;
@property (retain, nonatomic) NSXMLParser *xmlParser; // ivar: _xmlParser


+(id)mediaTagWithDataHash:(id)arg0 mime:(id)arg1 ;
-(void)convertENMLToHTML:(id)arg0 completionBlock:(id)arg1 ;
-(void)convertENMLToHTML:(id)arg0 withInlinedResources:(id)arg1 completionBlock:(id)arg2 ;
-(void)convertENMLToHTML:(id)arg0 withReferencedResources:(id)arg1 completionBlock:(id)arg2 ;
-(void)convertENMLToHTML:(id)arg0 withResources:(id)arg1 inlineResources:(BOOL)arg2 completionBlock:(id)arg3 ;
-(void)generateHTMLFromENML:(id)arg0 completion:(id)arg1 ;
-(void)generateHTMLFromENML:(id)arg0 inlinedResources:(id)arg1 completion:(id)arg2 ;
-(void)generateHTMLFromENML:(id)arg0 referencedResources:(id)arg1 completion:(id)arg2 ;
-(void)parser:(id)arg0 didEndElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 ;
-(void)parser:(id)arg0 didStartElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 attributes:(id)arg4 ;
-(void)parser:(id)arg0 foundCDATA:(id)arg1 ;
-(void)parser:(id)arg0 foundCharacters:(id)arg1 ;
-(void)parser:(id)arg0 foundComment:(id)arg1 ;
-(void)parser:(id)arg0 parseErrorOccurred:(id)arg1 ;
-(void)parserDidEndDocument:(id)arg0 ;
-(void)writeImageTagForResource:(id)arg0 withAttributes:(id)arg1 ;
-(void)writeResource:(id)arg0 withAttributes:(id)arg1 ;
-(void)writeTodoWithAttributes:(id)arg0 ;


@end


#endif