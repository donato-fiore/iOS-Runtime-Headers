// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9SIRISETUP31VOICESELECTIONWELCOMECONTROLLER_H
#define _TTC9SIRISETUP31VOICESELECTIONWELCOMECONTROLLER_H

@class OBTableWelcomeController;



@interface _TtC9SiriSetup31VoiceSelectionWelcomeController : OBTableWelcomeController {
    ? delegate;
    ? orbView;
    ? currentVoiceSelection;
    ? voiceOptionsView;
    ? voiceSelectionPresenter;
    ? continueButton;
}




-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 adoptTableViewScrollView:(BOOL)arg3 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 symbolName:(id)arg2 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 symbolName:(id)arg2 adoptTableViewScrollView:(BOOL)arg3 ;
-(void)chooseForMeTapped;
-(void)continueTapped;


@end


#endif