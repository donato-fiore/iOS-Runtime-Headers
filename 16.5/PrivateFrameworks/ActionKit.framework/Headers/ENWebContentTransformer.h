// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ENWEBCONTENTTRANSFORMER_H
#define ENWEBCONTENTTRANSFORMER_H

@class NSValueTransformer, NSURL, NSString, NSArray;
@protocol ENXMLSaxParserDelegate;


#import "ENXMLDTD.h"
#import "ENMLWriter.h"
#import "ENXMLSaxParser.h"
#import "ENNote.h"
#import "ENWebArchive.h"

@interface ENWebContentTransformer : NSValueTransformer <ENXMLSaxParserDelegate>



@property (retain, nonatomic) NSURL *archiveBaseURL; // ivar: _archiveBaseURL
@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) ENXMLDTD *enmlDTD; // ivar: _enmlDTD
@property (retain, nonatomic) ENMLWriter *enmlWriter; // ivar: _enmlWriter
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) ENXMLSaxParser *htmlParser; // ivar: _htmlParser
@property (retain, nonatomic) NSArray *ignorableAttributes; // ivar: _ignorableAttributes
@property (retain, nonatomic) NSArray *ignorableTags; // ivar: _ignorableTags
@property (nonatomic) NSUInteger ignoreElementCount; // ivar: _ignoreElementCount
@property (nonatomic) BOOL inTitleElement; // ivar: _inTitleElement
@property (retain, nonatomic) NSArray *inlineElements; // ivar: _inlineElements
@property (retain, nonatomic) NSString *mimeType; // ivar: _mimeType
@property (retain, nonatomic) ENNote *note; // ivar: _note
@property (retain, nonatomic) NSArray *skipTags; // ivar: _skipTags
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) ENWebArchive *webArchive; // ivar: _webArchive


+(BOOL)allowsReverseTransformation;
+(Class)transformedValueClass;
-(id)archiveBaseURLFromURL:(id)arg0 ;
-(id)filenameFromURL:(id)arg0 ;
-(id)htmlFromWebArchive:(id)arg0 ;
-(id)init;
-(id)mimeTypeFromFilename:(id)arg0 ;
-(id)resourceFromWebResource:(id)arg0 ;
-(id)sanitizeURLAttribute:(id)arg0 ;
-(id)transformedValue:(id)arg0 ;
-(void)parser:(id)arg0 didEndElement:(id)arg1 ;
-(void)parser:(id)arg0 didFailWithError:(id)arg1 ;
-(void)parser:(id)arg0 didStartElement:(id)arg1 attributes:(id)arg2 ;
-(void)parser:(id)arg0 foundCharacters:(id)arg1 ;


@end


#endif