// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKINFOGRAPHICVIEWCONTROLLER_H
#define HKINFOGRAPHICVIEWCONTROLLER_H

@class UIViewController, NSString, NSArray, UITableView;
@protocol UITableViewDataSource;



@interface HKInfographicViewController : UIViewController <UITableViewDataSource>

 {
    NSInteger _tableViewStyle;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *items; // ivar: _items
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithContentItems:(id)arg0 ;
-(id)initWithItems:(id)arg0 ;
-(id)initWithItems:(id)arg0 tableViewStyle:(NSInteger)arg1 ;
-(id)initWithTextItems:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_updateTableViewTopPadding;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif