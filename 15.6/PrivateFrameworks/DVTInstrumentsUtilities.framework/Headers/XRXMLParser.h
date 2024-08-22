// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef XRXMLPARSER_H
#define XRXMLPARSER_H

@class NSXMLParser, NSString;
@protocol NSXMLParserDelegate, XRXMLParserDelegate, XRIssueResponder;

#import <Foundation/Foundation.h>

#import "XRXMLElementParser.h"

@interface XRXMLParser : NSObject <NSXMLParserDelegate>

 {
    NSXMLParser *_parser;
    XRXMLElementParser *_workingElement;
    XRXMLElementParser *_topLevelElementParser;
    BOOL _delegateWantsFinishedCB;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<XRXMLParserDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<XRIssueResponder> *issueResponder; // ivar: _issueResponder
@property (readonly) Class superclass;


+(BOOL)parseStream:(id)arg0 topLevelParser:(id)arg1 delegate:(id)arg2 ;
+(id)commonXMLSchemaRepositoryURL;
-(BOOL)parseData:(id)arg0 ;
-(id)init;
-(id)initWithTopLevelParser:(id)arg0 ;
-(void)finishedParsing;
-(void)parser:(id)arg0 didEndElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 ;
-(void)parser:(id)arg0 didStartElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 attributes:(id)arg4 ;
-(void)parser:(id)arg0 foundCharacters:(id)arg1 ;
-(void)parser:(id)arg0 parseErrorOccurred:(id)arg1 ;


@end


#endif