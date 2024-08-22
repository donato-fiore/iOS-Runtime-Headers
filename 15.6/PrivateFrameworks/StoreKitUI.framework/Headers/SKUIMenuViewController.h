// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIMENUVIEWCONTROLLER_H
#define SKUIMENUVIEWCONTROLLER_H

@class UITableViewController, NSArray;
@protocol SKUIMenuViewControllerDelegate;



@interface SKUIMenuViewController : UITableViewController

@property (weak, nonatomic) NSObject<SKUIMenuViewControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSInteger indexOfCheckedTitle; // ivar: _indexOfCheckedTitle
@property (readonly, nonatomic) NSArray *menuImages; // ivar: _menuImages
@property (nonatomic) NSInteger menuStyle; // ivar: _menuStyle
@property (readonly, nonatomic) NSArray *menuTitles; // ivar: _menuTitles


-(NSInteger)preferredUserInterfaceStyle;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithMenuTitles:(id)arg0 ;
-(id)initWithMenuTitles:(id)arg0 images:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)loadView;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;


@end


#endif