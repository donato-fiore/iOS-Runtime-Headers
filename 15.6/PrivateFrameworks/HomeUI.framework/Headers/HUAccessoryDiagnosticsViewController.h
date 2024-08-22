// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUACCESSORYDIAGNOSTICSVIEWCONTROLLER_H
#define HUACCESSORYDIAGNOSTICSVIEWCONTROLLER_H

@class NSString;
@protocol UITextViewDelegate, HUSwitchCellDelegate;


#import "HUItemTableViewController.h"
#import "HUAccessoryDiagnosticsItemManager.h"

@interface HUAccessoryDiagnosticsViewController : HUItemTableViewController <UITextViewDelegate, HUSwitchCellDelegate>



@property (weak, nonatomic) HUAccessoryDiagnosticsItemManager *accessoryLogsItemManager; // ivar: _accessoryLogsItemManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(id)initWithSourceItem:(id)arg0 ;
-(void)generateNewLogs:(id)arg0 ;
-(void)showShareSheetForItem:(id)arg0 withAnchorView:(id)arg1 ;
-(void)switchCell:(id)arg0 didTurnOn:(BOOL)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 animated:(BOOL)arg3 ;


@end


#endif