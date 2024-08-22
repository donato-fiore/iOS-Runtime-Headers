// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC9SIRISETUP30VOICETRAININGWELCOMECONTROLLER_H
#define _TTC9SIRISETUP30VOICETRAININGWELCOMECONTROLLER_H

@class OBWelcomeController;



@interface _TtC9SiriSetup30VoiceTrainingWelcomeController : OBWelcomeController {
    ? delegate;
    ? orbView;
    ? viewModel;
}




-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 contentLayout:(NSInteger)arg3 ;
-(void)secondaryButtonTapped;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif