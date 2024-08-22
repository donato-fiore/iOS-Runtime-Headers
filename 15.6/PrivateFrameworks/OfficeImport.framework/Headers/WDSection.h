// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDSECTION_H
#define WDSECTION_H


#import <Foundation/Foundation.h>

#import "WDText.h"
#import "WDDocument.h"

@interface WDSection : NSObject {
    BOOL mOriginal;
    BOOL mTracked;
    BOOL mResolved;
    WDText *mText;
    WDText *mEvenPageHeader;
    WDText *mOddPageHeader;
    WDText *mFirstPageHeader;
    WDText *mEvenPageFooter;
    WDText *mOddPageFooter;
    WDText *mFirstPageFooter;
    ? mOriginalProperties;
    ? mTrackedProperties;
}


@property (readonly, weak) WDDocument *document; // ivar: mDocument


-(BOOL)bidi;
-(BOOL)columnsEqualWidth;
-(BOOL)formattingChanged;
-(BOOL)isBidiOverridden;
-(BOOL)isBorderDepthOverridden;
-(BOOL)isBorderDisplayOverridden;
-(BOOL)isBorderOffsetOverridden;
-(BOOL)isBottomBorderOverridden;
-(BOOL)isBottomMarginOverridden;
-(BOOL)isBreakTypeOverridden;
-(BOOL)isChapterNumberSeparatorOverridden;
-(BOOL)isColumnCountOverridden;
-(BOOL)isColumnSpaceOverridden;
-(BOOL)isColumnWidthDefinedAt:(unsigned int)arg0 ;
-(BOOL)isColumnsEqualWidthOverridden;
-(BOOL)isFooterMarginOverridden;
-(BOOL)isFormattingChangeDateOverridden;
-(BOOL)isFormattingChangedOverridden;
-(BOOL)isGutterMarginOverridden;
-(BOOL)isHeaderMarginOverridden;
-(BOOL)isIndexToAuthorIDOfFormattingChangeOverridden;
-(BOOL)isLastColumnWidthDefined;
-(BOOL)isLeftBorderOverridden;
-(BOOL)isLeftMarginOverridden;
-(BOOL)isLineNumberDistanceOverridden;
-(BOOL)isLineNumberIncrementOverridden;
-(BOOL)isLineNumberRestartOverridden;
-(BOOL)isLineNumberStartOverridden;
-(BOOL)isPageHeightOverridden;
-(BOOL)isPageNumberFormatOverridden;
-(BOOL)isPageNumberRestartOverridden;
-(BOOL)isPageNumberStartOverridden;
-(BOOL)isPageOrientationOverridden;
-(BOOL)isPageScaleOverridden;
-(BOOL)isPageWidthOverridden;
-(BOOL)isRightBorderOverridden;
-(BOOL)isRightMarginOverridden;
-(BOOL)isRtlGutterOverridden;
-(BOOL)isTextDirectionOverridden;
-(BOOL)isTitlePageOverridden;
-(BOOL)isTopBorderOverridden;
-(BOOL)isTopMarginOverridden;
-(BOOL)isVerticalJustificationOverridden;
-(BOOL)pageNumberRestart;
-(BOOL)rtlGutter;
-(BOOL)titlePage;
-(NSInteger)bottomMargin;
-(NSInteger)columnSpace;
-(NSInteger)columnSpaceAt:(unsigned int)arg0 ;
-(NSInteger)columnWidthAt:(unsigned int)arg0 ;
-(NSInteger)footerMargin;
-(NSInteger)gutterMargin;
-(NSInteger)headerMargin;
-(NSInteger)leftMargin;
-(NSInteger)pageHeight;
-(NSInteger)pageWidth;
-(NSInteger)rightMargin;
-(NSInteger)topMargin;
-(id)bottomBorder;
-(id)description;
-(id)evenPageFooter;
-(id)evenPageHeader;
-(id)firstPageFooter;
-(id)firstPageHeader;
-(id)formattingChangeDate;
-(id)initWithDocument:(id)arg0 ;
-(id)leftBorder;
-(id)mutableBottomBorder;
-(id)mutableLeftBorder;
-(id)mutableRightBorder;
-(id)mutableTopBorder;
-(id)oddPageFooter;
-(id)oddPageHeader;
-(id)rightBorder;
-(id)text;
-(id)topBorder;
-(int)borderDepth;
-(int)borderDisplay;
-(int)borderOffset;
-(int)breakType;
-(int)chapterNumberSeparator;
-(int)lineNumberRestart;
-(int)pageNumberFormat;
-(int)pageOrientation;
-(int)resolveMode;
-(int)textDirection;
-(int)verticalJustification;
-(short)lineNumberDistance;
-(short)lineNumberStart;
-(unsigned int)pageScale;
-(unsigned short)columnCount;
-(unsigned short)indexToAuthorIDOfFormattingChange;
-(unsigned short)lineNumberIncrement;
-(unsigned short)pageNumberStart;
-(void)appendColumnSpace:(NSInteger)arg0 ;
-(void)appendColumnWidth:(NSInteger)arg0 ;
-(void)setBidi:(BOOL)arg0 ;
-(void)setBorderDepth:(int)arg0 ;
-(void)setBorderDisplay:(int)arg0 ;
-(void)setBorderOffset:(int)arg0 ;
-(void)setBottomMargin:(NSInteger)arg0 ;
-(void)setBreakType:(int)arg0 ;
-(void)setChapterNumberSeparator:(int)arg0 ;
-(void)setColumnCount:(unsigned short)arg0 ;
-(void)setColumnSpace:(NSInteger)arg0 ;
-(void)setColumnsEqualWidth:(BOOL)arg0 ;
-(void)setFooterMargin:(NSInteger)arg0 ;
-(void)setFormattingChangeDate:(id)arg0 ;
-(void)setFormattingChanged:(BOOL)arg0 ;
-(void)setGutterMargin:(NSInteger)arg0 ;
-(void)setHeaderMargin:(NSInteger)arg0 ;
-(void)setIndexToAuthorIDOfFormattingChange:(unsigned short)arg0 ;
-(void)setLeftMargin:(NSInteger)arg0 ;
-(void)setLineNumberDistance:(short)arg0 ;
-(void)setLineNumberIncrement:(unsigned short)arg0 ;
-(void)setLineNumberRestart:(int)arg0 ;
-(void)setLineNumberStart:(short)arg0 ;
-(void)setPageHeight:(NSInteger)arg0 ;
-(void)setPageNumberFormat:(int)arg0 ;
-(void)setPageNumberRestart:(BOOL)arg0 ;
-(void)setPageNumberStart:(unsigned short)arg0 ;
-(void)setPageOrientation:(int)arg0 ;
-(void)setPageScale:(unsigned int)arg0 ;
-(void)setPageWidth:(NSInteger)arg0 ;
-(void)setResolveMode:(int)arg0 ;
-(void)setRightMargin:(NSInteger)arg0 ;
-(void)setRtlGutter:(BOOL)arg0 ;
-(void)setTextDirection:(int)arg0 ;
-(void)setTitlePage:(BOOL)arg0 ;
-(void)setTopMargin:(NSInteger)arg0 ;
-(void)setVerticalJustification:(int)arg0 ;


@end


#endif