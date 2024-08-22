// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDPSERVICEVIEWCONTROLLER_H
#define CDPSERVICEVIEWCONTROLLER_H

@class UIViewController;
@protocol CDPServiceInterface;



@interface CDPServiceViewController : UIViewController <CDPServiceInterface>

 {
    BOOL _inlineMode;
    UIViewController *_contentViewController;
}




+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(NSUInteger)supportedInterfaceOrientations;
-(void)offsetForCurrentKeyboard:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif