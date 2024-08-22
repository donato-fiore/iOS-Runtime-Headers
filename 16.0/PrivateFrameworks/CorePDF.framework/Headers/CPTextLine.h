// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPTEXTLINE_H
#define CPTEXTLINE_H

@class NSArray;
@protocol CPDisposable;


#import "CPTextObject.h"
#import "CPCharSequence.h"

@interface CPTextLine : CPTextObject <CPDisposable>

 {
    CPCharSequence *charSequence;
    *? wordArray;
    unsigned int wordCount;
    *CPInlineContainer inlineList;
    int lineNumber;
    int columnNumber;
    CGFloat baseline;
    CGFloat rotatedBaseline;
    BOOL baseLineIsNull;
    BOOL rotatedBaseLineIsNull;
    CGRect rotatedBounds;
    BOOL hasBeenSplit;
    BOOL hasBeenProcessed;
    BOOL maySplit;
    BOOL hasTabs;
    NSArray *columnBreaks;
    NSArray *xsegments;
    int levels;
    float maximumLetterGap;
    float maximumWordGap;
    int tabsBefore;
    BOOL irregular;
    *CPPDFStyle uniformStyle;
    unsigned short uniformStyleFlags;
    CGFloat monospaceWidth;
    *unsigned int spacesBefore;
    BOOL disposed;
}


@property (nonatomic) BOOL isListItem; // ivar: isListItem
@property (nonatomic) unsigned int leftSpacerIndex; // ivar: leftSpacerIndex
@property (nonatomic) BOOL lineBreakAfter; // ivar: lineBreakAfter
@property (nonatomic) unsigned int listSpacerIndex; // ivar: listSpacerIndex
@property (nonatomic) unsigned int rightSpacerIndex; // ivar: rightSpacerIndex


-(?)styleIsUniformstyleFlags;
-(BOOL)changesFontAt:(id)arg0 ;
-(BOOL)hasBeenProcessed;
-(BOOL)hasBeenSplit;
-(BOOL)hasDropCap;
-(BOOL)hasJustifiedAlignment;
-(BOOL)hasTabs;
-(BOOL)hyphenated;
-(BOOL)irregular;
-(BOOL)isIndivisible;
-(BOOL)isMonospaced;
-(BOOL)mapToWordPairs:(*unk)arg0 passing:(*void)arg1 ;
-(BOOL)mapToWordPairsWithIndex:(*unk)arg0 passing:(*void)arg1 ;
-(BOOL)mapToWords:(*unk)arg0 passing:(*void)arg1 ;
-(BOOL)mapToWordsWithIndex:(*unk)arg0 passing:(*void)arg1 ;
-(BOOL)overlapsHorizontally:(struct CGRect )arg0 ;
-(BOOL)overlapsWith:(id)arg0 ;
-(BOOL)removeTextLines:(id)arg0 whereTrue:(*unk)arg1 passing:(*void)arg2 ;
-(CGFloat)baseline;
-(CGFloat)medianFontSize;
-(CGFloat)monospaceWidth;
-(CGFloat)rotatedBaseline;
-(CGFloat)rotationAngle;
-(NSInteger)baseLineAscending:(id)arg0 ;
-(NSInteger)baseLineDescending:(id)arg0 ;
-(NSInteger)rotatedBaseLineDescending:(id)arg0 ;
-(NSInteger)topIsAbove:(id)arg0 ;
-(NSInteger)zOrder;
-(float)maximumLetterGap;
-(float)maximumWordGap;
-(id)attributes;
-(id)charSequence;
-(id)columnBreaks;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)newTextLineFromWordAt:(unsigned int)arg0 lengthInWords:(unsigned int)arg1 ;
-(id)properties;
-(int)align;
-(int)levels;
-(int)tabsBefore;
-(struct ? *)firstWord;
-(struct ? *)lastWord;
-(struct ? *)wordArray;
-(struct ? *)wordArrayOfSize:(unsigned int)arg0 ;
-(struct ? *)wordAtIndex:(unsigned int)arg0 ;
-(struct CGPoint )anchor;
-(struct CGRect )bounds;
-(struct CGRect )boundsOfWordAtIndex:(unsigned int)arg0 ;
-(struct CGRect )rotatedBounds;
-(struct CPInlineContainer *)inlineList;
-(unsigned int)inlineCount;
-(unsigned int)spacesBeforeWordAtIndex:(unsigned int)arg0 ;
-(unsigned int)wordCount;
-(void)accept:(id)arg0 ;
-(void)anchorChunk:(id)arg0 atWordIndex:(unsigned int)arg1 ;
-(void)dealloc;
-(void)dispose;
-(void)finalize;
-(void)fitBoundsToChildren;
-(void)recomputeBaseline;
-(void)recomputeLevels;
-(void)setBaseline:(CGFloat)arg0 ;
-(void)setBaselineToNull;
-(void)setCharSequence:(id)arg0 ;
-(void)setColumnBreaks:(id)arg0 ;
-(void)setHasBeenProcessed:(BOOL)arg0 ;
-(void)setHasBeenSplit:(BOOL)arg0 ;
-(void)setHasTabs:(BOOL)arg0 ;
-(void)setIrregular:(BOOL)arg0 ;
-(void)setLevels:(int)arg0 ;
-(void)setMaximumLetterGap:(float)arg0 ;
-(void)setMaximumWordGap:(float)arg0 ;
-(void)setSpaces:(unsigned int)arg0 beforeWordAtIndex:(unsigned int)arg1 ;
-(void)setTabsBefore:(int)arg0 ;
-(void)translateObjectYBy:(CGFloat)arg0 ;


@end


#endif