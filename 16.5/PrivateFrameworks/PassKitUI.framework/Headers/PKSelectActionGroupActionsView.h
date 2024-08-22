// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSELECTACTIONGROUPACTIONSVIEW_H
#define PKSELECTACTIONGROUPACTIONSVIEW_H

@class UIView, PKPaymentPass, PKPaymentPassActionGroup, NSArray, UITableView, NSString, PKPaymentPassAction;
@protocol UITableViewDelegate, UITableViewDataSource, PKSelectActionGroupActionsViewDelegate;


#import "PKSelectActionGroupActionsHeader.h"

@interface PKSelectActionGroupActionsView : UIView <UITableViewDelegate, UITableViewDataSource>

 {
    PKPaymentPass *_pass;
    PKPaymentPassActionGroup *_actionGroup;
    NSArray *_actions;
    PKSelectActionGroupActionsHeader *_actionGroupActionsHeader;
    UITableView *_tableView;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKSelectActionGroupActionsViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKPaymentPassAction *selectedAction; // ivar: _selectedAction
@property (readonly) Class superclass;


-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithPass:(id)arg0 actionGroup:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)_addSubviews;
-(void)layoutSubviews;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif