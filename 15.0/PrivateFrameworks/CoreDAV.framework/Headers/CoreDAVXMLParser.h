// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COREDAVXMLPARSER_H
#define COREDAVXMLPARSER_H

@class NSXMLParser, NSURL, NSString, NSSet, NSError;
@protocol CoreDAVResponseBodyParser;


#import "CoreDAVItem.h"
#import "CoreDAVXMLElementGenerator.h"
#import "CoreDAVErrorItem.h"

@interface CoreDAVXMLParser : NSXMLParser <CoreDAVResponseBodyParser>



@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSSet *parseHints; // ivar: _parseHints
@property (readonly) NSError *parserError;
@property (readonly, nonatomic) CoreDAVItem *rootElement;
@property (retain, nonatomic) CoreDAVXMLElementGenerator *rootElementGenerator; // ivar: _rootElementGenerator
@property (readonly, nonatomic) CoreDAVErrorItem *rootError;
@property (retain, nonatomic) CoreDAVXMLElementGenerator *rootErrorGenerator; // ivar: _rootErrorGenerator
@property (readonly) Class superclass;


+(BOOL)canHandleContentType:(id)arg0 ;
-(BOOL)processData:(id)arg0 forTask:(id)arg1 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithRootElementNameSpace:(id)arg0 name:(id)arg1 parseClass:(Class)arg2 baseURL:(id)arg3 ;


@end


#endif