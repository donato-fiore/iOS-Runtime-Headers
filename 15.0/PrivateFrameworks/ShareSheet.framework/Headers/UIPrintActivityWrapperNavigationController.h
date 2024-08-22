// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIPRINTACTIVITYWRAPPERNAVIGATIONCONTROLLER_H
#define UIPRINTACTIVITYWRAPPERNAVIGATIONCONTROLLER_H

@class UINavigationController, NSString, UIPrintInteractionController;
@protocol UIPrintInteractionControllerDelegate;



@interface UIPrintActivityWrapperNavigationController : UINavigationController <UIPrintInteractionControllerDelegate>

 {
    id *_completionHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL presentedPrintInteractionController; // ivar: _presentedPrintInteractionController
@property (retain, nonatomic) UIPrintInteractionController *printInteractionController; // ivar: _printInteractionController
@property (readonly) Class superclass;


-(id)initWithPrintInteractionController:(id)arg0 completion:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif