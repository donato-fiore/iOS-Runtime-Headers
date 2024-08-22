// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFHTMLTOMARKDOWN_H
#define WFHTMLTOMARKDOWN_H

@class NSMutableArray, NSString, NSMutableOrderedSet, NSURL, NSDictionary;
@protocol WFPythonHTMLParserDelegate;

#import <Foundation/Foundation.h>

#import "WFPythonHTMLParser.h"

@interface WFHTMLToMarkdown : NSObject <WFPythonHTMLParserDelegate>



@property (retain, nonatomic) NSMutableArray *a; // ivar: _a
@property (nonatomic) NSInteger aCount; // ivar: _aCount
@property (retain, nonatomic) NSMutableArray *aStack; // ivar: _aStack
@property (copy, nonatomic) NSString *abbreviationData; // ivar: _abbreviationData
@property (retain, nonatomic) NSMutableOrderedSet *abbreviationList; // ivar: _abbreviationList
@property (copy, nonatomic) NSString *abbreviationTitle; // ivar: _abbreviationTitle
@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (nonatomic) NSInteger blockquote; // ivar: _blockquote
@property (nonatomic) NSInteger bodyWidth; // ivar: _bodyWidth
@property (nonatomic) BOOL code; // ivar: _code
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *emphasisMark; // ivar: _emphasisMark
@property (nonatomic) BOOL escapeSnob; // ivar: _escapeSnob
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ignoreEmphasis; // ivar: _ignoreEmphasis
@property (nonatomic) BOOL ignoreImages; // ivar: _ignoreImages
@property (nonatomic) BOOL ignoreLinks; // ivar: _ignoreLinks
@property (nonatomic) BOOL inlineLinks; // ivar: _inlineLinks
@property (nonatomic) BOOL lastWasList; // ivar: _lastWasList
@property (nonatomic) BOOL lastWasNewline; // ivar: _lastWasNewline
@property (nonatomic) BOOL linksEachParagraph; // ivar: _linksEachParagraph
@property (retain, nonatomic) NSMutableArray *list; // ivar: _list
@property (copy, nonatomic) NSString *maybeAutomaticLink; // ivar: _maybeAutomaticLink
@property (retain, nonatomic) NSDictionary *nameToCodepointMapping; // ivar: _nameToCodepointMapping
@property (nonatomic) NSInteger outCount; // ivar: _outCount
@property (copy, nonatomic) NSString *outText; // ivar: _outText
@property (retain, nonatomic) NSMutableArray *outTextList; // ivar: _outTextList
@property (nonatomic) NSInteger p_p; // ivar: _p_p
@property (retain, nonatomic) WFPythonHTMLParser *parser; // ivar: _parser
@property (nonatomic) BOOL pre; // ivar: _pre
@property (nonatomic) NSInteger quiet; // ivar: _quiet
@property (nonatomic) BOOL skipInternalLinks; // ivar: _skipInternalLinks
@property (nonatomic) BOOL space; // ivar: _space
@property (nonatomic) BOOL start; // ivar: _start
@property (nonatomic) BOOL startpre; // ivar: _startpre
@property (copy, nonatomic) NSString *strongMark; // ivar: _strongMark
@property (nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *ulItemMark; // ivar: _ulItemMark
@property (nonatomic) BOOL unicodeSnob; // ivar: _unicodeSnob
@property (retain, nonatomic) NSDictionary *unifiableN; // ivar: _unifiableN


-(BOOL)onlywhite:(id)arg0 ;
-(BOOL)skipwrap:(id)arg0 ;
-(id)charref:(id)arg0 ;
-(id)entityref:(id)arg0 ;
-(id)escapeMD:(id)arg0 ;
-(id)escapeMDSection:(id)arg0 snob:(BOOL)arg1 ;
-(id)handleHTML:(id)arg0 ;
-(id)initWithBaseURL:(id)arg0 ;
-(id)optwrap:(id)arg0 ;
-(id)previousIndex:(id)arg0 ;
-(id)wrapText:(id)arg0 toWidth:(NSInteger)arg1 ;
-(int)tagHeaderNumber:(id)arg0 ;
-(unsigned short)nameToCodepoint:(id)arg0 ;
-(void)addOutput:(id)arg0 ;
-(void)close;
-(void)handleTag:(id)arg0 attributes:(id)arg1 start:(BOOL)arg2 ;
-(void)output:(id)arg0 ;
-(void)output:(id)arg0 pureData:(BOOL)arg1 force:(id)arg2 ;
-(void)p;
-(void)parser:(id)arg0 foundCharacterRef:(id)arg1 ;
-(void)parser:(id)arg0 foundData:(id)arg1 ;
-(void)parser:(id)arg0 foundEndTag:(id)arg1 ;
-(void)parser:(id)arg0 foundEntityRef:(id)arg1 ;
-(void)parser:(id)arg0 foundStartTag:(id)arg1 attributes:(id)arg2 ;
-(void)pbr;


@end


#endif