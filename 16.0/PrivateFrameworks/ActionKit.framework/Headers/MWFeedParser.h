// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MWFEEDPARSER_H
#define MWFEEDPARSER_H

@class NSDateFormatter, NSDictionary, NSString, NSMutableString, NSXMLParser, NSURLRequest, NSURL, NSURLSessionDataTask;
@protocol NSXMLParserDelegate, MWFeedParserDelegate;

#import <Foundation/Foundation.h>

#import "MWFeedInfo.h"
#import "MWFeedItem.h"

@interface MWFeedParser : NSObject <NSXMLParserDelegate>

 {
    int feedType;
    NSDateFormatter *dateFormatterRFC822;
    NSDateFormatter *dateFormatterRFC3339;
    BOOL aborted;
    BOOL parsingComplete;
    BOOL hasEncounteredItems;
    BOOL parseStructureAsContent;
}


@property (retain, nonatomic) NSDictionary *currentElementAttributes; // ivar: currentElementAttributes
@property (retain, nonatomic) NSString *currentPath; // ivar: currentPath
@property (retain, nonatomic) NSMutableString *currentText; // ivar: currentText
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MWFeedParserDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=didFail) BOOL failed; // ivar: failed
@property (nonatomic) int feedParseType; // ivar: feedParseType
@property (retain, nonatomic) NSXMLParser *feedParser; // ivar: feedParser
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MWFeedInfo *info; // ivar: info
@property (retain, nonatomic) MWFeedItem *item; // ivar: item
@property (readonly, nonatomic, getter=isParsing) BOOL parsing; // ivar: parsing
@property (copy, nonatomic) NSString *pathOfElementWithXHTMLType; // ivar: pathOfElementWithXHTMLType
@property (retain, nonatomic) NSURLRequest *request; // ivar: request
@property (readonly, nonatomic, getter=isStopped) BOOL stopped; // ivar: stopped
@property (readonly) Class superclass;
@property (copy, nonatomic) NSURL *url; // ivar: url
@property (retain, nonatomic) NSURLSessionDataTask *urlTask; // ivar: urlTask


-(BOOL)createEnclosureFromAttributes:(id)arg0 andAddToItem:(id)arg1 ;
-(BOOL)parse;
-(BOOL)processAtomLink:(id)arg0 andAddToMWObject:(id)arg1 ;
-(id)init;
-(id)initWithFeedRequest:(id)arg0 ;
-(id)initWithFeedURL:(id)arg0 ;
-(void)abortParsingEarly;
-(void)dispatchFeedInfoToDelegate;
-(void)dispatchFeedItemToDelegate;
-(void)parser:(id)arg0 didEndElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 ;
-(void)parser:(id)arg0 didStartElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 attributes:(id)arg4 ;
-(void)parser:(id)arg0 foundCDATA:(id)arg1 ;
-(void)parser:(id)arg0 foundCharacters:(id)arg1 ;
-(void)parser:(id)arg0 parseErrorOccurred:(id)arg1 ;
-(void)parser:(id)arg0 validationErrorOccurred:(id)arg1 ;
-(void)parserDidEndDocument:(id)arg0 ;
-(void)parserDidStartDocument:(id)arg0 ;
-(void)parsingFailedWithErrorCode:(int)arg0 andDescription:(id)arg1 ;
-(void)parsingFinished;
-(void)reset;
-(void)startParsingData:(id)arg0 textEncodingName:(id)arg1 ;
-(void)stopParsing;


@end


#endif