// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDPUIWALRUSLOCALPASSCODEVERIFICATIONCONTROLLER_H
#define CDPUIWALRUSLOCALPASSCODEVERIFICATIONCONTROLLER_H

@class CDPContext, CDPStateController, NSString, UIViewController;
@protocol CDPUIDelegate;

#import <Foundation/Foundation.h>

#import "CDPUIController.h"

@interface CDPUIWalrusLocalPasscodeVerificationController : NSObject <CDPUIDelegate>

 {
    CDPContext *_context;
    CDPStateController *_stateController;
    NSString *_title;
    CDPUIController *_uiController;
    UIViewController *_viewController;
    NSUInteger _presentationType;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithTitle:(id)arg0 presentWithViewController:(id)arg1 presentationType:(NSUInteger)arg2 ;
-(void)_setupControllers;
-(void)finishWalrusLocalPasscodeVerificationWithCompletion:(id)arg0 ;
-(void)uiController:(id)arg0 didPresentRootViewController:(id)arg1 ;
-(void)uiController:(id)arg0 prepareAlertContext:(id)arg1 ;
-(void)uiController:(id)arg0 preparePresentationContext:(id)arg1 ;


@end


#endif