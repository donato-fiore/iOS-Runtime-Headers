// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIPRINTPANELVIEWCONTROLLER_H
#define UIPRINTPANELVIEWCONTROLLER_H

@class UIViewController, UIActivityViewController, UIViewController<UIPrintAppExtensionProtocol>, NSString, NSArray, NSURL, UIPopoverController, NSLayoutConstraint, UIView, UITableView;
@protocol UIPopoverPresentationControllerDelegate, UIPrintPanelAppearanceDelegate, OS_dispatch_queue;


#import "_UIPrintMessageAndSpinnerView.h"
#import "UIPrintPreviewInfo.h"
#import "UIPrintPreviewViewController.h"
#import "UIPrintInfo.h"
#import "UIPrintInteractionController.h"
#import "UIPrintPanelNavigationController.h"
#import "UIPrintOptionsTableViewController.h"
#import "UIPrintPanelWindow.h"

@interface UIPrintPanelViewController : UIViewController <UIPopoverPresentationControllerDelegate, UIPrintPanelAppearanceDelegate>

 {
    NSObject<OS_dispatch_queue> *_lookupPrinterQueue;
}


@property (retain, nonatomic) UIActivityViewController *activityViewController; // ivar: _activityViewController
@property (nonatomic) BOOL animated; // ivar: _animated
@property (retain, nonatomic) UIViewController<UIPrintAppExtensionProtocol> *appPrintExtensionController; // ivar: _appPrintExtensionController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dismissed; // ivar: _dismissed
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *horizScrollPrintPanelConstraints; // ivar: _horizScrollPrintPanelConstraints
@property (retain) NSArray *lastUsedPrinterArray; // ivar: _lastUsedPrinterArray
@property (nonatomic) NSInteger lastUsedPrinterIndex; // ivar: _lastUsedPrinterIndex
@property (retain, nonatomic) _UIPrintMessageAndSpinnerView *messageAndSpinner; // ivar: _messageAndSpinner
@property (weak, nonatomic) UIViewController *parentController; // ivar: _parentController
@property (retain, nonatomic) NSURL *pdfURL; // ivar: _pdfURL
@property (retain, nonatomic) UIPopoverController *poverController; // ivar: _poverController
@property (retain, nonatomic) NSLayoutConstraint *previewHeightConstraint; // ivar: _previewHeightConstraint
@property (retain, nonatomic) UIPrintPreviewInfo *previewInfo; // ivar: _previewInfo
@property (retain, nonatomic) UIView *previewPanelView; // ivar: _previewPanelView
@property (retain, nonatomic) UIView *previewSeparatorView; // ivar: _previewSeparatorView
@property (copy, nonatomic) id *previewUpdateCompletionHandler; // ivar: _previewUpdateCompletionHandler
@property (retain, nonatomic) UIPrintPreviewViewController *previewViewController; // ivar: _previewViewController
@property (retain, nonatomic) UIPrintInfo *printInfo; // ivar: _printInfo
@property (retain, nonatomic) UIPrintInteractionController *printInteractionController; // ivar: _printInteractionController
@property (retain, nonatomic) UIPrintPanelNavigationController *printOptionsNavController; // ivar: _printOptionsNavController
@property (retain, nonatomic) UITableView *printOptionsTableView; // ivar: _printOptionsTableView
@property (retain, nonatomic) UIPrintOptionsTableViewController *printOptionsTableViewController; // ivar: _printOptionsTableViewController
@property (retain, nonatomic) NSLayoutConstraint *printOptionsWidthConstraint; // ivar: _printOptionsWidthConstraint
@property (retain, nonatomic) UIPrintPanelNavigationController *printPanelNavigationController; // ivar: _printPanelNavigationController
@property (retain, nonatomic) UIPrintPanelWindow *printPanelWindow; // ivar: _printPanelWindow
@property (nonatomic) BOOL showingPreview; // ivar: _showingPreview
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *vertScrollPrintPanelConstraints; // ivar: _vertScrollPrintPanelConstraints


+(BOOL)_preventsAppearanceProxyCustomization;
-(BOOL)canShowAnnotations;
-(BOOL)showPageRange;
-(BOOL)showingLayout;
-(BOOL)showingVerticalPreview;
-(id)initWithPrintInterationController:(id)arg0 inParentController:(id)arg1 ;
-(id)keyCommands;
-(id)printerDisplayName:(id)arg0 ;
-(struct _NSRange )previewVisibleRange;
-(void)_generatePDFForQuickLookCompletion:(id)arg0 ;
-(void)_presentInParentAnimated:(BOOL)arg0 ;
-(void)addCanelButtonToNavItem:(id)arg0 ;
-(void)addPrintShareButtonsToNavItem:(id)arg0 ;
-(void)backButtonPressed:(id)arg0 ;
-(void)cancelButtonPressed:(id)arg0 ;
-(void)cancelPrinting;
-(void)dealloc;
-(void)dismissAnimated:(BOOL)arg0 ;
-(void)dismissPrintPanelWithAction:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)loadView;
-(void)lookupLastUsedPrinter;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)presentPrintPanelAnimated:(BOOL)arg0 hostingScene:(id)arg1 ;
-(void)presentPrintPanelFromBarButtonItem:(id)arg0 animated:(BOOL)arg1 ;
-(void)presentPrintPanelFromRect:(struct CGRect )arg0 inView:(id)arg1 animated:(BOOL)arg2 ;
-(void)printButtonPressed:(id)arg0 ;
-(void)printNavigationConrollerDidDismiss;
-(void)printPanelDidDisappear;
-(void)readPrintOptions;
-(void)setPdfFileURL:(id)arg0 shouldRenderOnChosenPaper:(BOOL)arg1 completed:(BOOL)arg2 pdfPassword:(id)arg3 ;
-(void)setPrinter:(id)arg0 ;
-(void)setShowPreviewGenerating:(BOOL)arg0 ;
-(void)shareButtonPress:(id)arg0 ;
-(void)showPreviewGenerating;
-(void)startNewPreviewBlock:(struct _NSRange )arg0 ;
-(void)startPrinting;
-(void)updateLayout;
-(void)updatePageRange;
-(void)updatePreveiw;
-(void)updatePreviewLayoutConstraints;
-(void)updatePrintPreviewInfo;
-(void)updateViewConstraints;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif