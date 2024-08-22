// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUINPUTSOURCEITEMMODULE_H
#define HUINPUTSOURCEITEMMODULE_H

@class HFItem;


#import "HUChildServiceEditorItemModule.h"

@interface HUInputSourceItemModule : HUChildServiceEditorItemModule

@property (readonly, nonatomic) HFItem *chooseInputsSelectionItem; // ivar: _chooseInputsSelectionItem


+(id)_serviceItemComparatorForTelevisionProfile:(SEL)arg0 ;
+(id)supportedServiceTypes;
-(BOOL)canToggleConfigurationStateForItem:(id)arg0 ;
-(id)buildSectionsWithDisplayedItems:(id)arg0 ;


@end


#endif