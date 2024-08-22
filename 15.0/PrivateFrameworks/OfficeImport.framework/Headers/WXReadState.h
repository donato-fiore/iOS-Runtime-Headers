// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WXREADSTATE_H
#define WXREADSTATE_H

@class NSMutableDictionary, NSMutableArray;
@protocol TCCancelDelegate;


#import "OCXReadState.h"
#import "WDDocument.h"
#import "OITSUNoCopyDictionary.h"
#import "OCPPackagePart.h"
#import "WXOAVReadState.h"
#import "OAXDrawingState.h"
#import "WDCharacterRun.h"
#import "CXNamespace.h"

@interface WXReadState : OCXReadState {
    WDDocument *mDocument;
    OITSUNoCopyDictionary *mTextNodesToBeAdded;
    OITSUNoCopyDictionary *mMapBookmarkIdToName;
    OITSUNoCopyDictionary *mMapAnnotationIdToAnnotation;
    OITSUNoCopyDictionary *mMapAnnotationParaIdToAnnotation;
    NSMutableDictionary *mMapFlowIdToTextBox;
    OCPPackagePart *mPackagePart;
    OCPPackagePart *mAnnotationPart;
    OCPPackagePart *mAnnotationExtendedPart;
    ? mFootnoteDocument;
    ? mFootnotes;
    ? mEndnoteDocument;
    ? mEndnotes;
    ? mAnnotationDocument;
    ? mAnnotations;
    ? mAnnotationExtendedDocument;
    ? mAnnotationsExtended;
    NSMutableArray *mDeleteAuthorStack;
    NSMutableArray *mDeleteDateStack;
    NSMutableArray *mEditAuthorStack;
    NSMutableArray *mEditDateStack;
    NSMutableArray *mFormatAuthorStack;
    NSMutableArray *mFormatDateStack;
    NSMutableArray *mPendingCommentNodes;
    NSMutableArray *mPendingBookmarkNodes;
    WXOAVReadState *mWXOavState;
    OAXDrawingState *mDrawingState;
    WDCharacterRun *mReadSymbolTo;
    BOOL mNewSectionRequested;
    NSUInteger mCurrentRowCNFStyle;
    NSUInteger mCurrentCellCNFStyle;
    BOOL mCurrentTableWraps;
    BOOL mIsThumbnail;
}


@property (retain, nonatomic) CXNamespace *WXDrawingNamespace; // ivar: mWXDrawingNamespace
@property (retain, nonatomic) CXNamespace *WXGroupNamespace; // ivar: mWXGroupNamespace
@property (retain, nonatomic) CXNamespace *WXMainNamespace; // ivar: mWXMainNamespace
@property (retain, nonatomic) CXNamespace *WXOOBibliographyNamespace; // ivar: mWXOOBibliographyNamespace
@property (retain, nonatomic) CXNamespace *WXRelationshipNamespace; // ivar: mWXRelationshipNamespace
@property (retain, nonatomic) CXNamespace *WXShapeNamespace; // ivar: mWXShapeNamespace
@property (retain, nonatomic) NSObject<TCCancelDelegate> *cancelDelegate; // ivar: mCancelDelegate
@property (nonatomic) int currentOfficeArtTextType; // ivar: mCurrentOfficeArtTextType
@property (nonatomic) BOOL readingMath; // ivar: mReadingMath


-(?)addPendingBookmark;
-(?)addPendingComment;
-(?)addTextnode;
-(?)xmlAnnotationExtendedWithParaId;
-(?)xmlAnnotationWithID;
-(?)xmlEndnoteWithID;
-(?)xmlFootnoteWithID;
-(BOOL)currentTableWraps;
-(BOOL)hasAnnotations;
-(BOOL)hasAnnotationsExtended;
-(BOOL)isNewSectionRequested;
-(BOOL)isThumbnail;
-(NSUInteger)currentCellCNFStyle;
-(NSUInteger)currentRowCNFStyle;
-(id)annotationExtendedPart;
-(id)annotationPart;
-(id)annotationWithId:(NSInteger)arg0 ;
-(id)annotationWithParaId:(unsigned int)arg0 ;
-(id)bookmarkName:(NSInteger)arg0 ;
-(id)currentDeleteAuthor;
-(id)currentDeleteDate;
-(id)currentEditAuthor;
-(id)currentEditDate;
-(id)currentFormatAuthor;
-(id)currentFormatDate;
-(id)document;
-(id)drawingState;
-(id)init;
-(id)initNoStacksWith:(id)arg0 ;
-(id)nodesToBeAdded:(id)arg0 ;
-(id)packagePart;
-(id)pendingBookmarks;
-(id)pendingComments;
-(id)readSymbolTo;
-(id)textBoxForFlowId:(id)arg0 ;
-(id)wxoavState;
-(void)addAnnotationId:(NSInteger)arg0 annotation:(id)arg1 ;
-(void)addAnnotationParaId:(unsigned int)arg0 annotation:(id)arg1 ;
-(void)addBookmarkId:(NSInteger)arg0 name:(id)arg1 ;
-(void)clearOutNodesToBeAdded:(id)arg0 ;
-(void)clearPendingBookmarks;
-(void)clearPendingComments;
-(void)dealloc;
-(void)popDeleteAuthorDate;
-(void)popEditAuthorDate;
-(void)popFormatAuthorDate;
-(void)pushDeleteAuthor:(id)arg0 date:(id)arg1 ;
-(void)pushEditAuthor:(id)arg0 date:(id)arg1 ;
-(void)pushFormatAuthor:(id)arg0 date:(id)arg1 ;
-(void)setAnnotationExtendedPart:(id)arg0 ;
-(void)setAnnotationPart:(id)arg0 ;
-(void)setCurrentCellCNFStyle:(NSUInteger)arg0 ;
-(void)setCurrentRowCNFStyle:(NSUInteger)arg0 ;
-(void)setCurrentTableWraps:(BOOL)arg0 ;
-(void)setDocument:(id)arg0 ;
-(void)setDocumentPart:(id)arg0 ;
-(void)setIsThumbnail:(BOOL)arg0 ;
-(void)setNewSectionRequested:(BOOL)arg0 ;
-(void)setPackagePart:(id)arg0 ;
-(void)setReadSymbolTo:(id)arg0 ;
-(void)setTextBox:(id)arg0 forFlowId:(id)arg1 ;
-(void)setupNSForXMLFormat:(int)arg0 ;


@end


#endif