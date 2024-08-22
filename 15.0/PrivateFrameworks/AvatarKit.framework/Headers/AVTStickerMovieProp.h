// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTSTICKERMOVIEPROP_H
#define AVTSTICKERMOVIEPROP_H

@class NSMutableArray, AVPlayerItem, NSURL;


#import "AVTStickerProp.h"

@interface AVTStickerMovieProp : AVTStickerProp

@property (retain, nonatomic) NSMutableArray *loadingNodes; // ivar: _loadingNodes
@property (retain, nonatomic) AVPlayerItem *moviePlayerItem; // ivar: _moviePlayerItem
@property (readonly, nonatomic) NSURL *movieURL; // ivar: _movieURL


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryWithTargetPath:(id)arg0 ;
-(id)initWithMovieURL:(id)arg0 size:(struct CGSize )arg1 scale:(BOOL)arg2 position:(BOOL)arg3 renderLast:(id)arg4 orientToCamera:(id)arg5 rotation:(id)arg6 palettesDescriptionsmodifiersadjustments;
-(void)buildNodeForAvatar:(id)arg0 withCamera:(id)arg1 forExport:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)stickerGenerationDidEnd;
-(void)stickerGenerationWillBegin;
-(void)updateNode:(id)arg0 withContentAtTime:(struct ? )arg1 ;


@end


#endif