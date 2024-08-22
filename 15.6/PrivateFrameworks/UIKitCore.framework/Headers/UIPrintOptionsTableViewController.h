// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIPRINTOPTIONSTABLEVIEWCONTROLLER_H
#define UIPRINTOPTIONSTABLEVIEWCONTROLLER_H

@class UIViewController<UIPrintAppExtensionProtocol>, NSString, NSArray;
@protocol UIPopoverPresentationControllerDelegate;


#import "UITableViewController.h"
#import "UIPrintApplicationSection.h"
#import "UIPrinter.h"
#import "UIPrintFinishingOptionsSection.h"
#import "UIPrintMediaQualitySection.h"
#import "UIPrintMoreOptionsSection.h"
#import "UIPrintInfo.h"
#import "UIPrintPanelViewController.h"
#import "UIPrinterAttributesService.h"
#import "UIPrintScalingSection.h"
#import "UIPrintStandardOptionsSection.h"

@interface UIPrintOptionsTableViewController : UITableViewController <UIPopoverPresentationControllerDelegate>



@property (retain, nonatomic) UIViewController<UIPrintAppExtensionProtocol> *appPrintExtensionController; // ivar: _appPrintExtensionController
@property (retain, nonatomic) UIPrintApplicationSection *appSection; // ivar: _appSection
@property (retain, nonatomic) UIPrinter *currentPrinter; // ivar: _currentPrinter
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIPrintFinishingOptionsSection *finishingOptionsSection; // ivar: _finishingOptionsSection
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIPrintMediaQualitySection *mediaQualitySection; // ivar: _mediaQualitySection
@property (retain, nonatomic) UIPrintMoreOptionsSection *moreOptionsSection; // ivar: _moreOptionsSection
@property (retain, nonatomic) UIPrintInfo *printInfo; // ivar: _printInfo
@property (retain, nonatomic) NSArray *printOptionSections; // ivar: _printOptionSections
@property (weak, nonatomic) UIPrintPanelViewController *printPanelViewController; // ivar: _printPanelViewController
@property (retain, nonatomic) UIPrinterAttributesService *printerAttributesService; // ivar: _printerAttributesService
@property (retain, nonatomic) NSString *printerWarnings; // ivar: _printerWarnings
@property (retain, nonatomic) UIPrintScalingSection *scalingSection; // ivar: _scalingSection
@property (nonatomic) BOOL showGatheringPrinterInfo; // ivar: _showGatheringPrinterInfo
@property (retain, nonatomic) UIPrintStandardOptionsSection *standardOptionsSection; // ivar: _standardOptionsSection
@property (readonly) Class superclass;


-(BOOL)canDismissPrintOptions;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithTableView:(id)arg0 printInfo:(id)arg1 printPanelViewController:(id)arg2 ;
-(id)printOptionAtIndexPath:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(void)setShowContactingPrinter:(BOOL)arg0 ;
-(void)startPrinterWarningPoll;
-(void)stopPrinterWarningPolling;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updatePrintSectionList;
-(void)updatePrinterInfo;
-(void)updateShowGatheringPrinterInfo;
-(void)updateWarnings:(id)arg0 forPrinter:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif