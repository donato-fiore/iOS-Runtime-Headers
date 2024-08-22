// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STINTRODOWNTIMEVIEWCONTROLLER_H
#define STINTRODOWNTIMEVIEWCONTROLLER_H



#import "STTableWelcomeController.h"
#import "STIntroductionViewModel.h"
#import "STIntroDowntimeTableViewController.h"

@interface STIntroDowntimeViewController : STTableWelcomeController

@property (readonly, copy) id *continueHandler; // ivar: _continueHandler
@property (readonly) STIntroductionViewModel *model; // ivar: _model
@property (retain, nonatomic) STIntroDowntimeTableViewController *tableViewController;


-(id)initWithIntroductionModel:(id)arg0 continueHandler:(id)arg1 ;
-(void)_notNow:(id)arg0 ;
-(void)_setDowntime:(id)arg0 ;
-(void)loadView;


@end


#endif