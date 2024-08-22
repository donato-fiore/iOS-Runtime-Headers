// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLPREPARATIONVIEWCONTROLLER_H
#define WLPREPARATIONVIEWCONTROLLER_H

@class OBSetupAssistantSpinnerController, NSString;
@protocol OBSetupAssistantSupport;


#import "WLWelcomeController.h"

@interface WLPreparationViewController : OBSetupAssistantSpinnerController <OBSetupAssistantSupport>

 {
    WLWelcomeController *_welcomeController;
}


@property (copy, nonatomic) id *cancellationBlock; // ivar: _cancellationBlock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL showCancelButton; // ivar: _showCancelButton
@property (readonly) Class superclass;
@property (copy, nonatomic) id *viewWillDismissBlock; // ivar: _viewWillDismissBlock


-(id)initWithWelcomeController:(id)arg0 ;
-(void)cancel;
-(void)showActivityIndicatorView;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif