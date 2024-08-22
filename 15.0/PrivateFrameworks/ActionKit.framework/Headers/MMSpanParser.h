// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MMSPANPARSER_H
#define MMSPANPARSER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "MMElement.h"
#import "MMHTMLParser.h"

@interface MMSpanParser : NSObject

@property (retain, nonatomic) MMElement *blockElement; // ivar: _blockElement
@property (retain, nonatomic) NSMutableArray *elements; // ivar: _elements
@property (readonly, nonatomic) NSUInteger extensions; // ivar: _extensions
@property (readonly, nonatomic) MMHTMLParser *htmlParser; // ivar: _htmlParser
@property (retain, nonatomic) NSMutableArray *openElements; // ivar: _openElements
@property (nonatomic) BOOL parseEm; // ivar: _parseEm
@property (nonatomic) BOOL parseImages; // ivar: _parseImages
@property (nonatomic) BOOL parseLinks; // ivar: _parseLinks
@property (nonatomic) BOOL parseStrong; // ivar: _parseStrong


-(BOOL)_parseAutolinkDomainWithScanner:(id)arg0 ;
-(id)_parseAmpersandWithScanner:(id)arg0 ;
-(id)_parseAutolinkEmailAddressWithScanner:(id)arg0 ;
-(id)_parseAutolinkURLWithScanner:(id)arg0 ;
-(id)_parseAutolinkWWWURLWithScanner:(id)arg0 ;
-(id)_parseAutomaticEmailLinkWithScanner:(id)arg0 ;
-(id)_parseAutomaticLinkWithScanner:(id)arg0 ;
-(id)_parseBackslashWithScanner:(id)arg0 ;
-(id)_parseCodeSpanWithScanner:(id)arg0 ;
-(id)_parseEmAndStrongWithScanner:(id)arg0 ;
-(id)_parseImageWithScanner:(id)arg0 ;
-(id)_parseInlineLinkWithScanner:(id)arg0 ;
-(id)_parseLeftAngleBracketWithScanner:(id)arg0 ;
-(id)_parseLineBreakWithScanner:(id)arg0 ;
-(id)_parseLinkTextBodyWithScanner:(id)arg0 ;
-(id)_parseLinkWithScanner:(id)arg0 ;
-(id)_parseNextElementWithScanner:(id)arg0 ;
-(id)_parseReferenceLinkWithScanner:(id)arg0 ;
-(id)_parseStrikethroughWithScanner:(id)arg0 ;
-(id)_parseWithScanner:(id)arg0 untilTestPasses:(id)arg1 ;
-(id)_stringWithBackslashEscapesRemoved:(id)arg0 ;
-(id)initWithExtensions:(NSUInteger)arg0 ;
-(id)parseSpansInBlockElement:(id)arg0 withScanner:(id)arg1 ;
-(id)parseSpansInTableColumns:(id)arg0 withScanner:(id)arg1 ;
-(void)_parseAutolinkPathWithScanner:(id)arg0 ;


@end


#endif