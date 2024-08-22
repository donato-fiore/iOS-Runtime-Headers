// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSRTFREADER_H
#define NSRTFREADER_H

@class NSMutableAttributedString, NSMutableArray, NSMutableDictionary, NSData, NSFileWrapper, NSMutableData, NSMapTable, NSColor, NSArray, NSCalendar;

#import <Foundation/Foundation.h>

#import "NSTextTable.h"

@interface NSRTFReader : NSObject {
    NSMutableAttributedString *_topAttributedString;
    NSMutableAttributedString *_curAttributedString;
    NSMutableArray *_attributesStack;
    NSMutableDictionary *_curAttributes;
    unsigned int _level;
    NSData *_rtfData;
    NSMutableDictionary *_fontTable;
    NSFileWrapper *_document;
    ? _textBuffer;
    NSUInteger _textBufferIndex;
    int _rtfVersion;
    int _cocoaVersion;
    int _cocoaSubVersion;
    int _readOnly;
    int _usesScreenFonts;
    int _colorTblColorSpace;
    unsigned int _defaultToUniCharEncoding;
    _NSAttributeInfo _attributeInfo;
    NSMutableData *_attributeInfoStack;
    CGSize _paperSize;
    CGFloat _lMargin;
    CGFloat _rMargin;
    CGFloat _bMargin;
    CGFloat _tMargin;
    NSMutableDictionary *_documentInfoDictionary;
    CGSize _viewSize;
    int _viewScale;
    int _viewKind;
    NSMapTable *_cachedRTFFontTable;
    CGFloat _hyphenationFactor;
    CGFloat _defaultTabInterval;
    NSColor *_documentBackgroundColor;
    _NSRTFPriv _private;
    BOOL _textBufferContentsIsFat;
    BOOL _explicitCharSetEncountered;
    BOOL _isRTLDocument;
    NSInteger _readLimit;
    NSInteger _thumbnailLimit;
    BOOL _limitReached;
    unsigned char _textFlow;
    NSMutableArray *_layoutOrientationSections;
    NSUInteger _verticalOrientationLocation;
    NSArray *_textBlocks;
    NSMutableArray *_nestedTables;
    NSTextTable *_currentTable;
    NSTextTable *_previousTable;
    NSMutableArray *_currentRowArray;
    NSMutableArray *_previousRowArray;
    int _currentRow;
    int _currentColumn;
    int _currentDefinitionColumn;
    BOOL _currentRowIsLast;
    BOOL _setTableCells;
    NSUInteger _currentBorderEdge;
    BOOL _currentBorderIsTable;
    NSMutableDictionary *_listDefinitions;
    int _currentListNumber;
    int _currentListLevel;
    NSCalendar *_gregorianCalendar;
    NSMutableDictionary *_fontAttributesTable;
    NSInteger _cocoaTextScaling;
    NSInteger _cocoaPlatform;
    NSInteger _targetTextScaling;
    NSInteger _sourceTextScaling;
    NSInteger _finalTextScaling;
}




-(BOOL)_currentBorderIsTable;
-(BOOL)_currentTableCellIsPlaceholder;
-(CGFloat)defaultTabInterval;
-(NSInteger)_currentListLevel;
-(NSInteger)_currentListNumber;
-(NSInteger)baseWritingDirection;
-(NSInteger)cocoaPlatform;
-(NSInteger)cocoaTextScaling;
-(NSUInteger)_currentBorderEdge;
-(NSUInteger)textFlow;
-(id)_RTFDFileWrapper;
-(id)_currentTable;
-(id)_currentTableCell;
-(id)_listDefinitions;
-(id)_mutableParagraphStyle;
-(id)attributedString;
-(id)attributedStringToEndOfGroup;
-(id)attributesAtEndOfGroup;
-(id)defaultParagraphStyle;
-(id)documentAttributes;
-(id)initWithPath:(id)arg0 ;
-(id)initWithRTF:(id)arg0 ;
-(id)initWithRTFD:(id)arg0 ;
-(id)initWithRTFDFileWrapper:(id)arg0 ;
-(id)mutableAttributedString;
-(id)mutableAttributes;
-(struct CGSize )paperSize;
-(struct CGSize )viewSize;
-(void)_addListDefinition:(id)arg0 forKey:(NSInteger)arg1 ;
-(void)_addOverride:(NSInteger)arg0 forKey:(NSInteger)arg1 ;
-(void)_endTableCell;
-(void)_endTableCellDefinition;
-(void)_endTableRow;
-(void)_lastTableRow;
-(void)_mergeTableCellsHorizontally;
-(void)_mergeTableCellsVertically;
-(void)_paragraphInTable;
-(void)_popState;
-(void)_pushState;
-(void)_setCurrentBorderEdge:(NSUInteger)arg0 isTable:(BOOL)arg1 ;
-(void)_setCurrentListLevel:(NSInteger)arg0 ;
-(void)_setCurrentListNumber:(NSInteger)arg0 ;
-(void)_setRTFDFileWrapper:(id)arg0 ;
-(void)_setSourceTextScaling:(NSInteger)arg0 ;
-(void)_setTableNestingLevel:(NSInteger)arg0 ;
-(void)_setTargetTextScaling:(NSInteger)arg0 ;
-(void)_startTableRowDefinition;
-(void)_updateAttributes;
-(void)dealloc;
-(void)finalize;
-(void)processString:(id)arg0 ;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setBaseWritingDirection:(NSInteger)arg0 ;
-(void)setBottomMargin:(CGFloat)arg0 ;
-(void)setDefaultTabInterval:(CGFloat)arg0 ;
-(void)setHyphenationFactor:(float)arg0 ;
-(void)setLeftMargin:(CGFloat)arg0 ;
-(void)setMutableAttributedString:(id)arg0 ;
-(void)setPaperSize:(struct CGSize )arg0 ;
-(void)setReadLimit:(NSInteger)arg0 ;
-(void)setRightMargin:(CGFloat)arg0 ;
-(void)setTextFlow:(NSUInteger)arg0 ;
-(void)setThumbnailLimit:(NSInteger)arg0 ;
-(void)setTopMargin:(CGFloat)arg0 ;
-(void)setViewKind:(NSInteger)arg0 ;
-(void)setViewScale:(NSInteger)arg0 ;
-(void)setViewSize:(struct CGSize )arg0 ;


@end


#endif