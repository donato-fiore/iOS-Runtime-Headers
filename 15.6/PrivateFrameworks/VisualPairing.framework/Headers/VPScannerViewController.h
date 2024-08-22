// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VPSCANNERVIEWCONTROLLER_H
#define VPSCANNERVIEWCONTROLLER_H

@class UIViewController, UIButton, UIView, UILabel, NSString;


#import "VPScannerView.h"

@interface VPScannerViewController : UIViewController

@property (retain, nonatomic) UIButton *cancelButton; // ivar: _cancelButton
@property (retain, nonatomic) UIView *containerView; // ivar: _containerView
@property (copy, nonatomic) id *eventHandler; // ivar: _eventHandler
@property (retain, nonatomic) UIButton *pairManuallyButton; // ivar: _pairManuallyButton
@property (copy, nonatomic) id *scannedCodeHandler; // ivar: _scannedCodeHandler
@property (retain, nonatomic) VPScannerView *scannerView; // ivar: _scannerView
@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (copy, nonatomic) NSString *titleMessage; // ivar: _titleMessage
@property (retain, nonatomic) UIView *viewfinderView; // ivar: _viewfinderView


+(id)instantiateViewController;
-(BOOL)_canShowWhileLocked;
-(NSUInteger)supportedInterfaceOrientations;
-(void)handleCancelButton:(id)arg0 ;
-(void)handlePairManuallyButton:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif