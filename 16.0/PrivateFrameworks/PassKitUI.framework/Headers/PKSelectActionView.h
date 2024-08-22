// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSELECTACTIONVIEW_H
#define PKSELECTACTIONVIEW_H

@class UIView, PKPass, NSArray, NSDictionary, UITableView, NSString, PKPaymentPassAction;
@protocol UITableViewDelegate, UITableViewDataSource, PKSelectActionViewDelegate;


#import "PKSelectActionHeader.h"

@interface PKSelectActionView : UIView <UITableViewDelegate, UITableViewDataSource>

 {
    PKPass *_pass;
    NSArray *_actions;
    NSDictionary *_balances;
    NSUInteger _actionType;
    PKSelectActionHeader *_actionHeader;
    UITableView *_tableView;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKSelectActionViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKPaymentPassAction *selectedAction; // ivar: _selectedAction
@property (readonly) Class superclass;


-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_balanceForTopUpAction:(id)arg0 ;
-(id)initWithPass:(id)arg0 actions:(id)arg1 actionType:(NSUInteger)arg2 balanceDictionary:(id)arg3 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)_addSubviews;
-(void)layoutSubviews;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif