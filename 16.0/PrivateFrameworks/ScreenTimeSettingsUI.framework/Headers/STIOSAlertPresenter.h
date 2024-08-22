// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STIOSALERTPRESENTER_H
#define STIOSALERTPRESENTER_H

@class UIViewController;
@protocol STAlertPresenter;

#import <Foundation/Foundation.h>


@interface STIOSAlertPresenter : NSObject <STAlertPresenter>



@property (readonly) UIViewController *presentingViewController; // ivar: _presentingViewController


-(id)initWithPresentingViewController:(id)arg0 ;
-(void)showAlertWithTitle:(id)arg0 message:(id)arg1 completion:(id)arg2 ;


@end


#endif