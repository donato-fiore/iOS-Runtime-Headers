// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WKDOMDOCUMENT_H
#define WKDOMDOCUMENT_H



#import "WKDOMNode.h"
#import "WKDOMElement.h"

@interface WKDOMDocument : WKDOMNode

@property (readonly) WKDOMElement *body;


-(id)createDocumentFragmentWithMarkupString:(id)arg0 baseURL:(id)arg1 ;
-(id)createDocumentFragmentWithText:(id)arg0 ;
-(id)createElement:(id)arg0 ;
-(id)createTextNode:(id)arg0 ;
-(id)parserYieldToken;


@end


#endif