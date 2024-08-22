// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTAVATARATTRIBUTEEDITORSECTIONSUPPLEMENTALPICKERITEM_H
#define AVTAVATARATTRIBUTEEDITORSECTIONSUPPLEMENTALPICKERITEM_H

@class NSString;
@protocol AVTAvatarAttributeEditorSectionSupplementalPickerItemInternal, AVTAvatarAttributeEditorSectionSupplementalPickerItem;

#import <Foundation/Foundation.h>


@interface AVTAvatarAttributeEditorSectionSupplementalPickerItem : NSObject <AVTAvatarAttributeEditorSectionSupplementalPickerItemInternal, AVTAvatarAttributeEditorSectionSupplementalPickerItem>



@property (readonly, copy, nonatomic) id *avatarUpdater; // ivar: _avatarUpdater
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) id *editorUpdater; // ivar: _editorUpdater
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *localizedDescription; // ivar: _localizedDescription
@property (readonly, copy, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected
@property (readonly) Class superclass;


// -(id)initWithLocalizedName:(id)arg0 localizedDescription:(id)arg1 avatarUpdater:(id)arg2 editorUpdater:(unk)arg3 selected:(id)arg4  ;


@end


#endif