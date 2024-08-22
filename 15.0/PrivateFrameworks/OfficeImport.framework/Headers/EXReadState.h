// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EXREADSTATE_H
#define EXREADSTATE_H

@class NSMutableArray, NSMutableDictionary;
@protocol TCCancelDelegate;


#import "OCXReadState.h"
#import "EDSheet.h"
#import "OCPPackagePart.h"
#import "EDReference.h"
#import "EXOfficeArtState.h"
#import "EXOAVState.h"
#import "ECColumnWidthConvertor.h"
#import "EDWorkbook.h"
#import "EDResources.h"
#import "CXNamespace.h"

@interface EXReadState : OCXReadState {
    unsigned int mCurrentSheetIndex;
    EDSheet *mCurrentSheet;
    NSUInteger mCellStyleXfsOffset;
    CGFloat mDefaultColumnWidth;
    CGFloat mDefaultRowHeight;
    OCPPackagePart *mCurrentPart;
    OCPPackagePart *mWorkbookPart;
    map<long, unsigned long, std::less<long>, std::allocator<std::pair<const long, unsigned long>>> mSharedFormulasMap;
    NSMutableArray *mArrayedFormulas;
    EDReference *mSheetDimension;
    EXOfficeArtState *mOfficeArtState;
    EXOAVState *mOAVState;
    BOOL mMaxColumnsWarned;
    BOOL mMaxRowsWarned;
    BOOL mIsPredefinedTableStylesRead;
    NSMutableDictionary *mReferenceForCommentTextBox;
    BOOL mIsPredefinedDxfsBeingRead;
    *_xmlNs mRelationshipNS;
    ECColumnWidthConvertor *mColumnWidthConvertor;
    NSMutableArray *mLegacyDrawables;
    EDWorkbook *mWorkbook;
    EDResources *mResources;
    unsigned int mCurrentRowMinColumnIndex;
    unsigned int mCurrentRowMaxColumnIndex;
}


@property (retain, nonatomic) CXNamespace *EXSpreadsheetDrawingNamespace; // ivar: mEXSpreadsheetDrawingNamespace
@property (retain, nonatomic) CXNamespace *EXSpreadsheetMLNamespace; // ivar: mEXSpreadsheetMLNamespace
@property (retain, nonatomic) CXNamespace *EXSpreadsheetRelationsNamespace; // ivar: mEXSpreadsheetRelationsNamespace
@property (readonly, nonatomic) NSObject<TCCancelDelegate> *cancelDelegate; // ivar: mCancelDelegate


-(?)relationshipNameSpaceForWorkbook;
-(?)relationshipNameSpaceForWorkbook;
-(BOOL)isCancelled;
-(BOOL)isPredefinedDxfsBeingRead;
-(BOOL)isPredefinedTableStylesRead;
-(CGFloat)defaultColumnWidth;
-(CGFloat)defaultRowHeight;
-(NSUInteger)cellStyleXfsOffset;
-(NSUInteger)sharedBaseFormulaIndexWithIndex:(NSInteger)arg0 ;
-(id)arrayedFormulas;
-(id)authorForReference:(id)arg0 ;
-(id)columnWidthConvertor;
-(id)currentPart;
-(id)currentSheet;
-(id)initWithWorkbookPart:(id)arg0 cancelDelegate:(id)arg1 ;
-(id)legacyDrawables;
-(id)oavState;
-(id)officeArtState;
-(id)resources;
-(id)sheetDimension;
-(id)textBoxForReference:(id)arg0 ;
-(id)workbook;
-(id)workbookPart;
-(unsigned int)currentRowMaxColumnIndex;
-(unsigned int)currentRowMinColumnIndex;
-(unsigned int)currentSheetIndex;
-(void)addSharedBaseFormulaIndex:(NSUInteger)arg0 withIndex:(NSInteger)arg1 ;
-(void)reportWarning:(id)arg0 ;
-(void)reportWorksheetWarning:(id)arg0 ;
-(void)resetForNewSheet;
-(void)setCellStyleXfsOffset:(NSUInteger)arg0 ;
-(void)setCurrentPart:(id)arg0 ;
-(void)setCurrentRowMaxColumnIndex:(unsigned int)arg0 ;
-(void)setCurrentRowMinColumnIndex:(unsigned int)arg0 ;
-(void)setCurrentSheet:(id)arg0 ;
-(void)setCurrentSheetIndex:(unsigned int)arg0 ;
-(void)setDefaultColumnWidth:(CGFloat)arg0 ;
-(void)setDefaultRowHeight:(CGFloat)arg0 ;
-(void)setOfficeArtState:(id)arg0 ;
-(void)setPredefinedDxfsBeingRead:(BOOL)arg0 ;
-(void)setPredefinedTableStylesRead:(BOOL)arg0 ;
-(void)setResources:(id)arg0 ;
-(void)setSheetDimension:(id)arg0 ;
-(void)setTextBox:(id)arg0 author:(id)arg1 forReference:(id)arg2 ;
-(void)setWorkbook:(id)arg0 ;
-(void)setupNSForXMLFormat:(int)arg0 ;


@end


#endif