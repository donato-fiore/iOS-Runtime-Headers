// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CFXNONTRANSFORMEDLIVECAPTURECONTAINERVIEWCONTROLLER_H
#define CFXNONTRANSFORMEDLIVECAPTURECONTAINERVIEWCONTROLLER_H

@class UIViewController, UIView;


#import "CFXLiveCaptureViewController.h"

@interface CFXNonTransformedLiveCaptureContainerViewController : UIViewController

@property (retain, nonatomic) UIView *liveCaptureContainer; // ivar: _liveCaptureContainer
@property (retain, nonatomic) UIView *liveCaptureContainerContainer; // ivar: _liveCaptureContainerContainer
@property (readonly, nonatomic) CFXLiveCaptureViewController *liveCaptureViewController; // ivar: _liveCaptureViewController


-(void)prepareForSegue:(id)arg0 sender:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif