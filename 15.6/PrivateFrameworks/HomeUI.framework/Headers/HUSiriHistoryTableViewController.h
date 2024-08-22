// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUSIRIHISTORYTABLEVIEWCONTROLLER_H
#define HUSIRIHISTORYTABLEVIEWCONTROLLER_H

@class NSString;
@protocol HFItemManagerDelegate, UITextViewDelegate, HUAccessorySettingsDetailsViewControllerProtocol;


#import "HUItemTableViewController.h"
#import "HUSiriHistoryItemManager.h"

@interface HUSiriHistoryTableViewController : HUItemTableViewController <HFItemManagerDelegate, UITextViewDelegate, HUAccessorySettingsDetailsViewControllerProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HUSiriHistoryItemManager *siriHistoryItemManager; // ivar: _siriHistoryItemManager
@property (readonly) Class superclass;


-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(id)initWithAccessoryGroupItem:(id)arg0 ;
-(id)initWithAccessorySettingItem:(id)arg0 module:(id)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 animated:(BOOL)arg3 ;


@end


#endif