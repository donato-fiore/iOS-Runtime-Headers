// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKTOOLSLISTVIEWCONTROLLER_H
#define AKTOOLSLISTVIEWCONTROLLER_H

@class UIViewController, NSArray, NSString, UITableView;
@protocol UITableViewDelegate, UITableViewDataSource, AKToolsListViewControllerDelegate;



@interface AKToolsListViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>



@property (copy, nonatomic) NSArray *cellItemTypes; // ivar: _cellItemTypes
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AKToolsListViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isDeviceLocked; // ivar: _isDeviceLocked
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsImageDescriptionEditing; // ivar: _supportsImageDescriptionEditing
@property (nonatomic) BOOL supportsOpacityEditing; // ivar: _supportsOpacityEditing
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView


+(id)defaultCellItemTypes;
-(BOOL)_canShowWhileLocked;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)_shapesCellIndexRow;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_buttonViewForImageDescription;
-(id)_buttonViewForLoupe;
-(id)_buttonViewForOpacity;
-(id)_buttonViewForShapes;
-(id)_buttonViewForSignature;
-(id)_buttonViewForText;
-(id)_buttonViewWithImage:(id)arg0 title:(id)arg1 tintColor:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_reloadCellItemTypes;
-(void)_shapeButtonPressed:(id)arg0 ;
-(void)_updateDeviceLocked;
-(void)addRowView:(id)arg0 toCellView:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif