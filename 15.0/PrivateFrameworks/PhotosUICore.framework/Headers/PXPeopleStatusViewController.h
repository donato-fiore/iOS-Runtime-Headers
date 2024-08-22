// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPEOPLESTATUSVIEWCONTROLLER_H
#define PXPEOPLESTATUSVIEWCONTROLLER_H

@class UIViewController;
@protocol PXPeopleStatusViewDelegate;


#import "PXPeopleStatusView.h"

@interface PXPeopleStatusViewController : UIViewController

@property (weak, nonatomic) NSObject<PXPeopleStatusViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) PXPeopleStatusView *statusView; // ivar: _statusView


-(void)_continuePressed:(id)arg0 ;
-(void)viewDidLoad;
-(void)willTransitionToTraitCollection:(id)arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif