// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUTRIGGERMEDIAMODULECONTROLLER_H
#define HUTRIGGERMEDIAMODULECONTROLLER_H

@class NSString;
@protocol HUMediaSelectionViewControllerDelegate, HUTriggerMediaModuleControllerDelegate;


#import "HUItemModuleController.h"

@interface HUTriggerMediaModuleController : HUItemModuleController <HUMediaSelectionViewControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUTriggerMediaModuleControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(Class)cellClassForItem:(id)arg0 ;
-(NSUInteger)didSelectItem:(id)arg0 ;
-(id)mediaSelectionViewController:(id)arg0 messageForMediaPickerUnavailableReason:(NSInteger)arg1 ;
-(id)mediaSelectionViewControllerMessageForMediaActionPlayUnavailable:(id)arg0 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 ;


@end


#endif