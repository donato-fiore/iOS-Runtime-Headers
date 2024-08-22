// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUFIRMWAREUPDATEITEMMODULECONTROLLER_H
#define HUFIRMWAREUPDATEITEMMODULECONTROLLER_H

@class NSString, NSMapTable;
@protocol HULockupViewDelegate, HUExpandableTextViewCellDelegate;


#import "HUItemModuleController.h"
#import "HUFirmwareUpdateItemModule.h"

@interface HUFirmwareUpdateItemModuleController : HUItemModuleController <HULockupViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<HUExpandableTextViewCellDelegate> *expandableTextViewCellDelegate; // ivar: _expandableTextViewCellDelegate
@property (readonly, nonatomic) NSMapTable *expandedStateByItems; // ivar: _expandedStateByItems
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HUFirmwareUpdateItemModule *module;
@property (readonly) Class superclass;


-(BOOL)canSelectItem:(id)arg0 ;
-(Class)cellClassForItem:(id)arg0 ;
-(id)initWithModule:(id)arg0 expandableTextViewCellDelegate:(id)arg1 ;
-(void)lockupView:(id)arg0 downloadControlTapped:(id)arg1 ;
-(void)lockupView:(id)arg0 expandableTextViewDidExpand:(id)arg1 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif