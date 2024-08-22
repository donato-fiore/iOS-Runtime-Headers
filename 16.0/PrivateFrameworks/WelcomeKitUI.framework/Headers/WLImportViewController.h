// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLIMPORTVIEWCONTROLLER_H
#define WLIMPORTVIEWCONTROLLER_H



#import "WLTransferringViewController.h"
#import "WLWelcomeController.h"

@interface WLImportViewController : WLTransferringViewController {
    WLWelcomeController *_welcomeController;
}




-(id)initWithWelcomeController:(id)arg0 ;


@end


#endif