// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTAVATARATTRIBUTEEDITORSECTIONITEM_H
#define AVTAVATARATTRIBUTEEDITORSECTIONITEM_H

@class UIImage, NSString;
@protocol AVTAvatarAttributeEditorSectionItemInternal, AVTDiscardableContent, AVTAvatarAttributeEditorSectionItemPrefetching, AVTAvatarUpdating, AVTAvatarAttributeEditorSectionItem;

#import <Foundation/Foundation.h>


@interface AVTAvatarAttributeEditorSectionItem : NSObject <AVTAvatarAttributeEditorSectionItemInternal, AVTDiscardableContent, AVTAvatarAttributeEditorSectionItemPrefetching, AVTAvatarUpdating, AVTAvatarAttributeEditorSectionItem>



@property (readonly, copy, nonatomic) id *avatarUpdater; // ivar: _avatarUpdater
@property (retain, nonatomic) UIImage *cachedThumbnail; // ivar: _cachedThumbnail
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *discardableContentHandler; // ivar: discardableContentHandler
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat heightRatio; // ivar: _heightRatio
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (readonly, copy, nonatomic) NSString *prefetchingIdentifier;
@property (readonly, copy, nonatomic) id *presetResourcesProvider; // ivar: _presetResourcesProvider
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected
@property (readonly, copy, nonatomic) id *stickerResourceProvider; // ivar: _stickerResourceProvider
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) id *thumbnailProvider; // ivar: _thumbnailProvider


// -(id)initWithIdentifier:(id)arg0 localizedName:(id)arg1 thumbnailProvider:(id)arg2 stickerResourceProvider:(unk)arg3 presetResourcesProvider:(id)arg4 avatarUpdater:(unk)arg5 heightRatio:(id)arg6 selected:(unk)arg7  ;
-(void)discardContent;


@end


#endif