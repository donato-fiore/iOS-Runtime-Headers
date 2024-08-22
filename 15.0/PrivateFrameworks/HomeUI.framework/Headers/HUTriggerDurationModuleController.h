// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUTRIGGERDURATIONMODULECONTROLLER_H
#define HUTRIGGERDURATIONMODULECONTROLLER_H

@class NSString;
@protocol HUTriggerDurationPickerDelegate, HUTriggerDurationModuleControllerDelegate;


#import "HUItemTableModuleController.h"

@interface HUTriggerDurationModuleController : HUItemTableModuleController <HUTriggerDurationPickerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUTriggerDurationModuleControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(Class)cellClassForItem:(id)arg0 ;
-(NSUInteger)didSelectItem:(id)arg0 ;
-(id)_durationEventBuilder;
-(void)durationPicker:(id)arg0 didSelectDuration:(id)arg1 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif