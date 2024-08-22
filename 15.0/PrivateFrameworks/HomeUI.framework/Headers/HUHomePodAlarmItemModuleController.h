// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUHOMEPODALARMITEMMODULECONTROLLER_H
#define HUHOMEPODALARMITEMMODULECONTROLLER_H

@class NSMapTable, NSString;
@protocol HUAlarmTableViewCellDelegate, HUHomePodAlarmItemModuleControllerDelegate;


#import "HUItemTableModuleController.h"

@interface HUHomePodAlarmItemModuleController : HUItemTableModuleController <HUAlarmTableViewCellDelegate>



@property (readonly, nonatomic) BOOL allowsCellSelection; // ivar: _allowsCellSelection
@property (readonly, nonatomic) NSMapTable *cellToItemMap; // ivar: _cellToItemMap
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUHomePodAlarmItemModuleControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_shouldAllowCellSelection;
-(BOOL)canSelectItem:(id)arg0 ;
-(Class)cellClassForItem:(id)arg0 ;
-(NSUInteger)didSelectItem:(id)arg0 ;
-(id)initWithModule:(id)arg0 ;
-(void)_significantTimeChange:(id)arg0 ;
-(void)setAlarmEnabled:(BOOL)arg0 forCell:(id)arg1 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif