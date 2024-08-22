// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIPRINTINGPROGRESS_H
#define UIPRINTINGPROGRESS_H

@class NSString, UIAlertController, UIWindowScene, UIWindow;

#import <Foundation/Foundation.h>

#import "UIPrintingProgressViewController.h"

@interface UIPrintingProgress : NSObject {
    NSString *_printerName;
    id *_cancelHandler;
    CGFloat _startTime;
    CGFloat _displayTime;
    UIAlertController *_alertController;
    UIPrintingProgressViewController *_viewController;
    BOOL _donePrinting;
    BOOL _forceDisplayAsAlert;
    BOOL _presentingAlert;
}


@property BOOL creatingPDF; // ivar: _creatingPDF
@property (weak) UIWindowScene *hostingWindowScene; // ivar: _hostingWindowScene
@property CGFloat lastPageUpdate; // ivar: _lastPageUpdate
@property CGFloat progressAlertDelay; // ivar: _progressAlertDelay
@property (retain) UIWindow *progressAlertWindow; // ivar: _progressAlertWindow
@property (readonly) NSString *title;


-(BOOL)progressVisible;
-(CGFloat)nextPrintDelay;
-(id)initPDFCreationWithHostingWindowScene:(id)arg0 cancelHandler:(id)arg1 ;
-(id)initWithPrinterName:(id)arg0 forceDisplayAsAlert:(BOOL)arg1 hostingWindowScene:(id)arg2 cancelHandler:(id)arg3 ;
-(void)_mainQueue_endProgress;
-(void)_mainQueue_hideProgressAnimated:(BOOL)arg0 ;
-(void)_mainQueue_presentProgressAlert;
-(void)_mainQueue_showProgress:(id)arg0 immediately:(BOOL)arg1 ;
-(void)_presentProgressAlert;
-(void)endProgress;
-(void)hideProgressAnimated:(BOOL)arg0 ;
-(void)progressCancel;
-(void)setPage:(NSInteger)arg0 ofPage:(NSInteger)arg1 ;
-(void)setPrintInfoState:(int)arg0 ;
-(void)showProgress:(id)arg0 immediately:(BOOL)arg1 ;


@end


#endif