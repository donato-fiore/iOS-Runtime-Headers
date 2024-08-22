// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUAUDIOANALYSISSETTINGSITEMMODULECONTROLLER_H
#define HUAUDIOANALYSISSETTINGSITEMMODULECONTROLLER_H

@class NSString;
@protocol HUIconSwitchCellDelegate, HUSwitchCellDelegate;


#import "HUItemModuleController.h"

@interface HUAudioAnalysisSettingsItemModuleController : HUItemModuleController <HUIconSwitchCellDelegate, HUSwitchCellDelegate>



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