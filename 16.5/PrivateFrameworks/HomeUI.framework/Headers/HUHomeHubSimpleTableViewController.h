// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUHOMEHUBSIMPLETABLEVIEWCONTROLLER_H
#define HUHOMEHUBSIMPLETABLEVIEWCONTROLLER_H

@class NSString;


#import "HUItemTableViewController.h"

@interface HUHomeHubSimpleTableViewController : HUItemTableViewController

@property (nonatomic) NSString *descriptionStringWithFormatKey; // ivar: _descriptionStringWithFormatKey


-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(id)initWithItemManager:(id)arg0 tableViewStyle:(NSInteger)arg1 descriptionStringWithFormatKey:(id)arg2 ;
-(void)loadView;
-(void)setupCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 ;


@end


#endif