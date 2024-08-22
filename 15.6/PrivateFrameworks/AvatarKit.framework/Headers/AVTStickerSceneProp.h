// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTSTICKERSCENEPROP_H
#define AVTSTICKERSCENEPROP_H

@class SCNScene;


#import "AVTStickerProp.h"

@interface AVTStickerSceneProp : AVTStickerProp

@property (readonly, nonatomic) SCNScene *scene; // ivar: _scene


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryWithTargetPath:(id)arg0 ;
-(id)initWithScene:(id)arg0 scale:(BOOL)arg1 position:(id)arg2 rotation:(id)arg3 renderLast:(id)arg4 palettesDescriptionsmodifiersadjustments;
-(void)buildNodeForAvatar:(id)arg0 withCamera:(id)arg1 forExport:(BOOL)arg2 completionHandler:(id)arg3 ;


@end


#endif