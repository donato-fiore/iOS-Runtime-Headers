// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICEVERNOTECONTENTPARSER_H
#define ICEVERNOTECONTENTPARSER_H

@class NSMutableString, NSString, NSXMLParser;
@protocol NSXMLParserDelegate;

#import <Foundation/Foundation.h>


@interface ICEvernoteContentParser : NSObject <NSXMLParserDelegate>



@property (retain, nonatomic) NSMutableString *bufferString; // ivar: _bufferString
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableString *htmlString; // ivar: _htmlString
@property (retain, nonatomic) NSXMLParser *parser; // ivar: _parser
@property (nonatomic) NSUInteger parserType; // ivar: _parserType
@property (nonatomic) BOOL shouldAppendCharactersToBuffer; // ivar: _shouldAppendCharactersToBuffer
@property (readonly) Class superclass;


-(BOOL)shouldSelfCloseTagForStartElementName:(id)arg0 ;
-(id)htmlStringFromEvernoteContentString:(id)arg0 ;
-(id)stringFromAttributes:(id)arg0 ;
-(id)titleFromHTMLString:(id)arg0 ;
-(void)parseContentString:(id)arg0 ;
-(void)parser:(id)arg0 didEndElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 ;
-(void)parser:(id)arg0 didStartElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 attributes:(id)arg4 ;
-(void)parser:(id)arg0 foundCharacters:(id)arg1 ;
-(void)teardownParser;


@end


#endif