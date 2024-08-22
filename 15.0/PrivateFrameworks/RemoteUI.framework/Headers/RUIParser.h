// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RUIPARSER_H
#define RUIPARSER_H

@class NSMutableString, NSDictionary, NSXMLParser, NSMutableArray, NSURL, NSString, NSError, NSData;
@protocol NSXMLParserDelegate, RUIParserDelegate;

#import <Foundation/Foundation.h>

#import "RUIAlertView.h"
#import "RUIObjectModel.h"
#import "RUIActionSignal.h"

@interface RUIParser : NSObject <NSXMLParserDelegate>

 {
    NSMutableString *_accumulator;
    NSDictionary *_currentElementAttributes;
    RUIAlertView *_currentAlert;
    NSXMLParser *_parser;
    RUIObjectModel *_uiObjectModel;
    NSMutableArray *_pages;
    NSMutableArray *_currentPageStack;
    RUIActionSignal *_actionSignal;
    int _parserState;
    NSMutableArray *_elementStack;
    BOOL _foundXMLUI;
}


@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<RUIParserDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL succeeded; // ivar: _succeeded
@property (readonly) Class superclass;
@property (retain, nonatomic) NSData *xmlData; // ivar: _xmlData


+(NSInteger)textAlignmentForString:(id)arg0 ;
+(id)rowWithAttributeDict:(id)arg0 delegate:(id)arg1 parent:(id)arg2 ;
+(id)tableRowClassForElementName:(id)arg0 ;
+(id)textStyleForString:(id)arg0 ;
-(id)_createAndAddPageWithAttributes:(id)arg0 ;
-(id)_createPageWithName:(id)arg0 attributes:(id)arg1 ;
-(id)_lastPageCreateIfNeeded;
-(id)_lastRow;
-(id)_newRowWithAttributeDict:(id)arg0 ;
-(id)actionSignal;
-(id)initWithXML:(id)arg0 ;
-(id)initWithXML:(id)arg0 baseURL:(id)arg1 delegate:(id)arg2 ;
-(id)initWithXML:(id)arg0 baseURL:(id)arg1 style:(id)arg2 delegate:(id)arg3 ;
-(id)uiObjectModel;
-(void)_addNavigationBarWithAttributes:(id)arg0 ;
-(void)_addSectionWithAttributes:(id)arg0 ;
-(void)_finalizeElement:(id)arg0 ;
-(void)_finalizePinView;
-(void)_finalizeSection;
-(void)_logDeprecation:(id)arg0 value:(id)arg1 ;
-(void)_validateDocumentContent;
-(void)dealloc;
-(void)parser:(id)arg0 didEndElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 ;
-(void)parser:(id)arg0 didStartElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 attributes:(id)arg4 ;
-(void)parser:(id)arg0 foundCDATA:(id)arg1 ;
-(void)parser:(id)arg0 foundCharacters:(id)arg1 ;
-(void)parser:(id)arg0 parseErrorOccurred:(id)arg1 ;
-(void)parser:(id)arg0 validationErrorOccurred:(id)arg1 ;


@end


#endif