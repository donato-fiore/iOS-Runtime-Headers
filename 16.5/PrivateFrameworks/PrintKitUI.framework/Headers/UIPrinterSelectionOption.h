// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIPRINTERSELECTIONOPTION_H
#define UIPRINTERSELECTIONOPTION_H

@class NSString, PKPrinter;
@protocol UIPrinterBrowserOwner;


#import "UIPrintOption.h"
#import "UIPrinterBrowserViewController.h"

@interface UIPrinterSelectionOption : UIPrintOption <UIPrinterBrowserOwner>



@property (retain, nonatomic) UIPrinterBrowserViewController *browserController; // ivar: _browserController
@property (nonatomic) BOOL contactingPrinter; // ivar: _contactingPrinter
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKPrinter *printer;
@property (readonly) Class superclass;


-(BOOL)filtersPrinters;
-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)initWithPrintInfo:(id)arg0 printPanelViewController:(id)arg1 ;
-(id)printOptionTableViewCell;
-(id)printerDisplayName:(id)arg0 ;
-(id)summary;
-(void)cancelPrinting;
-(void)didSelectPrintOption;
-(void)dismissAnimated:(BOOL)arg0 ;
-(void)setShowContactingPrinter:(BOOL)arg0 ;
-(void)showContacting;


@end


#endif