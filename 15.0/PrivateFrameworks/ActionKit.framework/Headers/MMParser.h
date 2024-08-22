// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MMPARSER_H
#define MMPARSER_H


#import <Foundation/Foundation.h>

#import "MMHTMLParser.h"
#import "MMSpanParser.h"

@interface MMParser : NSObject

@property (readonly, nonatomic) NSUInteger extensions; // ivar: _extensions
@property (readonly, nonatomic) MMHTMLParser *htmlParser; // ivar: _htmlParser
@property (readonly, nonatomic) MMSpanParser *spanParser; // ivar: _spanParser


-(BOOL)_parseListMarkerWithScanner:(id)arg0 listType:(NSInteger)arg1 ;
-(id)_parseBlockElementWithScanner:(id)arg0 ;
-(id)_parseBlockquoteWithScanner:(id)arg0 ;
-(id)_parseCodeBlockWithScanner:(id)arg0 ;
-(id)_parseCodeLinesWithScanner:(id)arg0 ;
-(id)_parseElementsWithScanner:(id)arg0 ;
-(id)_parseFencedCodeBlockWithScanner:(id)arg0 ;
-(id)_parseHTMLWithScanner:(id)arg0 ;
-(id)_parseHorizontalRuleWithScanner:(id)arg0 ;
-(id)_parseLinkDefinitionWithScanner:(id)arg0 ;
-(id)_parseListItemWithScanner:(id)arg0 listType:(NSInteger)arg1 ;
-(id)_parseListWithScanner:(id)arg0 ;
-(id)_parseParagraphWithScanner:(id)arg0 ;
-(id)_parsePrefixHeaderWithScanner:(id)arg0 ;
-(id)_parseTableHeaderWithScanner:(id)arg0 ;
-(id)_parseTableRowWithScanner:(id)arg0 columns:(id)arg1 ;
-(id)_parseTableWithScanner:(id)arg0 ;
-(id)_parseUnderlinedHeaderWithScanner:(id)arg0 ;
-(id)_removeTabsFromString:(id)arg0 ;
-(id)initWithExtensions:(NSUInteger)arg0 ;
-(id)parseMarkdown:(id)arg0 error:(*id)arg1 ;
-(void)_addTextLineToElement:(id)arg0 withScanner:(id)arg1 ;
-(void)_updateLinksFromDefinitionsInDocument:(id)arg0 ;


@end


#endif