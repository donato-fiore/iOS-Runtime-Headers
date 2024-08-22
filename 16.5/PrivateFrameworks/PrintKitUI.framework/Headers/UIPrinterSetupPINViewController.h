// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIPRINTERSETUPPINVIEWCONTROLLER_H
#define UIPRINTERSETUPPINVIEWCONTROLLER_H

@class UIViewController, PKPrinter, UIScrollView;


#import "UIPrinterSetupPINView.h"
#import "UIPrinterSetupConnectingView.h"

@interface UIPrinterSetupPINViewController : UIViewController

@property (retain, nonatomic) UIPrinterSetupPINView *PINView; // ivar: _PINView
@property (retain, nonatomic) UIPrinterSetupConnectingView *connectingView; // ivar: _connectingView
@property (retain, nonatomic) PKPrinter *printer; // ivar: _printer
@property (retain, nonatomic) UIScrollView *scrollView; // ivar: _scrollView


-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)initWithPrinter:(id)arg0 ;
-(void)connectToPrinter;
-(void)connected:(BOOL)arg0 ;
-(void)dealloc;
-(void)loadView;
-(void)showFailure;
-(void)showSetup;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif