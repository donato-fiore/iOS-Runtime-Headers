// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSELECTACTIONGROUPVIEW_H
#define PKSELECTACTIONGROUPVIEW_H

@class UIView, PKPaymentPass, NSArray, UITableView, NSString, PKPaymentPassActionGroup;
@protocol UITableViewDelegate, UITableViewDataSource, PKSelectActionGroupViewDelegate;


#import "PKSelectActionGroupHeader.h"

@interface PKSelectActionGroupView : UIView <UITableViewDelegate, UITableViewDataSource>

 {
    PKPaymentPass *_pass;
    NSArray *_actionGroups;
    PKSelectActionGroupHeader *_actionGroupHeader;
    UITableView *_tableView;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKSelectActionGroupViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKPaymentPassActionGroup *selectedActionGroup; // ivar: _selectedActionGroup
@property (readonly) Class superclass;


-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithPass:(id)arg0 actionGroups:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)_addSubviews;
-(void)layoutSubviews;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif