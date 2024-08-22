// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIPRINTERPICKERVIEWCONTROLLER_H
#define UIPRINTERPICKERVIEWCONTROLLER_H

@class UIViewController, UINavigationController, UIPopoverController, UIWindow, NSString, PKPrinter;
@protocol UIPrinterBrowserOwner, UINavigationControllerDelegate;


#import "UIPrinterPickerController.h"
#import "UIPrinterBrowserViewController.h"

@interface UIPrinterPickerViewController : UIViewController <UIPrinterBrowserOwner, UINavigationControllerDelegate>

 {
    UIViewController *_parentController;
    UIPrinterPickerController *_printerPickerController;
    UINavigationController *_navigationController;
    UIPrinterBrowserViewController *_printerBrowserViewController;
    UIViewController *_originalViewControllerInNav;
    id *_originalNavControllerDelegate;
    UIPopoverController *_poverController;
    UIWindow *_window;
    BOOL _dismissed;
    BOOL _animated;
    BOOL _observingRotation;
    BOOL _parentHasNoPopover;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKPrinter *printer; // ivar: _printer
@property (readonly) Class superclass;
@property BOOL userSelectedPrinter; // ivar: _userSelectedPrinter


-(BOOL)filtersPrinters;
-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(BOOL)shouldShowPrinter:(id)arg0 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)initWithPrinterPickerController:(id)arg0 inParentController:(id)arg1 ;
-(void)_keyWindowWillRotate:(id)arg0 ;
-(void)_presentInParentAnimated:(BOOL)arg0 ;
-(void)_presentWindow;
-(void)cancelPrinting;
-(void)dealloc;
-(void)dismissAnimated:(BOOL)arg0 ;
-(void)dismissPrinterPickerAnimated:(BOOL)arg0 ;
-(void)navigationController:(id)arg0 didShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)popoverControllerDidDismissPopover:(id)arg0 ;
-(void)presentPrinterPickerPanelAnimated:(BOOL)arg0 hostingScene:(id)arg1 ;
-(void)presentPrinterPickerPanelFromBarButtonItem:(id)arg0 animated:(BOOL)arg1 ;
-(void)presentPrinterPickerPanelFromRect:(struct CGRect )arg0 inView:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif