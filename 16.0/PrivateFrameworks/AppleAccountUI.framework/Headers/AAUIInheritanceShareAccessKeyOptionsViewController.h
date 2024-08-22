// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAUIINHERITANCESHAREACCESSKEYOPTIONSVIEWCONTROLLER_H
#define AAUIINHERITANCESHAREACCESSKEYOPTIONSVIEWCONTROLLER_H

@class NSArray, NSString;
@protocol UITableViewDelegate, UITableViewDataSource, AAUIInheritanceSetupFlowDelegate;


#import "AAUIOBTableWelcomeController.h"
#import "AAUIOBInheritanceShareAccessKeyOptionsViewModel.h"

@interface AAUIInheritanceShareAccessKeyOptionsViewController : AAUIOBTableWelcomeController <UITableViewDelegate, UITableViewDataSource>

 {
    AAUIOBInheritanceShareAccessKeyOptionsViewModel *_viewModel;
    NSArray *_options;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<AAUIInheritanceSetupFlowDelegate> *flowDelegate; // ivar: _flowDelegate
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_configurationForShareType:(NSUInteger)arg0 ;
-(id)initWithBeneficiaryName:(id)arg0 handle:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_setupTableView;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif