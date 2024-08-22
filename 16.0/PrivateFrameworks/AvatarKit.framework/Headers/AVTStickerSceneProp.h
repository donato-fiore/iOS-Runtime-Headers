// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTSTICKERSCENEPROP_H
#define AVTSTICKERSCENEPROP_H

@class SCNNode;


#import "AVTStickerProp.h"

@interface AVTStickerSceneProp : AVTStickerProp

@property (readonly, nonatomic) SCNNode *rootNode; // ivar: _rootNode


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryWithTargetPath:(id)arg0 ;
-(id)initWithRootNode:(id)arg0 scale:(BOOL)arg1 position:(id)arg2 rotation:(id)arg3 renderLast:(id)arg4 palettesDescriptionsmodifiersadjustments;
-(void)buildNodeForAvatar:(id)arg0 withCamera:(id)arg1 options:(id)arg2 forExport:(BOOL)arg3 completionHandler:(id)arg4 ;


@end


#endif