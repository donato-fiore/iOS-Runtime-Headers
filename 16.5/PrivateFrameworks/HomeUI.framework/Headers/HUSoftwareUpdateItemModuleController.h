// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUSOFTWAREUPDATEITEMMODULECONTROLLER_H
#define HUSOFTWAREUPDATEITEMMODULECONTROLLER_H

@class NSString, NSMapTable;
@protocol HUSoftwareUpdateUIPresentationDelegate, HULockupViewDelegate, HUSoftwareUpdateItemModuleControllerDelegate, HUExpandableTextViewCellDelegate;


#import "HUItemModuleController.h"
#import "HUSoftwareUpdateItemModule.h"

@interface HUSoftwareUpdateItemModuleController : HUItemModuleController <HUSoftwareUpdateUIPresentationDelegate, HULockupViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<HUSoftwareUpdateItemModuleControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) NSObject<HUExpandableTextViewCellDelegate> *expandableTextViewCellDelegate; // ivar: _expandableTextViewCellDelegate
@property (readonly, nonatomic) NSMapTable *expandedStateByItems; // ivar: _expandedStateByItems
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HUSoftwareUpdateItemModule *module;
@property (readonly, nonatomic) NSMapTable *serviceGridViewControllersByItems; // ivar: _serviceGridViewControllersByItems
@property (readonly) Class superclass;


-(BOOL)canSelectItem:(id)arg0 ;
-(Class)cellClassForItem:(id)arg0 ;
-(id)initWithModule:(id)arg0 ;
-(id)initWithModule:(id)arg0 delegate:(id)arg1 expandableTextViewCellDelegate:(id)arg2 ;
-(id)softwareUpdateUIManager:(id)arg0 dismissViewController:(id)arg1 ;
-(id)softwareUpdateUIManager:(id)arg0 presentViewController:(id)arg1 ;
-(void)_startUpdateOnAccessories:(id)arg0 ;
-(void)lockupView:(id)arg0 downloadControlTapped:(id)arg1 ;
-(void)lockupView:(id)arg0 expandableTextViewDidExpand:(id)arg1 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 ;
-(void)updateAllAccessories;
-(void)updateCell:(id)arg0 forItem:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif