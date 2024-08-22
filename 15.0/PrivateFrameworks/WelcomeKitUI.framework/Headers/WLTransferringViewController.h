// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WLTRANSFERRINGVIEWCONTROLLER_H
#define WLTRANSFERRINGVIEWCONTROLLER_H

@class NSDateComponentsFormatter, NSString;
@protocol OBSetupAssistantSupport, OS_dispatch_source;


#import "WLOnboardingProgressViewController.h"
#import "WLWelcomeController.h"

@interface WLTransferringViewController : WLOnboardingProgressViewController <OBSetupAssistantSupport>

 {
    WLWelcomeController *_welcomeController;
    NSDateComponentsFormatter *_remainingDownloadTimeFormatter;
    CGFloat _remainingDownloadTime;
    NSObject<OS_dispatch_source> *_remainingDownloadTimeUpdateTimer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithSourceDevice:(id)arg0 welcomeController:(id)arg1 ;
-(void)_cancelRemainingDownloadTimeUpdateTimer;
-(void)dealloc;
-(void)importDidStart;
-(void)setProgressText:(id)arg0 ;
-(void)setRemainingDownloadTime:(CGFloat)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif