// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMXMLPARSER_H
#define IMXMLPARSER_H

@class NSXMLParser, NSMutableArray, NSString;
@protocol NSXMLParserDelegate;

#import <Foundation/Foundation.h>

#import "IMXMLParserContext.h"
#import "IMXMLParserFrame.h"

@interface IMXMLParser : NSObject <NSXMLParserDelegate>

 {
    NSXMLParser *_parser;
    IMXMLParserContext *_context;
    IMXMLParserFrame *_topFrame;
    NSMutableArray *_otherFrames;
    *_TidyDoc _tidyDoc;
    *__CFDictionary _framespace;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)parseContext:(id)arg0 ;
-(id)_newDataByTidyingData:(id)arg0 ;
-(void)_setupTidy;
-(void)_teardownTidy;
-(void)invokedTidyAndSucceeded:(BOOL)arg0 ;
-(void)parser:(id)arg0 didEndElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 ;
-(void)parser:(id)arg0 didStartElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 attributes:(id)arg4 ;
-(void)parser:(id)arg0 foundCharacters:(id)arg1 ;
-(void)parser:(id)arg0 foundIgnorableWhitespace:(id)arg1 ;
-(void)parser:(id)arg0 parseErrorOccurred:(id)arg1 ;


@end


#endif