// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBWINDOWEDACCESSORYVIEWCONTROLLER_H
#define SBWINDOWEDACCESSORYVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol SBWindowedAccessoryViewDelegate, SBWindowedAccessoryViewControllerDelegate;


#import "SBWindowedAccessoryView.h"

@interface SBWindowedAccessoryViewController : UIViewController <SBWindowedAccessoryViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBWindowedAccessoryViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) SBWindowedAccessoryView *windowedAccessoryView; // ivar: _windowedAccessoryView


-(BOOL)_canShowWhileLocked;
-(void)forceDetachWindowedAcessoryButtonTapped:(id)arg0 ;
-(void)loadView;
-(void)viewDidLoad;


@end


#endif