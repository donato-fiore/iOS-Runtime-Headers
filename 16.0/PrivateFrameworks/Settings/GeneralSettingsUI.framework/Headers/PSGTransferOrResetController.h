// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSGTRANSFERORRESETCONTROLLER_H
#define PSGTRANSFERORRESETCONTROLLER_H

@class PSViewController;


#import "PSGResetOrEraseListController.h"
#import "PSGTransferListController.h"

@interface PSGTransferOrResetController : PSViewController

@property (retain, nonatomic) PSGResetOrEraseListController *_resetOrEraseListController; // ivar: __resetOrEraseListController
@property (retain, nonatomic) PSGTransferListController *_transferListController; // ivar: __transferListController


-(void)handleURL:(id)arg0 withCompletion:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif