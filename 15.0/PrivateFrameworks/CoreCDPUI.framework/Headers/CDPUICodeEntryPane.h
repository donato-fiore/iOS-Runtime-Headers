// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDPUICODEENTRYPANE_H
#define CDPUICODEENTRYPANE_H

@class UIButton;


#import "CDPPassphraseEntryPane.h"
#import "CDPUICodeEntryViewModel.h"

@interface CDPUICodeEntryPane : CDPPassphraseEntryPane {
    UIButton *_footerButton;
    CDPUICodeEntryViewModel *_viewModel;
}




-(id)_createFooterButton;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didFinishResizingHeaderView;
-(void)didFinishResizingPinView;
-(void)setViewModel:(id)arg0 ;


@end


#endif