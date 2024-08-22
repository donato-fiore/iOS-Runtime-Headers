// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMXMLREPARSER_H
#define IMXMLREPARSER_H

@class NSXMLParser, NSMutableString, NSError, NSString;
@protocol NSXMLParserDelegate;

#import <Foundation/Foundation.h>

#import "IMXMLReparserContext.h"

@interface IMXMLReparser : NSObject <NSXMLParserDelegate>

 {
    NSXMLParser *_parser;
    NSMutableString *_output;
    IMXMLReparserContext *_context;
    NSError *_error;
    NSUInteger _depth;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)parseWithContext:(id)arg0 ;
-(void)parser:(id)arg0 didEndElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 ;
-(void)parser:(id)arg0 didStartElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 attributes:(id)arg4 ;
-(void)parser:(id)arg0 foundCharacters:(id)arg1 ;
-(void)parser:(id)arg0 parseErrorOccurred:(id)arg1 ;


@end


#endif