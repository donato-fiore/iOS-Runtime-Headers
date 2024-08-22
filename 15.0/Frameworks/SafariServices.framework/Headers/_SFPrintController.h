// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFPRINTCONTROLLER_H
#define _SFPRINTCONTROLLER_H

@class UIPrintInfo, NSString, NSMutableArray, UIPrintInteractionController, WKWebView;
@protocol UIPrintInteractionControllerDelegate, SFPrintPageRendererDelegate, _SFPrintControllerDelegate, _SFDialogPresenting;

#import <Foundation/Foundation.h>

#import "SFPrintPageRenderer.h"
#import "SFPrintQueueItem.h"
#import "_SFReaderController.h"

@interface _SFPrintController : NSObject <UIPrintInteractionControllerDelegate, SFPrintPageRendererDelegate>

 {
    UIPrintInfo *_cachedPrintInfo;
    SFPrintPageRenderer *_cachedPrintPageRenderer;
    NSString *_urlString;
    NSString *_pageTitle;
    NSString *_loadingDialogTitle;
    NSMutableArray *_printQueue;
    SFPrintQueueItem *_currentItem;
    BOOL _isDisplayingPrintInteractionController;
    BOOL _hasSetupPrintController;
    BOOL _suppressingPrintUI;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_SFPrintControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<_SFDialogPresenting> *dialogPresenter; // ivar: _dialogPresenter
@property (readonly, nonatomic, getter=isDisplayingPrintUI) BOOL displayingPrintUI;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIPrintInfo *printInfo;
@property (readonly, nonatomic) UIPrintInteractionController *printInteractionController; // ivar: _printInteractionController
@property (readonly, nonatomic) SFPrintPageRenderer *printRenderer;
@property (weak, nonatomic) _SFReaderController *readerController; // ivar: _readerController
@property (readonly, nonatomic) NSString *suggestedPDFFileName;
@property (readonly) Class superclass;
@property (weak, nonatomic) WKWebView *webView; // ivar: _webView


-(BOOL)_isContentManaged;
-(BOOL)setUpPrintController;
-(id)_dequeuePrintItem;
-(id)init;
-(id)presentingViewControllerForPrintPageRenderer:(id)arg0 ;
-(id)printInteractionControllerParentViewController:(id)arg0 ;
-(void)_didFinishPrintingCurrentItemWithResult:(NSInteger)arg0 fromPrintInteractionControllerCompletion:(BOOL)arg1 ;
-(void)_enqueuePrintItem:(id)arg0 ;
-(void)_preparePrintInteractionControllerForUsage:(NSInteger)arg0 onlyIfLoaded:(BOOL)arg1 completion:(id)arg2 ;
-(void)_printCurrentItem;
-(void)_shouldAllowBlockedPrintWithCompletionHandler:(id)arg0 ;
-(void)_shouldPrintWhileLoadingForUsage:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)clearQueue;
-(void)dealloc;
-(void)dismissPrintInteractionControllerAnimated:(BOOL)arg0 ;
-(void)getPDFDataForUsage:(NSInteger)arg0 withCompletion:(id)arg1 ;
-(void)handleNextPrintRequest;
-(void)preparePrintInteractionControllerForUsage:(NSInteger)arg0 completion:(id)arg1 ;
-(void)printFrame:(id)arg0 initiatedByWebContent:(BOOL)arg1 completion:(id)arg2 ;
-(void)resetPrintUISuppression;
-(void)updatePrintInfo;


@end


#endif