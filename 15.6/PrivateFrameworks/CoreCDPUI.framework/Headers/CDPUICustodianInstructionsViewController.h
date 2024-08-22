// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDPUICUSTODIANINSTRUCTIONSVIEWCONTROLLER_H
#define CDPUICUSTODIANINSTRUCTIONSVIEWCONTROLLER_H

@class OBTextWelcomeController;


#import "CDPUICustodianInstructionsViewModel.h"

@interface CDPUICustodianInstructionsViewController : OBTextWelcomeController {
    CDPUICustodianInstructionsViewModel *_viewModel;
}




-(id)initWithViewModel:(id)arg0 ;
-(void)_handleContinueAction:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif