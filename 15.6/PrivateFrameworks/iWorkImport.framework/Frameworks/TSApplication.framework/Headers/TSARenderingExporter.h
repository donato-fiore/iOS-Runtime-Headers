// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSARENDERINGEXPORTER_H
#define TSARENDERINGEXPORTER_H

@class TSDImager, NSDictionary, TSDBitmapRenderingQualityInfo, NSString, TSUProgress, TSUProgressContext;
@protocol TSKRenderingExporter, OS_dispatch_queue, TSARenderingExporterDelegate;

#import <Foundation/Foundation.h>

#import "TSADocumentRoot.h"
#import "TSAPdfTagger.h"

@interface TSARenderingExporter : NSObject <TSKRenderingExporter>

 {
    TSADocumentRoot *mDocumentRoot;
    TSDImager *mImager;
    NSObject<OS_dispatch_queue> *mImagerAccessLock;
    NSObject<TSARenderingExporterDelegate> *mRenderingExporterDelegate;
    BOOL mIsCancelled;
    BOOL mIsQuit;
    BOOL mPaginate;
    BOOL mDoesDrawAllPages;
    NSDictionary *mOptions;
    TSDBitmapRenderingQualityInfo *mBitmapRenderingQualityInfo;
    TSAPdfTagger *mPdfTagger;
}


@property (readonly, nonatomic) CGRect boundsRect;
@property (readonly, nonatomic) BOOL canExportInBackground;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *documentSpecificTypeUTI;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCancelled;
@property (readonly, nonatomic) BOOL isExportSupported;
@property (readonly, nonatomic) BOOL needsSupplementalFiles;
@property (readonly, nonatomic) NSUInteger pageCount;
@property (nonatomic) BOOL paginate;
@property (readonly, nonatomic) TSUProgress *progress;
@property (retain) TSUProgressContext *progressContext; // ivar: mProgressContext
@property (readonly, nonatomic) CGFloat progressForCurrentPage;
@property (readonly, nonatomic) NSString *savePanelMessage;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *typeUTI;
@property (readonly, nonatomic) CGRect unscaledClipRect;


+(Class)pdfTaggerClass;
-(BOOL)drawCurrentPageInContext:(struct CGContext *)arg0 viewScale:(CGFloat)arg1 unscaledClipRect:(struct CGRect )arg2 createPage:(BOOL)arg3 ;
-(BOOL)exportToURL:(id)arg0 delegate:(id)arg1 error:(*id)arg2 ;
-(BOOL)exportToURL:(id)arg0 pageNumber:(NSUInteger)arg1 delegate:(id)arg2 error:(*id)arg3 ;
-(BOOL)incrementPage;
-(BOOL)isQuit;
-(BOOL)p_exportToURL:(id)arg0 pageNumber:(NSUInteger)arg1 delegate:(id)arg2 error:(*id)arg3 ;
-(BOOL)preparePage:(NSUInteger)arg0 ;
-(BOOL)setInfosToCurrentPage;
-(BOOL)setUpAndDrawCurrentPageInContext:(struct CGContext *)arg0 viewScale:(CGFloat)arg1 unscaledClipRect:(struct CGRect )arg2 createPage:(BOOL)arg3 ;
-(BOOL)shouldSuppressBackgroundsForCurrentPage;
-(CGFloat)totalProgess;
-(Class)imagerClass;
-(id)bitmapRenderingQualityInfo;
-(id)currentInfos;
-(id)documentRoot;
-(id)imager;
-(id)initWithDocumentRoot:(id)arg0 ;
-(id)initWithDocumentRoot:(id)arg0 imager:(id)arg1 ;
-(id)p_renderingExporterDelegate;
-(id)pdfTagger;
-(void)cancel;
-(void)drawAllPagesWithContext:(struct CGContext *)arg0 returnSuccess:(*BOOL)arg1 ;
-(void)drawCurrentPageWithContext:(struct CGContext *)arg0 returnSuccess:(*BOOL)arg1 ;
-(void)finalizeContext:(struct CGContext *)arg0 ;
-(void)p_drawCurrentPageWithContext:(struct CGContext *)arg0 returnSuccess:(*BOOL)arg1 createPage:(BOOL)arg2 ;
-(void)performBlockWithImager:(id)arg0 ;
-(void)quit;
-(void)setOptions:(id)arg0 ;
-(void)setUpPdfTaggerWithOptions:(id)arg0 ;
-(void)setup;
-(void)teardown;
-(void)waitForRecalcToFinish;


@end


#endif