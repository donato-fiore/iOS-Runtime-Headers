// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HLPHELPSEARCHRESULTTABLEVIEWCONTROLLER_H
#define HLPHELPSEARCHRESULTTABLEVIEWCONTROLLER_H

@class UITableViewController, UILabel, UIView, NSArray;



@interface HLPHelpSearchResultTableViewController : UITableViewController {
    UILabel *_footerLabel;
    CGFloat _separatorValue;
}


@property (retain, nonatomic) UIView *footerView; // ivar: _footerView
@property (retain, nonatomic) NSArray *searchResults; // ivar: _searchResults


-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)preferSeparatorValue:(CGFloat)arg0 ;
-(void)updateWithSearchText:(id)arg0 searchResults:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif