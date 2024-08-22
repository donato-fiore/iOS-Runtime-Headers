// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTSTICKERIMAGEPROP_H
#define AVTSTICKERIMAGEPROP_H

@class UIImage;


#import "AVTStickerProp.h"

@interface AVTStickerImageProp : AVTStickerProp

@property (readonly, nonatomic) UIImage *image; // ivar: _image


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryWithTargetPath:(id)arg0 ;
-(id)initWithImage:(id)arg0 size:(struct CGSize )arg1 scale:(BOOL)arg2 position:(BOOL)arg3 renderLast:(id)arg4 orientToCamera:(id)arg5 rotation:(id)arg6 palettesDescriptionsmodifiersadjustments;
-(void)buildNodeForAvatar:(id)arg0 withCamera:(id)arg1 options:(id)arg2 forExport:(BOOL)arg3 completionHandler:(id)arg4 ;


@end


#endif