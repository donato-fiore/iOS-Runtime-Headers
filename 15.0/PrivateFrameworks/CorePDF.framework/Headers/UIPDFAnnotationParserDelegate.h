// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIPDFANNOTATIONPARSERDELEGATE_H
#define UIPDFANNOTATIONPARSERDELEGATE_H

@class NSMutableString, NSString;
@protocol NSXMLParserDelegate;

#import <Foundation/Foundation.h>

#import "UIPDFAnnotation.h"

@interface UIPDFAnnotationParserDelegate : NSObject <NSXMLParserDelegate>

 {
    NSMutableString *_characters;
}


@property (retain, nonatomic) UIPDFAnnotation *annotation; // ivar: _annotation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL parseError; // ivar: _parseError
@property (readonly) Class superclass;


-(id)init;
-(void)dealloc;
-(void)parser:(id)arg0 didEndElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 ;
-(void)parser:(id)arg0 didStartElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 attributes:(id)arg4 ;
-(void)parser:(id)arg0 foundCharacters:(id)arg1 ;
-(void)parser:(id)arg0 parseErrorOccurred:(id)arg1 ;
-(void)parserDidStartDocument:(id)arg0 ;


@end


#endif