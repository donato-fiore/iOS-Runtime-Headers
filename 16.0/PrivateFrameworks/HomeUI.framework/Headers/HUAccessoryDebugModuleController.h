// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUACCESSORYDEBUGMODULECONTROLLER_H
#define HUACCESSORYDEBUGMODULECONTROLLER_H

@class NSMapTable, NSString;
@protocol HUSwitchCellDelegate;


#import "HUItemModuleController.h"
#import "HUAccessoryDebugModule.h"

@interface HUAccessoryDebugModuleController : HUItemModuleController <HUSwitchCellDelegate>



@property (retain) NSMapTable *cellToItemMap; // ivar: _cellToItemMap
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HUAccessoryDebugModule *module;
@property (readonly) Class superclass;


-(BOOL)canSelectItem:(id)arg0 ;
-(Class)cellClassForItem:(id)arg0 ;
-(NSUInteger)didSelectItem:(id)arg0 ;
-(id)initWithModule:(id)arg0 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 ;
-(void)switchCell:(id)arg0 didTurnOn:(BOOL)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif