// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDPUICUSTODIANASKHELPVIEWCONTROLLER_H
#define CDPUICUSTODIANASKHELPVIEWCONTROLLER_H

@class OBWelcomeController;


#import "CDPUICustodianAskHelpViewModel.h"

@interface CDPUICustodianAskHelpViewController : OBWelcomeController {
    CDPUICustodianAskHelpViewModel *_viewModel;
}




-(id)initWithViewModel:(id)arg0 ;
-(void)_handleAskForHelpNowAction:(id)arg0 ;
-(void)_handleDontAskForHelpAction:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif