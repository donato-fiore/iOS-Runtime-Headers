// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUUPDATELISTENINGHISTORYSETTINGSITEMMODULECONTROLLER_H
#define HUUPDATELISTENINGHISTORYSETTINGSITEMMODULECONTROLLER_H

@class NSString;
@protocol HUIconSwitchCellDelegate;


#import "HUItemModuleController.h"

@interface HUUpdateListeningHistorySettingsItemModuleController : HUItemModuleController <HUIconSwitchCellDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(Class)cellClassForItem:(id)arg0 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 ;
-(void)switchCell:(id)arg0 didTurnOn:(BOOL)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif