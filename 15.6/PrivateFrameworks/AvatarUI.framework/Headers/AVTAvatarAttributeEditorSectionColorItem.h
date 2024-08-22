// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTAVATARATTRIBUTEEDITORSECTIONCOLORITEM_H
#define AVTAVATARATTRIBUTEEDITORSECTIONCOLORITEM_H

@class NSString, AVTColorPreset;
@protocol AVTAvatarAttributeEditorSectionItemInternal, AVTAvatarAttributeEditorSectionItem;

#import <Foundation/Foundation.h>

#import "AVTCoreModelColor.h"

@interface AVTAvatarAttributeEditorSectionColorItem : NSObject <AVTAvatarAttributeEditorSectionItemInternal, AVTAvatarAttributeEditorSectionItem>



@property (readonly, copy, nonatomic) id *avatarUpdater; // ivar: _avatarUpdater
@property (readonly, nonatomic) AVTCoreModelColor *color; // ivar: _color
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) id *gradientProvider; // ivar: _gradientProvider
@property (nonatomic) BOOL hasDerivedColorDependency; // ivar: _hasDerivedColorDependency
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) id *layerContentProvider; // ivar: _layerContentProvider
@property (readonly, copy, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected
@property (readonly, nonatomic) AVTColorPreset *skinColor; // ivar: _skinColor
@property (readonly) Class superclass;


// -(id)initWithColor:(id)arg0 imageProvider:(id)arg1 colorLayerProvider:(id)arg2 avatarUpdater:(id)arg3 derivedColorDependent:(unk)arg4 selected:(BOOL)arg5  ;
// -(id)initWithColor:(id)arg0 skinColor:(id)arg1 imageProvider:(id)arg2 colorLayerProvider:(id)arg3 avatarUpdater:(id)arg4 derivedColorDependent:(unk)arg5 selected:(BOOL)arg6  ;


@end


#endif