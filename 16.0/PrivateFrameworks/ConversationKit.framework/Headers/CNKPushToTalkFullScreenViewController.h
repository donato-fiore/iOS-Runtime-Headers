// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNKPUSHTOTALKFULLSCREENVIEWCONTROLLER_H
#define CNKPUSHTOTALKFULLSCREENVIEWCONTROLLER_H

@class UIViewController;



@interface CNKPushToTalkFullScreenViewController : UIViewController {
    ? $__lazy_storage_$_backgroundMaterialView;
    ? conversationControlsManager;
    ? pttView;
    ? cancellables;
}




-(BOOL)_canShowWhileLocked;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConversationControlsManager:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif