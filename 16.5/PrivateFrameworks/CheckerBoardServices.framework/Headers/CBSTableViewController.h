// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CBSTABLEVIEWCONTROLLER_H
#define CBSTABLEVIEWCONTROLLER_H

@class UIViewController, BFFPaneHeaderView, NSAttributedString, UIView, NSString, UITableView;
@protocol UITableViewDelegate, UITableViewDataSource;



@interface CBSTableViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

 {
    BFFPaneHeaderView *_headerView;
}


@property (copy, nonatomic) NSAttributedString *attributedDetailDescriptionText; // ivar: _attributedDetailDescriptionText
@property (retain, nonatomic) UIView *containerFooterView; // ivar: _containerFooterView
@property (nonatomic) CGRect containerFooterViewFrame; // ivar: _containerFooterViewFrame
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *detailDescriptionText; // ivar: _detailDescriptionText
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITableView *tableView; // ivar: _tableView
@property (copy, nonatomic) NSString *titleText; // ivar: _titleText


-(BOOL)isTitleAlignedByLastBaseline;
-(CGFloat)headerToFooterViewSpacing;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)footerView;
-(id)headerView;
-(id)iconName;
-(id)iconTintColor;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)_setupFooterView;
-(void)_setupTableView;
-(void)_setupView;
-(void)_updateHeaderView;
-(void)viewDidLoad;


@end


#endif