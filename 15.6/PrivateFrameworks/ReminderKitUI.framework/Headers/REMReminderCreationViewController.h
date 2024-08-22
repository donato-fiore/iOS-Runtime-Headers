// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMREMINDERCREATIONVIEWCONTROLLER_H
#define REMREMINDERCREATIONVIEWCONTROLLER_H

@class UIViewController, _UIResilientRemoteViewContainerViewController, NSError;
@protocol REMReminderCreationPublicViewController, REMReminderCreationDelegate, REMReminderCreationViewServiceViewController;


#import "REMReminderCreationRemoteViewController.h"

@interface REMReminderCreationViewController : UIViewController <REMReminderCreationPublicViewController>



@property (retain, nonatomic, setter=setChildViewController:) _UIResilientRemoteViewContainerViewController *childViewController; // ivar: _childViewController
@property (copy, nonatomic) NSError *deferredErrorDuringPresentation; // ivar: _deferredErrorDuringPresentation
@property (readonly, nonatomic) NSObject<REMReminderCreationDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic, getter=remoteViewController) REMReminderCreationRemoteViewController *remoteViewController;
@property (readonly, nonatomic, getter=viewServiceViewController) NSObject<REMReminderCreationViewServiceViewController> *viewServiceViewController;


-(id)initWithDelegate:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewServiceDidCancel;
-(void)viewServiceDidFailWithError:(id)arg0 ;
-(void)viewServiceDidFinish;
-(void)viewServicePreferredSizeDidChange:(struct CGSize )arg0 ;


@end


#endif