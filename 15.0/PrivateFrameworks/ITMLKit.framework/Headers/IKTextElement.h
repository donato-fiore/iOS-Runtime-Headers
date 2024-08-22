// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IKTEXTELEMENT_H
#define IKTEXTELEMENT_H

@class NSMutableArray, NSArray, UIColor, NSAttributedString;


#import "IKViewElement.h"
#import "IKTextParser.h"

@interface IKTextElement : IKViewElement {
    IKTextParser *_textParser;
    NSMutableArray *_textBadges;
    NSMutableArray *_textBadgeElements;
    NSMutableArray *_textSpanElements;
}


@property (readonly, nonatomic) NSUInteger alignment;
@property (readonly, nonatomic) NSArray *badges;
@property (readonly, nonatomic) UIColor *color;
@property (readonly, nonatomic) NSInteger maxLines;
@property (readonly, retain, nonatomic) NSAttributedString *text;
@property (readonly, nonatomic) NSUInteger textStyle; // ivar: _textStyle


+(BOOL)shouldParseChildDOMElements;
-(NSUInteger)_styleForTagName:(id)arg0 ;
-(id)accessibilityText;
-(id)attributedStringWithFont:(id)arg0 ;
-(id)attributedStringWithFont:(id)arg0 foregroundColor:(id)arg1 textAlignment:(NSInteger)arg2 ;
-(id)attributedStringWithFontHandler:(id)arg0 ;
// -(id)attributedStringWithFontHandler:(id)arg0 defaultAttributes:(unk)arg1  ;
// -(id)attributedStringWithFontHandler:(id)arg0 foregroundColor:(unk)arg1 textAlignment:(id)arg2  ;
// -(id)attributedStringWithFontHandler:(id)arg0 foregroundColor:(unk)arg1 textAlignment:(id)arg2 defaultAttributes:(NSInteger)arg3  ;
-(id)debugDescription;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;
-(id)initWithOriginalElement:(id)arg0 ;
-(id)initWithPrototypeElement:(id)arg0 parent:(id)arg1 appDataItem:(id)arg2 ;
-(void)appDocumentDidMarkStylesDirty;


@end


#endif