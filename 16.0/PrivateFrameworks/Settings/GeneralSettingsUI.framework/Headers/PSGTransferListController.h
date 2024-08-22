// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSGTRANSFERLISTCONTROLLER_H
#define PSGTRANSFERLISTCONTROLLER_H

@class PSListController, FLFollowUpActionHandler;



@interface PSGTransferListController : PSListController

@property (retain, nonatomic) FLFollowUpActionHandler *prebuddyActionHandler; // ivar: _prebuddyActionHandler


-(id)specifiers;
-(void)beginPrebuddy:(id)arg0 ;
-(void)deviceFullErase:(id)arg0 ;
-(void)handleURL:(id)arg0 withCompletion:(id)arg1 ;
-(void)presentExitBuddyWithUpsellTradeIn:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif