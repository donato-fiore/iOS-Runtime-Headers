// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTAVATARATTRIBUTEEDITORMULTICOLORPICKERSECTIONITEM_H
#define AVTAVATARATTRIBUTEEDITORMULTICOLORPICKERSECTIONITEM_H

@class NSString;
@protocol AVTAvatarAttributeEditorSectionItem, AVTAvatarUpdating, AVTAvatarEditorStateUpdating;

#import <Foundation/Foundation.h>

#import "AVTAvatarAttributeEditorSectionColorItem.h"
#import "AVTAvatarColorVariationStore.h"

@interface AVTAvatarAttributeEditorMulticolorPickerSectionItem : NSObject <AVTAvatarAttributeEditorSectionItem, AVTAvatarUpdating, AVTAvatarEditorStateUpdating>



@property (readonly, copy, nonatomic) id *avatarUpdater; // ivar: _avatarUpdater
@property (readonly, nonatomic) AVTAvatarAttributeEditorSectionColorItem *colorItem; // ivar: _colorItem
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) id *editorStateUpdater; // ivar: _editorStateUpdater
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isPlaceholder; // ivar: _isPlaceholder
@property (readonly, nonatomic) BOOL isRemovable; // ivar: _isRemovable
@property (readonly, copy, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (readonly, nonatomic) id *removalUpdater; // ivar: _removalUpdater
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected
@property (readonly) Class superclass;
@property (readonly, nonatomic) AVTAvatarColorVariationStore *variationStore; // ivar: _variationStore


// -(id)initWithIdentifier:(id)arg0 localizedName:(id)arg1 isPlaceholder:(BOOL)arg2 isRemovable:(BOOL)arg3 colorItem:(id)arg4 variationStore:(id)arg5 avatarUpdater:(id)arg6 editorStateUpdater:(unk)arg7 removalUpdater:(id)arg8  ;


@end


#endif