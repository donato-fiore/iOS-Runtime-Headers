// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPPDFANNOTATIONPARSERDELEGATE_H
#define CPPDFANNOTATIONPARSERDELEGATE_H

@class NSMutableString, NSString;
@protocol NSXMLParserDelegate;

#import <Foundation/Foundation.h>


@interface CPPDFAnnotationParserDelegate : NSObject <NSXMLParserDelegate>

 {
    NSMutableString *_characters;
    CGPoint _p;
    *__CFArray _quadPoints;
    CGRect _rect;
}


@property (nonatomic) *__CFDictionary annotationDictionary; // ivar: _annotationDictionary
@property (readonly, nonatomic) *__CFString annotationId; // ivar: _id
@property (readonly, nonatomic) *CGColor color; // ivar: _color
@property (readonly, nonatomic) *__CFString content; // ivar: _content
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *__CFString otherId; // ivar: _otherId
@property (readonly, nonatomic) BOOL parseError; // ivar: _parseError
@property (readonly, nonatomic) CGRect rect;
@property (readonly) Class superclass;


-(id)init;
-(void)addQuadpoints;
-(void)dealloc;
-(void)parser:(id)arg0 didEndElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 ;
-(void)parser:(id)arg0 didStartElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 attributes:(id)arg4 ;
-(void)parser:(id)arg0 foundCharacters:(id)arg1 ;
-(void)parser:(id)arg0 parseErrorOccurred:(id)arg1 ;
-(void)parserDidStartDocument:(id)arg0 ;


@end


#endif