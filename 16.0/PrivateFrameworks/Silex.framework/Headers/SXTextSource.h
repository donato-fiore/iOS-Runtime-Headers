// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXTEXTSOURCE_H
#define SXTEXTSOURCE_H

@class NSMutableIndexSet, NSLocale, NSString;
@protocol SXTextSourceDataSource, SXTextStyleFontDescribing, SXDocumentLanguageProviding, SXFontAttributesConstructor, SXSmartFieldFactory;

#import <Foundation/Foundation.h>

#import "SXTextSourceDefaults.h"

@interface SXTextSource : NSObject

@property (readonly, weak, nonatomic) NSObject<SXTextSourceDataSource> *dataSource; // ivar: _dataSource
@property (readonly, nonatomic) NSObject<SXTextStyleFontDescribing> *defaultFontDescribing; // ivar: _defaultFontDescribing
@property (readonly, nonatomic) SXTextSourceDefaults *defaults; // ivar: _defaults
@property (retain, nonatomic) NSMutableIndexSet *deletedRangeOffsets; // ivar: _deletedRangeOffsets
@property (readonly, nonatomic) NSObject<SXDocumentLanguageProviding> *documentLanguageProvider; // ivar: _documentLanguageProvider
@property (readonly, nonatomic) NSObject<SXFontAttributesConstructor> *fontAttributeConstructor; // ivar: _fontAttributeConstructor
@property (retain, nonatomic) NSMutableIndexSet *insertedRangeOffsets; // ivar: _insertedRangeOffsets
@property (readonly, nonatomic) NSLocale *locale;
@property (retain, nonatomic) NSMutableIndexSet *rangesExcludedOfParagraphSpacing; // ivar: _rangesExcludedOfParagraphSpacing
@property (readonly, nonatomic) NSObject<SXSmartFieldFactory> *smartFieldFactory; // ivar: _smartFieldFactory
@property (readonly, nonatomic) NSString *string; // ivar: _string


-(NSInteger)fontSizeForTextStyle:(id)arg0 ;
-(NSInteger)scaledFontSizeForFontSize:(NSInteger)arg0 ;
-(id)attributesForTextStyle:(id)arg0 onParagraphStyle:(id)arg1 forRange:(struct _NSRange )arg2 resultingDropCapStyle:(*id)arg3 textResizer:(id)arg4 fontFace:(id)arg5 ;
-(id)characterStyleFromAttributes:(id)arg0 context:(id)arg1 ;
-(id)cleanString:(id)arg0 ;
-(id)description;
-(id)fontDescriptionsForTextStyleFontDescription:(id)arg0 defaultTextStyleFontDesciptions:(id)arg1 ;
-(id)fontFaceForTextStyleFontDescription:(id)arg0 defaultTextStyleFontDescription:(id)arg1 fontAttributes:(id)arg2 fontSize:(NSInteger)arg3 ;
-(id)initWithString:(id)arg0 smartFieldFactory:(id)arg1 dataSource:(id)arg2 documentLanguageProvider:(id)arg3 fontAttributesConstructor:(id)arg4 ;
-(id)populateArray:(id)arg0 withValue:(id)arg1 forSize:(NSUInteger)arg2 ;
-(id)randomColorWithAlpha:(CGFloat)arg0 ;
-(int)listLabelTypeForListType:(NSUInteger)arg0 ;
-(int)listNumberTypeForListType:(NSUInteger)arg0 ;
-(struct _NSRange )rangeForRange:(struct _NSRange )arg0 ;
-(struct _NSRange )rangeInBounds:(struct _NSRange )arg0 maxLength:(NSUInteger)arg1 ;
-(unsigned int)paragraphAlignmentForTextAlignment:(NSInteger)arg0 ;
-(void)applyAdditionsOnTextTangierStorage:(id)arg0 ;
-(void)applyListStylingOnTextTangierStorage:(id)arg0 usingAttributesMap:(id)arg1 ;
-(void)applyStylingOnTextTangierStorage:(id)arg0 ;
-(void)transform:(id)arg0 forTextStyle:(id)arg1 range:(struct _NSRange )arg2 ;


@end


#endif