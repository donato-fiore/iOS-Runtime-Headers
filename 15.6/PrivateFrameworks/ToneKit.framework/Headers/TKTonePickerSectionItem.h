// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TKTONEPICKERSECTIONITEM_H
#define TKTONEPICKERSECTIONITEM_H

@class NSString;
@protocol TKPickerContainerItem;


#import "TKPickerSectionItem.h"
#import "TKTonePickerController.h"

@interface TKTonePickerSectionItem : TKPickerSectionItem <TKPickerContainerItem>



@property (weak, nonatomic, setter=_setParentTonePickerController:) TKTonePickerController *_parentTonePickerController; // ivar: __parentTonePickerController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, setter=_setNumberOfChildren:) NSInteger numberOfChildren; // ivar: _numberOfChildren
@property (nonatomic, setter=_setRegularToneSectionIndex:) NSUInteger regularToneSectionIndex; // ivar: _regularToneSectionIndex
@property (nonatomic, setter=_setSectionHeader:) NSUInteger sectionHeader; // ivar: _sectionHeader
@property (readonly) Class superclass;


-(id)childItemAtIndex:(NSInteger)arg0 ;
-(void)_appendDescriptionOfAttributesToString:(id)arg0 ;


@end


#endif