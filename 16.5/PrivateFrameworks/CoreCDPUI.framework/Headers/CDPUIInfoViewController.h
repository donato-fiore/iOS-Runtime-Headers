// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDPUIINFOVIEWCONTROLLER_H
#define CDPUIINFOVIEWCONTROLLER_H

@class OBWelcomeController;


#import "CDPUIInfoViewModel.h"

@interface CDPUIInfoViewController : OBWelcomeController {
    CDPUIInfoViewModel *_viewModel;
}




-(id)initWithViewModel:(id)arg0 ;
-(void)_handleButton1Action:(id)arg0 ;
-(void)_handleButton2Action:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif