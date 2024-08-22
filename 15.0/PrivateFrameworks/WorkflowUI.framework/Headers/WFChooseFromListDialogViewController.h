// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCHOOSEFROMLISTDIALOGVIEWCONTROLLER_H
#define WFCHOOSEFROMLISTDIALOGVIEWCONTROLLER_H

@class NSString, NSCache, UITableView, NSMutableArray;
@protocol UITableViewDataSource, UITableViewDelegatePrivate, WFCompactPlatterContentClippingDelegate;


#import "WFCompactDialogViewController.h"
#import "WFChooseFromListDialogCell.h"

@interface WFChooseFromListDialogViewController : WFCompactDialogViewController <UITableViewDataSource, UITableViewDelegatePrivate, WFCompactPlatterContentClippingDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSCache *imageCache; // ivar: _imageCache
@property (weak, nonatomic) UITableView *listTableView; // ivar: _listTableView
@property (retain, nonatomic) WFChooseFromListDialogCell *prototypeCell; // ivar: _prototypeCell
@property (retain, nonatomic) NSMutableArray *selectedItems; // ivar: _selectedItems
@property (readonly) Class superclass;


-(BOOL)tableView:(id)arg0 shouldDrawBottomSeparatorForSection:(NSInteger)arg1 ;
-(BOOL)tableView:(id)arg0 shouldDrawTopSeparatorForSection:(NSInteger)arg1 ;
-(CGFloat)contentHeightForWidth:(CGFloat)arg0 withMaximumVisibleHeight:(CGFloat)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithRequest:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)configureCell:(id)arg0 forIndexPath:(id)arg1 ;
-(void)dealloc;
-(void)finishWithSelectedItems;
-(void)loadView;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)platterView:(id)arg0 didUpdateContentVerticalOffset:(CGFloat)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif