// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCELLULARPLANUSESVIEWCONTROLLER_H
#define TSCELLULARPLANUSESVIEWCONTROLLER_H

@class OBTableWelcomeController, OBBoldTrayButton, NSLayoutConstraint, NSIndexPath, NSMutableArray, NSString, NSArray, UITableViewCell;
@protocol UITableViewDataSource, UITableViewDelegate, TSSetupFlowItem, TSSIMSetupFlowDelegate;



@interface TSCellularPlanUsesViewController : OBTableWelcomeController <UITableViewDataSource, UITableViewDelegate, TSSetupFlowItem>

 {
    OBBoldTrayButton *_doneButton;
    NSLayoutConstraint *_heightConstraint;
    BOOL _dataSwitchEnabled;
}


@property (retain) NSIndexPath *chosenUseIndexPath; // ivar: _chosenUseIndexPath
@property (retain) NSMutableArray *chosenUseIndexPaths; // ivar: _chosenUseIndexPaths
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<TSSIMSetupFlowDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property BOOL hasDoneButton; // ivar: _hasDoneButton
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSLayoutConstraint *heightAnchor; // ivar: _heightAnchor
@property (retain) NSArray *planItemBadges; // ivar: _planItemBadges
@property (retain) UITableViewCell *sectionFooter; // ivar: _sectionFooter
@property (retain) NSArray *selectedPlanItems; // ivar: _selectedPlanItems
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger usesType; // ivar: _usesType


-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithType:(NSUInteger)arg0 withDoneButton:(BOOL)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(void)_doneButtonTapped;
-(void)dataSwitchChanged:(id)arg0 ;
-(void)prepare:(id)arg0 ;
-(void)saveDefaultUse:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif