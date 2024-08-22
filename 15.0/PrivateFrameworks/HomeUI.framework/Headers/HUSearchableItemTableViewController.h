// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUSEARCHABLEITEMTABLEVIEWCONTROLLER_H
#define HUSEARCHABLEITEMTABLEVIEWCONTROLLER_H

@class NSString, UIView<HUSearchBar>, UIScrollView;
@protocol HUSearchableViewController;


#import "HUItemTableViewController.h"

@interface HUSearchableItemTableViewController : HUItemTableViewController <HUSearchableViewController>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIView<HUSearchBar> *searchBar; // ivar: _searchBar
@property (readonly, nonatomic) NSUInteger searchBarPosition; // ivar: _searchBarPosition
@property (readonly, nonatomic) UIScrollView *searchBarWrapper; // ivar: _searchBarWrapper
@property (readonly) Class superclass;


-(id)initWithItemManager:(id)arg0 tableViewStyle:(NSInteger)arg1 ;
-(id)initWithItemManager:(id)arg0 tableViewStyle:(NSInteger)arg1 searchBar:(id)arg2 searchBarPosition:(NSUInteger)arg3 ;
-(void)setupSearchBar;
-(void)textFieldDidChange:(id)arg0 ;
-(void)textFieldDidEndEditing:(id)arg0 ;
-(void)updateForSearch;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif