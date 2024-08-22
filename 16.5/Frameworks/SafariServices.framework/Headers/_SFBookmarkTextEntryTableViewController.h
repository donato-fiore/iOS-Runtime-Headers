// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFBOOKMARKTEXTENTRYTABLEVIEWCONTROLLER_H
#define _SFBOOKMARKTEXTENTRYTABLEVIEWCONTROLLER_H

@class UITableViewController, NSString;
@protocol _SFBookmarkTextEntryTableViewControllerDelegate;


#import "_SFBookmarkTextEntryTableViewCell.h"

@interface _SFBookmarkTextEntryTableViewController : UITableViewController {
    id<_SFBookmarkTextEntryTableViewControllerDelegate> *_delegate;
    NSString *_initialText;
    NSInteger _autocapitalizationType;
    NSInteger _autocorrectionType;
    _SFBookmarkTextEntryTableViewCell *_textEntryCell;
}




-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithBookmarkInfoViewField:(NSUInteger)arg0 text:(id)arg1 autocapitalizationType:(NSInteger)arg2 autocorrectionType:(NSInteger)arg3 delegate:(id)arg4 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_returnWasPressedInTextField:(id)arg0 ;
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif