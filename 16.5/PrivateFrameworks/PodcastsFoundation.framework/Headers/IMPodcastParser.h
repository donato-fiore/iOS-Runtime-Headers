// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMPODCASTPARSER_H
#define IMPODCASTPARSER_H

@class NSString, NSMutableString, NSError, NSDateFormatter;
@protocol NSXMLParserDelegate;

#import <Foundation/Foundation.h>

#import "IMPodcastFeed.h"

@interface IMPodcastParser : NSObject <NSXMLParserDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableString *elementCharBuffer; // ivar: _elementCharBuffer
@property (retain, nonatomic) NSString *feedDescriptionSourceElement; // ivar: _feedDescriptionSourceElement
@property (nonatomic) NSInteger feedType; // ivar: _feedType
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL inAuthorElement; // ivar: _inAuthorElement
@property (nonatomic) BOOL inGlobalImageElement; // ivar: _inGlobalImageElement
@property (nonatomic) NSUInteger itemElementNestCount; // ivar: _itemElementNestCount
@property (retain, nonatomic) NSError *parseError; // ivar: _parseError
@property (retain, nonatomic) IMPodcastFeed *parsedFeed; // ivar: _parsedFeed
@property (nonatomic) BOOL preferredFeedCategoryFound; // ivar: _preferredFeedCategoryFound
@property (nonatomic) BOOL preferredItemCategoryFound; // ivar: _preferredItemCategoryFound
@property (retain, nonatomic) NSDateFormatter *rssDateFormatter; // ivar: _rssDateFormatter
@property (nonatomic) BOOL shouldBufferElementChars; // ivar: _shouldBufferElementChars
@property (readonly) Class superclass;


+(BOOL)isContentNamespace:(id)arg0 ;
+(BOOL)isITunesNamespace:(id)arg0 ;
-(id)dateFromAtomDateString:(id)arg0 ;
-(id)dateFromRSSDateString:(id)arg0 ;
-(id)init;
-(id)parseWithData:(id)arg0 ;
-(id)removeLastColonOfString:(id)arg0 ;
-(void)_parseEnclosureElement:(id)arg0 forFeedItem:(id)arg1 ;
-(void)atomParser:(id)arg0 didEndElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 ;
-(void)atomParser:(id)arg0 didStartElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 attributes:(id)arg4 ;
-(void)endBufferingElementChars;
-(void)parseStreamFromURL:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)parser:(id)arg0 didEndElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 ;
-(void)parser:(id)arg0 didStartElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 attributes:(id)arg4 ;
-(void)parser:(id)arg0 foundCharacters:(id)arg1 ;
-(void)parser:(id)arg0 parseErrorOccurred:(id)arg1 ;
-(void)postProcessItemElement:(id)arg0 ;
-(void)rssParser:(id)arg0 didEndElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 ;
-(void)rssParser:(id)arg0 didStartElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 attributes:(id)arg4 ;
-(void)startBufferingElementChars;


@end


#endif