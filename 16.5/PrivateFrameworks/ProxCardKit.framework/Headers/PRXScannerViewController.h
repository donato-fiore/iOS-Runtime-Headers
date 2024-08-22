// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRXSCANNERVIEWCONTROLLER_H
#define PRXSCANNERVIEWCONTROLLER_H

@class UIViewController;


#import "PRXCardContentViewController.h"
#import "PRXScannerIndicatorView.h"

@interface PRXScannerViewController : PRXCardContentViewController

@property (readonly, nonatomic) PRXScannerIndicatorView *indicatorView; // ivar: _indicatorView
@property (readonly, nonatomic) UIViewController *scannerEngine; // ivar: _scannerEngine


-(id)initWithScannerEngine:(id)arg0 ;
-(void)resetConfirmationRing;
-(void)showConfirmationRing;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif