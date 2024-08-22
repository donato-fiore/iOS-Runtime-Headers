// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDPTABLEVIEWCONTROLLER_H
#define CDPTABLEVIEWCONTROLLER_H

@class UIViewController, UIView, NSString, BFFPaneHeaderView, UIImage, UITableView;
@protocol UITableViewDataSource, UITableViewDelegate;



@interface CDPTableViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) UIView *containerView; // ivar: _containerView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *deviceClass;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *headerSubTitle; // ivar: _headerSubTitle
@property (copy, nonatomic) NSString *headerTitle; // ivar: _headerTitle
@property (retain, nonatomic) BFFPaneHeaderView *headerView; // ivar: _headerView
@property (retain, nonatomic) UIImage *icon; // ivar: _icon
@property (readonly, nonatomic) BOOL isIPad;
@property (readonly, nonatomic) BOOL isiPhone5OrSmaller;
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView
@property (nonatomic) NSInteger tableViewStyle; // ivar: _tableViewStyle
@property (readonly, nonatomic) BOOL uiTestMode;


-(CGFloat)heightForHeaderInTableView:(id)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithTitle:(id)arg0 subTitle:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)viewForHeaderInTableView:(id)arg0 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif