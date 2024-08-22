// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TTTEXTCONTROLLER_H
#define TTTEXTCONTROLLER_H

@class NSString;
@protocol TTTextStorageStyler;

#import <Foundation/Foundation.h>

#import "TTZoomController.h"

@interface TTTextController : NSObject <TTTextStorageStyler>



@property (nonatomic) CGFloat bodyStyleFontSizeThreshold; // ivar: _bodyStyleFontSizeThreshold
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableAddingExtraLinesIfNeeded;
@property (nonatomic) BOOL disableSingleLineA; // ivar: _disableSingleLineA
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat headingStyleFontSizeThreshold; // ivar: _headingStyleFontSizeThreshold
@property (nonatomic) BOOL isForPrint; // ivar: _isForPrint
@property (nonatomic) BOOL keepNSTextTableAttributes; // ivar: _keepNSTextTableAttributes
@property (readonly) Class superclass;
@property (retain, nonatomic) TTZoomController *zoomController; // ivar: _zoomController


+(CGFloat)attachmentParagraphSpacing;
+(CGFloat)attachmentParagraphSpacingBefore;
+(CGFloat)bodyParagraphSpacing;
+(CGFloat)bodyParagraphSpacingBefore;
+(CGFloat)superscriptScaleFactor;
+(id)preferredFontForTTTextStyle:(unsigned int)arg0 ;
-(id)bodyAttributes;
-(id)bodyAttributesWithContentSizeCategory:(id)arg0 ;
-(id)captionAttributes;
-(id)captionAttributesWithContentSizeCategory:(id)arg0 ;
-(id)checklistAttributes;
-(id)checklistAttributesWithContentSizeCategory:(id)arg0 ;
-(id)copyAttribute:(id)arg0 fromAttributes:(id)arg1 toAttributes:(id)arg2 ;
-(id)copyNSParagraphStylefromAttributes:(id)arg0 toAttributes:(id)arg1 ;
-(id)defaultListAttributes;
-(id)defaultListAttributesWithContentSizeCategory:(id)arg0 ;
-(id)defaultParagraphStyle;
-(id)defaultTypingAttributesForEmptyDocument;
-(id)filterStyleAttributes:(id)arg0 range:(struct _NSRange )arg1 ;
-(id)fixedWidthAttributes;
-(id)fixedWidthAttributesWithContentSizeCategory:(id)arg0 ;
-(id)headingAttributes;
-(id)headingAttributesWithContentSizeCategory:(id)arg0 ;
-(id)init;
-(id)modelForStyleAttributes:(id)arg0 filterAttributes:(BOOL)arg1 ;
-(id)preferredAttributesForTTTextStyle:(unsigned int)arg0 ;
-(id)referenceAttributesForLocation:(NSUInteger)arg0 textStorage:(id)arg1 currentParagraphStart:(NSUInteger)arg2 ;
-(id)removeAttribute:(id)arg0 ifInconsistentAtLocation:(NSUInteger)arg1 inTextStorage:(id)arg2 forNewTypingAttributes:(id)arg3 ;
-(id)strippedTypingAttributesAtStartOfParagraph:(id)arg0 atTheEndOfDocument:(BOOL)arg1 isTyping:(BOOL)arg2 ;
-(id)styleForModelAttributes:(id)arg0 ;
-(id)styleForModelAttributes:(id)arg0 contentSizeCategory:(id)arg1 ;
-(id)subheadingAttributes;
-(id)subheadingAttributesWithContentSizeCategory:(id)arg0 ;
-(id)titleAttributes;
-(id)titleAttributesWithContentSizeCategory:(id)arg0 ;
-(id)typingAttributesForRange:(struct _NSRange )arg0 forSelectionChange:(BOOL)arg1 currentTypingAttributes:(id)arg2 inTextStorage:(id)arg3 ;
-(id)typingAttributesForRange:(struct _NSRange )arg0 forSelectionChange:(BOOL)arg1 forSettingTextStyle:(BOOL)arg2 currentTypingAttributes:(id)arg3 inTextStorage:(id)arg4 ;
-(id)typingAttributesForSettingTextStyleForRange:(struct _NSRange )arg0 currentTypingAttributes:(id)arg1 inTextStorage:(id)arg2 ;
-(void)addBIToStyle:(id)arg0 ;
-(void)fixModelAttributesInTextStorage:(id)arg0 inRange:(struct _NSRange )arg1 ;
-(void)guessFontSizeThresholdsForTTStylesInAttributedString:(id)arg0 ;
-(void)resetGuessedFontSizes;
-(void)styleFontInAttributedString:(id)arg0 inRange:(struct _NSRange )arg1 contentSizeCategory:(id)arg2 ;
-(void)styleFontInTextStorage:(id)arg0 inRange:(struct _NSRange )arg1 ;
-(void)styleListsAndIndentsInAttributedString:(id)arg0 inRange:(struct _NSRange )arg1 ;
-(void)styleText:(id)arg0 inExactRange:(struct _NSRange )arg1 fixModelAttributes:(BOOL)arg2 ;
-(void)styleText:(id)arg0 inRange:(struct _NSRange )arg1 fixModelAttributes:(BOOL)arg2 ;


@end


#endif