// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUREMOTEACCESSTABLEVIEWCONTROLLER_H
#define HUREMOTEACCESSTABLEVIEWCONTROLLER_H

@class NSString, HFUserItem;
@protocol HUSwitchCellDelegate;


#import "HUItemTableViewController.h"
#import "HURemoteAccessItemManager.h"

@interface HURemoteAccessTableViewController : HUItemTableViewController <HUSwitchCellDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) HURemoteAccessItemManager *remoteAccessItemManager; // ivar: _remoteAccessItemManager
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) HFUserItem *userItem; // ivar: _userItem


-(BOOL)shouldHideFooterBelowSection:(NSInteger)arg0 ;
-(BOOL)shouldHideHeaderAboveSection:(NSInteger)arg0 ;
-(BOOL)shouldHideSeparatorsForCell:(id)arg0 indexPath:(id)arg1 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(id)initWithItem:(id)arg0 home:(id)arg1 ;
-(id)user;
-(void)setupCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 ;
-(void)switchCell:(id)arg0 didTurnOn:(BOOL)arg1 ;
-(void)viewDidLoad;


@end


#endif