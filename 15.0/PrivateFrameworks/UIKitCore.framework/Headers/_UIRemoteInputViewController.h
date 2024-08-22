// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIREMOTEINPUTVIEWCONTROLLER_H
#define _UIREMOTEINPUTVIEWCONTROLLER_H

@class UIRemoteViewController;



@interface _UIRemoteInputViewController : UIRemoteViewController



+(BOOL)__shouldHostRemoteTextEffectsWindow;
-(BOOL)_canShowWhileLocked;
-(struct CGSize )intrinsicContentSizeForServiceSize:(struct CGSize )arg0 ;
-(void)viewDidInvalidateIntrinsicContentSize;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif