// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSVLYRICSTTMLPARSER_H
#define MSVLYRICSTTMLPARSER_H

@class NSString, NSMutableArray, NSInputStream, NSError, NSMutableDictionary, NSData;
@protocol NSXMLParserDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MSVLyricsTextElement.h"
#import "MSVLyricsSongInfo.h"

@interface MSVLyricsTTMLParser : NSObject <NSXMLParserDelegate>



@property (nonatomic) CGFloat currentStartTime; // ivar: _currentStartTime
@property (retain, nonatomic) MSVLyricsTextElement *currentTextElement; // ivar: _currentTextElement
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableArray *elementStack; // ivar: _elementStack
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSInputStream *inputStream; // ivar: _inputStream
@property (nonatomic) BOOL linesAreSortedByStartTime; // ivar: _linesAreSortedByStartTime
@property (retain, nonatomic) NSMutableArray *lyricLines; // ivar: _lyricLines
@property (retain, nonatomic) MSVLyricsSongInfo *lyricsInfo; // ivar: _lyricsInfo
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *parseQueue; // ivar: _parseQueue
@property (retain, nonatomic) NSError *parserError; // ivar: _parserError
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableDictionary *translationsMap; // ivar: _translationsMap
@property (retain, nonatomic) NSData *ttmlData; // ivar: _ttmlData


-(id)_parentTextElement;
-(id)_updateWords:(id)arg0 withWord:(id)arg1 parentText:(id)arg2 ;
-(id)initWithTTMLData:(id)arg0 ;
-(id)initWithTTMLStream:(id)arg0 ;
-(id)parseWithError:(*id)arg0 ;
-(void)parseWithCompletion:(id)arg0 ;
-(void)parser:(id)arg0 didEndElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 ;
-(void)parser:(id)arg0 didStartElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 attributes:(id)arg4 ;
-(void)parser:(id)arg0 foundCharacters:(id)arg1 ;
-(void)parser:(id)arg0 parseErrorOccurred:(id)arg1 ;


@end


#endif