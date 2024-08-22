// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBREADER_H
#define WBREADER_H

@class NSMutableArray, NSMutableDictionary;


#import "OCBReader.h"
#import "OITSUNoCopyDictionary.h"
#import "WBOfficeArtReaderState.h"
#import "WDDocument.h"

@interface WBReader : OCBReader {
    *void mFootnoteTable;
    *void mEndnoteTable;
    *void mAnnotationTable;
    *void mTableHeaders;
    *void mBookmarkTable;
    *void mAnnotationBookmarkTable;
    *WrdFieldPositionTable mFieldPositionTables;
    *void mStoryTable;
    *void mHeaderStoryTable;
    *void mFileShapeAddressTable;
    *void mFileShapeAddressHeaderTable;
    *WrdEshObjectFactory mEshObjectFactory;
    *void mLastRowParagraphProperties;
    NSMutableArray *mAnnotationOwners;
    OITSUNoCopyDictionary *mIndexToStyles;
    OITSUNoCopyDictionary *mIndexToFonts;
    WBOfficeArtReaderState *mOfficeArtState;
    *void mTextBoxes;
    BOOL mReportProgress;
    id *mAnnotationRangeStart;
    NSMutableDictionary *mBookmarkIndexToAnnotationRangeStartMap;
}


@property (readonly) NSMutableDictionary *previousFlowElement; // ivar: mPreviousFlowElement
@property (weak, nonatomic) WDDocument *targetDocument; // ivar: mTargetDocument


-(*void)annotationBookmarkTable;
-(*void)annotationTable;
-(*void)bookmarkTable;
-(*void)endnoteTable;
-(*void)fieldPositionTableForTextType:(int)arg0 ;
-(*void)fileShapeAddressHeaderTable;
-(*void)fileShapeAddressTable;
-(*void)footnoteTable;
-(*void)headerStoryTable;
-(*void)lastRowParagraphProperties;
-(*void)storyTable;
-(*void)tableHeaders;
-(*void)wrdReader;
-(BOOL)reportProgress;
-(BOOL)start;
-(NSUInteger)textBoxCount;
-(id)annotationOwner:(int)arg0 ;
-(id)annotationRangeStart;
-(id)annotationRangeStartForBookmarkIndex:(NSUInteger)arg0 ;
-(id)drawableForShapeId:(unsigned int)arg0 ;
-(id)fontAtIndex:(int)arg0 ;
-(id)initWithCancelDelegate:(id)arg0 ;
-(id)officeArtState;
-(id)read;
-(id)readCharactersForTextRun:(struct WrdTextRun *)arg0 ;
-(id)readCharactersFrom:(unsigned int)arg0 to:(unsigned int)arg1 textType:(int)arg2 ;
-(id)styleAtIndex:(int)arg0 ;
-(id)styleAtIndex:(int)arg0 expectedType:(int)arg1 ;
-(struct OCCBinaryStreamer *)allocBinaryStreamerWithCryptoKey:(struct OCCCryptoKey *)arg0 baseOutputFilenameInUTF8:(char *)arg1 ;
-(struct OCCEncryptionInfoReader *)encryptionInfoReader;
-(struct WBTextBoxReaderInfo )textBoxInfoAtIndex:(NSUInteger)arg0 ;
-(struct WrdEshObjectFactory *)eshObjectFactory;
-(void)addFont:(id)arg0 index:(int)arg1 ;
-(void)addStyle:(id)arg0 index:(int)arg1 ;
-(void)cacheTextBox:(id)arg0 withChainIndex:(unsigned short)arg1 ;
-(void)dealloc;
-(void)initialize;
-(void)setAnnotationRangeStart:(id)arg0 ;
-(void)setAnnotationRangeStart:(id)arg0 forBookmarkIndex:(NSUInteger)arg1 ;
-(void)setLastRowParagraphProperties:(*void)arg0 ;
-(void)setOfficeArtState:(id)arg0 ;
-(void)setReportProgress:(BOOL)arg0 ;


@end


#endif