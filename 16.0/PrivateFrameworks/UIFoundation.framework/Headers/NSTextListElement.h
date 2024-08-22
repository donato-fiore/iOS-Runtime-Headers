// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSTEXTLISTELEMENT_H
#define NSTEXTLISTELEMENT_H

@class NSAttributedString, NSArray, NSDictionary;


#import "NSTextParagraph.h"
#import "NSTextListElement.h"
#import "NSTextList.h"

@interface NSTextListElement : NSTextParagraph {
    NSInteger _indentLevel;
    NSInteger _itemNumber;
}


@property (readonly) NSAttributedString *attributedString;
@property (readonly, copy) NSArray *childElements; // ivar: _childElements
@property (readonly) NSAttributedString *contents; // ivar: _contents
@property (readonly) NSDictionary *markerAttributes; // ivar: _markerAttributes
@property (copy) id *markerTextAttributesForTextList; // ivar: _markerTextAttributesForTextList
@property (weak) NSTextListElement *parentElement; // ivar: _parentElement
@property (readonly) NSTextList *textList; // ivar: _textList


+(id)_createChildElementsFromAttributedString:(id)arg0 atIndex:(NSInteger)arg1 indentLevel:(NSInteger)arg2 effectiveRange:(struct _NSRange *)arg3 textListElementInstantiationCallback:(id)arg4 ;
+(id)_createElementWithChildElements:(id)arg0 textList:(id)arg1 nestingLevel:(NSInteger)arg2 ;
+(id)_createTextListElementFromAttributedString:(id)arg0 atIndex:(NSInteger)arg1 indentLevel:(NSInteger)arg2 effectiveRange:(struct _NSRange *)arg3 textListElementInstantiationCallback:(id)arg4 ;
+(id)_createUpdatedTextTabsForTextTabs:(id)arg0 markerLocation:(CGFloat)arg1 listLocation:(CGFloat)arg2 ;
+(id)_formattedAttributedStringForRootTextListElement:(id)arg0 ;
+(id)_rootTextListElementFromAttributedString:(id)arg0 atIndex:(NSInteger)arg1 effectiveRange:(struct _NSRange *)arg2 textListElementInstantiationCallback:(id)arg3 ;
+(id)textListElementWithChildElements:(id)arg0 textList:(id)arg1 nestingLevel:(NSInteger)arg2 ;
+(id)textListElementWithContents:(id)arg0 markerAttributes:(id)arg1 textList:(id)arg2 childElements:(id)arg3 ;
+(struct _NSRange )_textListElementContentsRangeForRange:(struct _NSRange )arg0 inAttributedString:(id)arg1 ;
+(void)_fillTextListElement:(id)arg0 toAttributedString:(id)arg1 ;
-(BOOL)isRepresentedElement;
-(CGFloat)_indentOffset;
-(CGFloat)_markerOffset;
-(NSInteger)_indentLevel;
-(NSInteger)indentLevel;
-(NSInteger)itemNumber;
-(id)_createConfiguredParagraphStyleForParagraphStyle:(id)arg0 ;
-(id)_markerString;
-(id)_markerTextAttributesForTextList:(id)arg0 attributes:(id)arg1 ;
-(id)initWithParentElement:(id)arg0 textList:(id)arg1 contents:(id)arg2 markerAttributes:(id)arg3 childElements:(id)arg4 ;
-(id)textListElementWithChildElements:(id)arg0 ;
-(void)_reparentWithTextListElement:(id)arg0 itemNumber:(NSInteger)arg1 ;
-(void)dealloc;


@end


#endif