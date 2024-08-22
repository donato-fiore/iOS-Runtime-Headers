// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSOBBOLDTRAYBUTTON_H
#define SSOBBOLDTRAYBUTTON_H

@class OBBoldTrayButton, NSString;


#import "SSSpinner.h"

@interface SSOBBoldTrayButton : OBBoldTrayButton

@property (retain) NSString *normalStateTitle; // ivar: _normalStateTitle
@property (retain, nonatomic) SSSpinner *spinner; // ivar: _spinner


+(id)boldButton;
-(void)_centerActivityIndicatorInButton;
-(void)_hideLoading;
-(void)_showLoading;
-(void)_showSpinning;
-(void)hidesBusyIndicator;
-(void)showsBusyIndicator;
-(void)updateBusyText:(id)arg0 ;


@end


#endif