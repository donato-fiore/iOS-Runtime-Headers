// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COREDAVXMLELEMENTGENERATOR_H
#define COREDAVXMLELEMENTGENERATOR_H

@class NSURL, NSMutableData, NSDictionary, NSString;
@protocol NSXMLParserDelegate;

#import <Foundation/Foundation.h>

#import "CoreDAVItem.h"
#import "CoreDAVXMLElementGenerator.h"

@interface CoreDAVXMLElementGenerator : NSObject <NSXMLParserDelegate>

 {
    CoreDAVItem *_parentElement;
}


@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (retain, nonatomic) NSMutableData *cDATA; // ivar: _cDATA
@property (retain, nonatomic) NSDictionary *cachedElementParseRules; // ivar: _cachedElementParseRules
@property (retain, nonatomic) NSMutableData *characters; // ivar: _characters
@property (nonatomic) BOOL checkedElementValidityIfRootElement; // ivar: _checkedElementValidityIfRootElement
@property (retain, nonatomic) CoreDAVXMLElementGenerator *currentlyParsingSubItem; // ivar: _currentlyParsingSubItem
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CoreDAVItem *element; // ivar: _element
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isUnrecognized; // ivar: _isUnrecognized
@property (nonatomic) SEL parentElementSetter; // ivar: _parentElementSetter
@property (weak, nonatomic) CoreDAVXMLElementGenerator *parentGenerator; // ivar: _parentGenerator
@property (nonatomic) int parsingState; // ivar: _parsingState
@property (readonly) Class superclass;


-(BOOL)isExpectedNameSpace:(id)arg0 andElementName:(id)arg1 ;
-(BOOL)tracksRootElement;
-(id)initWithParser:(id)arg0 baseURL:(id)arg1 rootElementNameSpace:(id)arg2 elementName:(id)arg3 parseClass:(Class)arg4 ;
-(id)initWithParser:(id)arg0 parentGenerator:(id)arg1 parentElementSetter:(SEL)arg2 element:(id)arg3 ;
-(void)noteChildCascadingFailure;
-(void)notifyElement:(id)arg0 ofAttributesFound:(id)arg1 ;
-(void)parser:(id)arg0 didEndElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 ;
-(void)parser:(id)arg0 didStartElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 attributes:(id)arg4 ;
-(void)parser:(id)arg0 foundCDATA:(id)arg1 ;
-(void)parser:(id)arg0 foundCharacters:(id)arg1 ;
-(void)parser:(id)arg0 parseErrorOccurred:(id)arg1 ;
-(void)parser:(id)arg0 validationErrorOccurred:(id)arg1 ;
-(void)parserDidEndDocument:(id)arg0 ;
-(void)resumeParsingWithParser:(id)arg0 ;


@end


#endif