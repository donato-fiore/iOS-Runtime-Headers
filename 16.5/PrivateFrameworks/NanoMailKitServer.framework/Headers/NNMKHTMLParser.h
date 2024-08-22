// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NNMKHTMLPARSER_H
#define NNMKHTMLPARSER_H

@class NSString, NSMutableData, NSMutableArray;

#import <Foundation/Foundation.h>


@interface NNMKHTMLParser : NSObject

@property (nonatomic) NSUInteger bodyTagStartIndex; // ivar: _bodyTagStartIndex
@property (retain, nonatomic) NSString *bodyTagStyle; // ivar: _bodyTagStyle
@property (nonatomic) BOOL cancelled; // ivar: _cancelled
@property (retain, nonatomic) NSMutableData *charactersBuffer; // ivar: _charactersBuffer
@property (nonatomic) BOOL containsBlockedElements; // ivar: _containsBlockedElements
@property (nonatomic) NSUInteger currentHeadTagStartIndex; // ivar: _currentHeadTagStartIndex
@property (retain, nonatomic) NSString *currentImgTagSource; // ivar: _currentImgTagSource
@property (nonatomic) NSUInteger currentImgTagStartIndex; // ivar: _currentImgTagStartIndex
@property (nonatomic) NSUInteger currentListLevel; // ivar: _currentListLevel
@property (nonatomic) NSUInteger currentQuoteLevel; // ivar: _currentQuoteLevel
@property (nonatomic) NSUInteger encoding; // ivar: _encoding
@property (retain, nonatomic) NSString *htmlBodyToParse; // ivar: _htmlBodyToParse
@property (retain, nonatomic) NSString *ignoringElementSubtree; // ivar: _ignoringElementSubtree
@property (nonatomic) BOOL isLastCharAddedLineBreak; // ivar: _isLastCharAddedLineBreak
@property (retain, nonatomic) NSMutableArray *isQuoteElementStack; // ivar: _isQuoteElementStack
@property (retain, nonatomic) NSMutableArray *listStack; // ivar: _listStack
@property (nonatomic) *_xmlParserCtxt parserContext; // ivar: _parserContext
@property (nonatomic) BOOL parsingBody; // ivar: _parsingBody
@property (nonatomic) BOOL parsingHead; // ivar: _parsingHead
@property (nonatomic) _xmlSAXHandler parsingSAXHandler; // ivar: _parsingSAXHandler
@property (retain, nonatomic) NSMutableArray *stringAttributesStack; // ivar: _stringAttributesStack


-(BOOL)_isElementBlocked:(id)arg0 attributes:(*char *)arg1 ;
-(BOOL)_isElementBody:(id)arg0 ;
-(BOOL)_isElementDisplayedInBlock:(id)arg0 ;
-(BOOL)_isElementHead:(id)arg0 ;
-(BOOL)_isElementHyperlink:(id)arg0 ;
-(BOOL)_isElementIgnorable:(id)arg0 ;
-(BOOL)_isElementImage:(id)arg0 ;
-(BOOL)_isElementLineBreak:(id)arg0 ;
-(BOOL)_isElementList:(id)arg0 ordered:(*BOOL)arg1 ;
-(BOOL)_isElementListItem:(id)arg0 ;
-(BOOL)_isElementQuoteElement:(id)arg0 attributes:(*char *)arg1 ;
-(BOOL)_isErrorBlocked:(struct _xmlError *)arg0 ;
-(BOOL)caresAboutHTMLContentString;
-(BOOL)isElementBlocked:(id)arg0 attributeQueryBlock:(id)arg1 ;
-(BOOL)isElementIgnorable:(id)arg0 ;
-(BOOL)isErrorTypeBlocked:(char *)arg0 ;
-(NSUInteger)_textAlignmentFromString:(id)arg0 ;
-(NSUInteger)_writingDirectionFromString:(id)arg0 ;
-(id)_stringAttributeValueForCSSStyleName:(id)arg0 inStyleAttribute:(id)arg1 ;
-(id)_stringAttributesForStyleAttribute:(id)arg0 ;
-(id)_topStringAttributes;
-(id)_valueForAttributeNamed:(id)arg0 inAttributes:(*char *)arg1 ;
-(id)init;
-(void)_appendCharacters:(char *)arg0 length:(int)arg1 ;
-(void)_appendImageFromAttributes:(*char *)arg0 ;
-(void)_appendLineBreak;
-(void)_appendString:(id)arg0 ;
-(void)_enumerateAttributes:(*char *)arg0 withBlock:(id)arg1 ;
-(void)_flushCharactersIfNeeded;
-(void)_popStringAttributes;
-(void)_pushStringAttributes:(id)arg0 ;
-(void)_requireNewLine;
-(void)_stringAttributeForElement:(id)arg0 attributes:(*char *)arg1 stringAttributeKey:(*id)arg2 stringAttributeValue:(*id)arg3 ;
-(void)_stringAttributeForHyperlink:(id)arg0 attributes:(*char *)arg1 stringAttributeKey:(*id)arg2 stringAttributeValue:(*id)arg3 ;
-(void)appendImageWithSource:(id)arg0 width:(CGFloat)arg1 height:(CGFloat)arg2 stringAttributes:(id)arg3 ;
-(void)appendString:(id)arg0 stringAttributes:(id)arg1 ;
-(void)parseHTMLBody:(id)arg0 encoding:(NSUInteger)arg1 ;
-(void)processBodyHTMLContent:(id)arg0 style:(id)arg1 contentRange:(struct _NSRange )arg2 ;
-(void)processHeadHTMLTagContent:(id)arg0 ;
-(void)processImgTagSource:(id)arg0 contentRange:(struct _NSRange )arg1 ;


@end


#endif