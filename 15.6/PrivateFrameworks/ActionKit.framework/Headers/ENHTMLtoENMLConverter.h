// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ENHTMLTOENMLCONVERTER_H
#define ENHTMLTOENMLCONVERTER_H

@class NSMutableString, NSString;
@protocol ENXMLSaxParserDelegate, ENXMLWriterDelegate, ENHTMLtoENMLConverterDelegate;

#import <Foundation/Foundation.h>

#import "ENXMLSaxParser.h"
#import "ENMLWriter.h"

@interface ENHTMLtoENMLConverter : NSObject <ENXMLSaxParserDelegate, ENXMLWriterDelegate>

 {
    ENXMLSaxParser *_htmlParser;
    ENMLWriter *_enmlWriter;
    NSMutableString *_enml;
    BOOL _inHTMLBody;
    int _skipCount;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ENHTMLtoENMLConverterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)enmlFromContentsOfHTMLFile:(id)arg0 ;
-(id)enmlFromHTMLContent:(id)arg0 ;
-(id)enmlWriter;
-(id)htmlParser;
-(void)cancel;
-(void)finish;
-(void)parser:(id)arg0 didEndElement:(id)arg1 ;
-(void)parser:(id)arg0 didFailWithError:(id)arg1 ;
-(void)parser:(id)arg0 didStartElement:(id)arg1 attributes:(id)arg2 ;
-(void)parser:(id)arg0 foundCharacters:(id)arg1 ;
-(void)parserDidEndDocument:(id)arg0 ;
-(void)parserDidStartDocument:(id)arg0 ;
-(void)writeData:(id)arg0 ;
-(void)xmlWriter:(id)arg0 didGenerateData:(id)arg1 ;
-(void)xmlWriterDidEndWritingDocument:(id)arg0 ;


@end


#endif