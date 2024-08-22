// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDDOCUMENT_H
#define WDDOCUMENT_H

@class NSMutableArray, NSString, NSDate, NSMutableSet;


#import "OCDDocument.h"
#import "WDStyleSheet.h"
#import "WDFontTable.h"
#import "WDListDefinitionTable.h"
#import "WDRevisionAuthorTable.h"
#import "WDCitationTable.h"
#import "WDListTable.h"
#import "WDText.h"
#import "OADBackground.h"
#import "OADColorMap.h"

@interface WDDocument : OCDDocument {
    WDStyleSheet *mStyleSheet;
    WDFontTable *mFontTable;
    WDListDefinitionTable *mListDefinitionTable;
    WDRevisionAuthorTable *mRevisionAuthorTable;
    WDCitationTable *mCitationTable;
    WDListTable *mListTable;
    NSMutableArray *mSections;
    unsigned short mDefaultTabWidth;
    WDText *mImageBulletText;
    WDText *mFootnoteSeparator;
    WDText *mFootnoteContinuationSeparator;
    WDText *mFootnoteContinuationNotice;
    WDText *mEndnoteSeparator;
    WDText *mEndnoteContinuationSeparator;
    WDText *mEndnoteContinuationNotice;
    int mFootnoteNumberFormat;
    int mEndnoteNumberFormat;
    int mFootnotePosition;
    int mEndnotePosition;
    int mFootnoteRestart;
    int mEndnoteRestart;
    unsigned short mFootnoteNumberingStart;
    int mGutterPosition;
    NSString *mOleFilename;
    NSString *mKinsokuAltBreakBefore;
    NSString *mKinsokuAltBreakAfter;
    short mZoomPercentage;
    NSString *mVersion;
    NSString *mLanguage;
    BOOL mMirrorMargins;
    BOOL mBorderSurroundHeader;
    BOOL mBorderSurroundFooter;
    BOOL mKinsokuStrict;
    BOOL mAutoHyphenate;
    BOOL mEvenAndOddHeaders;
    BOOL mBookFold;
    BOOL mShowMarkup;
    BOOL mShowComments;
    BOOL mTrackChanges;
    BOOL mShowRevisionMarksOnScreen;
    BOOL mShowInsertionsAndDeletions;
    BOOL mShowFormatting;
    BOOL mShowOutline;
    BOOL mNoTabForHangingIndents;
    NSMutableArray *mDocumentImages;
    NSMutableArray *mChangeTrackingEditDates;
    NSMutableArray *mChangeTrackingEditAuthors;
    NSDate *mCreationDate;
    NSDate *mModificationDate;
    NSMutableArray *mImageBullets;
    OADBackground *mDocumentBackground;
    NSMutableSet *mObjPointers;
    OADColorMap *mColorMap;
}




-(BOOL)autoHyphenate;
-(BOOL)bookFold;
-(BOOL)borderSurroundFooter;
-(BOOL)borderSurroundHeader;
-(BOOL)evenAndOddHeaders;
-(BOOL)isFromBinary;
-(BOOL)kinsokuStrict;
-(BOOL)mirrorMargins;
-(BOOL)noTabForHangingIndents;
-(BOOL)showComments;
-(BOOL)showFormatting;
-(BOOL)showInsertionsAndDeletions;
-(BOOL)showMarkup;
-(BOOL)showOutline;
-(BOOL)showRevisionMarksOnScreen;
-(BOOL)trackChanges;
-(NSUInteger)citationCount;
-(NSUInteger)revisionAuthorAddLookup:(id)arg0 ;
-(NSUInteger)revisionAuthorCount;
-(NSUInteger)sectionCount;
-(id)addImageBulletText;
-(id)addSection;
-(id)annotationBlockIterator;
-(id)annotationIterator;
-(id)applicationName;
-(id)changeTrackingEditAuthors;
-(id)changeTrackingEditDates;
-(id)citationFor:(id)arg0 ;
-(id)citationTable;
-(id)colorMap;
-(id)creationDate;
-(id)description;
-(id)documentBackground;
-(id)endnoteBlockIterator;
-(id)endnoteContinuationNotice;
-(id)endnoteContinuationSeparator;
-(id)endnoteIterator;
-(id)endnoteSeparator;
-(id)fontTable;
-(id)footnoteBlockIterator;
-(id)footnoteContinuationNotice;
-(id)footnoteContinuationSeparator;
-(id)footnoteIterator;
-(id)footnoteSeparator;
-(id)imageBulletParagraph;
-(id)imageBulletText;
-(id)imageBulletWithCharacterOffset:(int)arg0 ;
-(id)imageBullets;
-(id)init;
-(id)kinsokuAltBreakAfter;
-(id)kinsokuAltBreakBefore;
-(id)language;
-(id)lastModDate;
-(id)lastSection;
-(id)listDefinitionTable;
-(id)listDefinitionWithListDefinitionId:(int)arg0 ;
-(id)listDefinitionWithListId:(int)arg0 ;
-(id)listLevelWithListId:(int)arg0 levelIndex:(unsigned char)arg1 ;
-(id)listTable;
-(id)listWithListId:(int)arg0 ;
-(id)mainBlocksIterator;
-(id)mainRunsIterator;
-(id)newAnnotationBlockIterator;
-(id)newAnnotationIterator;
-(id)newEndnoteBlockIterator;
-(id)newEndnoteIterator;
-(id)newFootnoteBlockIterator;
-(id)newFootnoteIterator;
-(id)newMainBlocksIterator;
-(id)newMainRunsIterator;
-(id)newSectionIterator;
-(id)oleFilename;
-(id)revisionAuthorAt:(NSUInteger)arg0 ;
-(id)revisionAuthorTable;
-(id)sectionAt:(NSUInteger)arg0 ;
-(id)sectionIterator;
-(id)sections;
-(id)styleSheet;
-(id)version;
-(int)endnoteNumberFormat;
-(int)endnotePosition;
-(int)endnoteRestart;
-(int)footnoteNumberFormat;
-(int)footnotePosition;
-(int)footnoteRestart;
-(int)gutterPosition;
-(short)zoomPercentage;
-(unsigned short)defaultTabWidth;
-(unsigned short)footnoteNumberingStart;
-(void)addChangeTrackingEditAtDate:(id)arg0 authorIndex:(int)arg1 ;
-(void)addCitation:(id)arg0 forID:(id)arg1 ;
-(void)addImageBullets;
-(void)addObjPointer:(id)arg0 ;
-(void)addRevisionAuthor:(id)arg0 ;
-(void)removeEmptySections;
-(void)removeObjPointer:(id)arg0 ;
-(void)setAutoHyphenate:(BOOL)arg0 ;
-(void)setBookFold:(BOOL)arg0 ;
-(void)setBorderSurroundFooter:(BOOL)arg0 ;
-(void)setBorderSurroundHeader:(BOOL)arg0 ;
-(void)setColorMap:(id)arg0 ;
-(void)setCreationDate:(id)arg0 ;
-(void)setDefaultTabWidth:(unsigned short)arg0 ;
-(void)setDocumentBackground:(id)arg0 ;
-(void)setEndnoteNumberFormat:(int)arg0 ;
-(void)setEndnotePosition:(int)arg0 ;
-(void)setEndnoteRestart:(int)arg0 ;
-(void)setEvenAndOddHeaders:(BOOL)arg0 ;
-(void)setFootnoteNumberFormat:(int)arg0 ;
-(void)setFootnoteNumberingStart:(unsigned short)arg0 ;
-(void)setFootnotePosition:(int)arg0 ;
-(void)setFootnoteRestart:(int)arg0 ;
-(void)setGutterPosition:(int)arg0 ;
-(void)setKinsokuAltBreakAfter:(id)arg0 ;
-(void)setKinsokuAltBreakBefore:(id)arg0 ;
-(void)setKinsokuStrict:(BOOL)arg0 ;
-(void)setLanguage:(id)arg0 ;
-(void)setLastModDate:(id)arg0 ;
-(void)setMirrorMargins:(BOOL)arg0 ;
-(void)setNoTabForHangingIndents:(BOOL)arg0 ;
-(void)setOleFilename:(id)arg0 ;
-(void)setShowComments:(BOOL)arg0 ;
-(void)setShowFormatting:(BOOL)arg0 ;
-(void)setShowInsertionsAndDeletions:(BOOL)arg0 ;
-(void)setShowMarkup:(BOOL)arg0 ;
-(void)setShowOutline:(BOOL)arg0 ;
-(void)setShowRevisionMarksOnScreen:(BOOL)arg0 ;
-(void)setTrackChanges:(BOOL)arg0 ;
-(void)setVersion:(id)arg0 ;
-(void)setZoomPercentage:(short)arg0 ;


@end


#endif