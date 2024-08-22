// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIPRINTINTERACTIONCONTROLLER_H
#define UIPRINTINTERACTIONCONTROLLER_H

@class NSOperationQueue, UIWindow, NSURL, UIWindowScene, NSArray, NSString, NSMutableSet, PKPrintSettings, PKPrinter;
@protocol UIPrintInteractionControllerDelegate, UIPrintInteractionControllerActivityDelegate;

#import <Foundation/Foundation.h>

#import "UIPrintInfo.h"
#import "UIPrintPageRenderer.h"
#import "UIPrintPaper.h"
#import "UIPrintFormatter.h"
#import "UIPrintPanelViewController.h"
#import "UIPrintingProgress.h"

@interface UIPrintInteractionController : NSObject {
    NSUInteger _backgroundTaskIdentifier;
    NSOperationQueue *_previewQueue;
    id *_temporaryRetainCycle;
    NSInteger _currentRenderingQuality;
    UIWindow *_passwordAlertWindow;
    NSURL *_nupFileURL;
}


@property (copy) id *_completionHandler; // ivar: _completionHandler
@property (retain) UIPrintInfo *activePrintInfo; // ivar: _activePrintInfo
@property NSInteger currentPage; // ivar: _currentPage
@property _NSRange currentRange; // ivar: _currentRange
@property (weak, nonatomic) NSObject<UIPrintInteractionControllerDelegate> *delegate; // ivar: _delegate
@property (retain) UIPrintPageRenderer *formatterRenderer; // ivar: _formatterRenderer
@property (retain, nonatomic) UIWindowScene *hostingWindowScene; // ivar: _hostingWindowScene
@property (nonatomic) BOOL isContentManaged; // ivar: _isContentManaged
@property BOOL manualPrintPageEnabled; // ivar: _manualPrintPageEnabled
@property (nonatomic) NSInteger pageCount; // ivar: _pageCount
@property NSInteger pageCountWithRanges; // ivar: _pageCountWithRanges
@property (retain, nonatomic) NSArray *pageRanges; // ivar: _pageRanges
@property NSInteger pagesDrawn; // ivar: _pagesDrawn
@property (retain, nonatomic) UIPrintPaper *paper; // ivar: _paper
@property (retain) NSString *pdfPassword; // ivar: _pdfPassword
@property (retain) NSMutableSet *previewStates; // ivar: _previewStates
@property (weak, nonatomic) NSObject<UIPrintInteractionControllerActivityDelegate> *printActivityDelegate; // ivar: _printActivityDelegate
@property (retain, nonatomic) UIPrintFormatter *printFormatter; // ivar: _printFormatter
@property (retain, nonatomic) UIPrintInfo *printInfo; // ivar: _printInfo
@property int printInfoState; // ivar: _printInfoState
@property (retain, nonatomic) UIPrintPageRenderer *printPageRenderer; // ivar: _printPageRenderer
@property (retain) UIPrintPanelViewController *printPanelViewController; // ivar: _printPanelViewController
@property (readonly, nonatomic) UIPrintPaper *printPaper; // ivar: _printPaper
@property (retain) PKPrintSettings *printSettings; // ivar: _printSettings
@property BOOL printStateActive; // ivar: _printStateActive
@property (retain, nonatomic) PKPrinter *printer; // ivar: _printer
@property (copy, nonatomic) id *printingItem; // ivar: _printingItem
@property (copy, nonatomic) NSArray *printingItems; // ivar: _printingItems
@property (retain) UIPrintingProgress *printingProgress; // ivar: _printingProgress
@property (retain) NSURL *saveFileURL; // ivar: _saveFileURL
@property BOOL showPrintingProgress; // ivar: _showPrintingProgress
@property (nonatomic) BOOL showsNumberOfCopies; // ivar: _showsNumberOfCopies
@property (nonatomic) BOOL showsPageRange; // ivar: _showsPageRange
@property (nonatomic) BOOL showsPaperOrientation; // ivar: _showsPaperOrientation
@property (nonatomic) BOOL showsPaperSelectionForLoadedPapers; // ivar: _showsPaperSelectionForLoadedPapers
@property (nonatomic) BOOL showsScalingFactor; // ivar: _showsScalingFactor
@property BOOL supressNotifyDismissed; // ivar: _supressNotifyDismissed
@property (retain) NSURL *tempPreviewFileURL; // ivar: _tempPreviewFileURL


+(BOOL)canPrintData:(id)arg0 ;
+(BOOL)canPrintURL:(id)arg0 ;
+(BOOL)isPrintingAvailable;
+(id)printableUTIs;
+(id)sharedPrintController;
-(BOOL)_canPrintPDFData:(id)arg0 ;
-(BOOL)_canPrintPDFURL:(id)arg0 ;
-(BOOL)_canShowAnnotations;
-(BOOL)_canShowColor;
-(BOOL)_canShowCopies;
-(BOOL)_canShowDuplex;
-(BOOL)_canShowLayout;
-(BOOL)_canShowOrientation;
-(BOOL)_canShowPageRange;
-(BOOL)_canShowPaperList;
-(BOOL)_canShowPreview;
-(BOOL)_canShowPunch;
-(BOOL)_canShowScaling;
-(BOOL)_canShowStaple;
-(BOOL)_fullRangeNeeded;
-(BOOL)_isPageCancelled:(id)arg0 ;
-(BOOL)_pageRendererAvailable;
-(BOOL)_presentAnimated:(BOOL)arg0 hostingScene:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)_setupPrintPanel:(id)arg0 ;
// -(BOOL)_setupPrintPanel:(id)arg0 forPDFGenerationOnly:(unk)arg1  ;
-(BOOL)needRedrawWithNUp;
-(BOOL)presentAnimated:(BOOL)arg0 completionHandler:(id)arg1 ;
-(BOOL)presentAnimated:(BOOL)arg0 hostingScene:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)presentFromBarButtonItem:(id)arg0 animated:(BOOL)arg1 completionHandler:(id)arg2 ;
-(BOOL)presentFromRect:(struct CGRect )arg0 inView:(id)arg1 animated:(BOOL)arg2 completionHandler:(id)arg3 ;
-(BOOL)printToPrinter:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)savePDFToURL:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)savePDFToURL:(id)arg0 showProgress:(BOOL)arg1 completionHandler:(id)arg2 ;
-(BOOL)savePDFToURL:(id)arg0 showProgress:(BOOL)arg1 hostingScene:(id)arg2 completionHandler:(id)arg3 ;
-(CGFloat)_getCutLengthFromDelegateForPaper:(id)arg0 ;
-(id)_convertToPrintableItem:(id)arg0 ;
-(id)_currentPrintInfo;
-(id)_getChosenPaperFromDelegateForPaperList:(id)arg0 ;
-(id)_newPDFURLWithPath:(id)arg0 isContentManaged:(BOOL)arg1 ;
-(id)_paperForContentType:(NSInteger)arg0 ;
-(id)_paperForPDFItem:(id)arg0 withDuplexMode:(NSInteger)arg1 ;
-(id)_printPageRenderer:(id)arg0 ;
-(id)_tempFilePath;
-(id)drawPagesWithRange:(struct _NSRange )arg0 withExistsURL:(id)arg1 withPreviewState:(id)arg2 ;
-(id)init;
-(id)redrawPDFwithPageRange:(id)arg0 ;
-(id)rendererToUse;
-(struct CGContext *)_newSaveContext:(id)arg0 withMediaRect:(struct CGRect )arg1 ;
-(struct CGRect )_mediaRect;
-(struct CGSize )_printItemContentSize;
-(struct CGSize )_printablePDFDataSize:(id)arg0 ;
-(struct CGSize )_printablePDFURLSize:(id)arg0 ;
-(struct _NSRange )_fullPagesRange;
-(void)_addPDFWithData:(id)arg0 toContext:(struct CGContext *)arg1 ;
-(void)_cancelAllPreviewGeneration;
-(void)_cancelManualPrintPage;
-(void)_cancelPreviewQueue:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)_cleanPrintState;
-(void)_completePrintPageWithError:(id)arg0 ;
-(void)_drawPageWithItem:(id)arg0 toContext:(struct CGContext *)arg1 ;
-(void)_enableManualPrintPage:(BOOL)arg0 ;
-(void)_endPrintJobWithAction:(NSInteger)arg0 error:(id)arg1 ;
-(void)_ensurePDFIsUnlockedFirstAttempt:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)_generatePDFForQuickLookCompletion:(id)arg0 ;
-(void)_generatePDFInRange:(struct _NSRange )arg0 useFullRange:(BOOL)arg1 withQuality:(NSInteger)arg2 completion:(id)arg3 ;
-(void)_generatePDFWithNupForPrintingCompletion:(id)arg0 ;
-(void)_generatePrintPreview:(id)arg0 ;
-(void)_generatePrintPreviewWithRange:(struct _NSRange )arg0 useFullRange:(BOOL)arg1 completion:(id)arg2 ;
-(void)_manualPrintPage;
-(void)_preparePrintInfo;
-(void)_printItemAsync:(id)arg0 completionHandler:(id)arg1 ;
-(void)_printPage;
-(void)_printPageWithDelay:(CGFloat)arg0 ;
-(void)_printPanelDidDismissWithAction:(NSInteger)arg0 ;
-(void)_printPanelDidPresent;
-(void)_printPanelWillDismissWithAction:(NSInteger)arg0 ;
-(void)_startPrinting;
-(void)_updateCutterBehavior;
-(void)_updatePageCount;
-(void)_updatePrintInfoWithAnnotations;
-(void)_updatePrintPaper;
-(void)_updateRendererWithQuality:(NSInteger)arg0 ;
-(void)dealloc;
-(void)dismissAnimated:(BOOL)arg0 ;
-(void)removeFileAtURL:(id)arg0 ;


@end


#endif