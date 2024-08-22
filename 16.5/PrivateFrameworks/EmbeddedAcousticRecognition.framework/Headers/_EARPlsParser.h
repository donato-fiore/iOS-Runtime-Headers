// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EARPLSPARSER_H
#define _EARPLSPARSER_H

@class NSString, NSMutableSet, NSXMLParser, NSMutableString, NSMutableDictionary;
@protocol NSXMLParserDelegate;

#import <Foundation/Foundation.h>


@interface _EARPlsParser : NSObject <NSXMLParserDelegate>

 {
    NSString *_currentGrapheme;
    NSMutableSet *_currentPhonemes;
    NSXMLParser *_parser;
    NSMutableString *_elementValue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableDictionary *lexemes; // ivar: _lexemes
@property (readonly) Class superclass;


-(id)initWithData:(id)arg0 ;
-(id)initWithFilePath:(id)arg0 ;
-(void)parser:(id)arg0 didEndElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 ;
-(void)parser:(id)arg0 didStartElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 attributes:(id)arg4 ;
-(void)parser:(id)arg0 foundCharacters:(id)arg1 ;


@end


#endif