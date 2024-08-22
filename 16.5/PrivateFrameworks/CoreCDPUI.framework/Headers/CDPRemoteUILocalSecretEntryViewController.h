// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDPREMOTEUILOCALSECRETENTRYVIEWCONTROLLER_H
#define CDPREMOTEUILOCALSECRETENTRYVIEWCONTROLLER_H

@class NSString;
@protocol DevicePINControllerDelegate;


#import "CDPPassphraseEntryViewController.h"

@interface CDPRemoteUILocalSecretEntryViewController : CDPPassphraseEntryViewController <DevicePINControllerDelegate>

 {
    BOOL _inlineMode;
    BOOL _finished;
    NSString *_titleText;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)pinInstructionsPrompt;
-(id)title;
-(struct CGSize )preferredContentSize;
-(void)_startAnimating;
-(void)didAcceptEnteredPIN:(id)arg0 ;
-(void)didCancelEnteringPIN;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif