// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIPRINTERPICKERCONTROLLER_H
#define UIPRINTERPICKERCONTROLLER_H

@protocol UIPrinterPickerControllerDelegate;

#import <Foundation/Foundation.h>

#import "UIPrinter.h"

@interface UIPrinterPickerController : NSObject {
    id *_completionHandler;
    id *_state;
}


@property (weak, nonatomic) NSObject<UIPrinterPickerControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIPrinter *selectedPrinter; // ivar: _selectedPrinter


+(id)printerPickerControllerWithInitiallySelectedPrinter:(id)arg0 ;
-(BOOL)_setupPickerPanel:(id)arg0 ;
-(BOOL)_shouldShowPrinter:(id)arg0 ;
-(BOOL)presentAnimated:(BOOL)arg0 completionHandler:(id)arg1 ;
-(BOOL)presentAnimated:(BOOL)arg0 hostingScene:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)presentFromBarButtonItem:(id)arg0 animated:(BOOL)arg1 completionHandler:(id)arg2 ;
-(BOOL)presentFromRect:(struct CGRect )arg0 inView:(id)arg1 animated:(BOOL)arg2 completionHandler:(id)arg3 ;
-(id)initWithInitiallySelectedPrinter:(id)arg0 ;
-(void)_printerPickerDidDismiss;
-(void)_printerPickerDidPresent;
-(void)_printerPickerWillDismiss;
-(void)dismissAnimated:(BOOL)arg0 ;


@end


#endif