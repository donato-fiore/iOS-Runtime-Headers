// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALXMLSANITIZER_H
#define CALXMLSANITIZER_H

@class NSMutableArray, NSString, NSData, NSMutableData, NSMutableDictionary, NSMutableString;
@protocol NSXMLParserDelegate;

#import <Foundation/Foundation.h>


@interface CalXMLSanitizer : NSObject <NSXMLParserDelegate>

 {
    int _nestingLevel;
    NSMutableArray *_cachedIndents;
    NSString *_textContents;
    NSData *_cdataContents;
    NSMutableData *_mutableCDATAContents;
    BOOL _currentElementStartTagNeedsClosing;
    BOOL _currentElementHasNestedTags;
    NSMutableDictionary *namespaceURIToLevelOfFirstElementInNamespace;
    NSMutableArray *elementNames;
    NSMutableArray *elementNamespaces;
    NSMutableString *_xml;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) *__sFILE output; // ivar: _output
@property (readonly, nonatomic) NSString *scrubbedXML;
@property (readonly) Class superclass;


-(id)currentRedactionRule;
-(id)getIndentation;
-(id)init;
-(void)_appendNamespaceURI:(id)arg0 forElementName:(id)arg1 qualifiedName:(id)arg2 ;
-(void)flushContents;
-(void)parser:(id)arg0 didEndElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 ;
-(void)parser:(id)arg0 didStartElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 attributes:(id)arg4 ;
-(void)parser:(id)arg0 foundCDATA:(id)arg1 ;
-(void)parser:(id)arg0 foundCharacters:(id)arg1 ;
-(void)parser:(id)arg0 foundComment:(id)arg1 ;
-(void)parser:(id)arg0 parseErrorOccurred:(id)arg1 ;


@end


#endif