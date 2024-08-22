// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIPRINTERSETUPDISPLAYPINVIEWCONTROLLER_H
#define UIPRINTERSETUPDISPLAYPINVIEWCONTROLLER_H

@class PKPrinter;


#import "UIViewController.h"

@interface UIPrinterSetupDisplayPINViewController : UIViewController

@property (retain, nonatomic) PKPrinter *printer; // ivar: _printer


-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)initWithPrinter:(id)arg0 ;
-(void)enterPIN;
-(void)loadView;
-(void)showDisplayMessage:(NSInteger)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif