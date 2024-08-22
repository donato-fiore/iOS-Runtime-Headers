// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ISPLAYEROUTPUTCONTENT_H
#define ISPLAYEROUTPUTCONTENT_H


#import <Foundation/Foundation.h>

#import "ISWrappedAVPlayer.h"

@interface ISPlayerOutputContent : NSObject

@property (readonly, nonatomic) *CGImage photo; // ivar: _photo
@property (readonly, nonatomic) int photoEXIFOrientation; // ivar: _photoEXIFOrientation
@property (readonly, nonatomic) BOOL photoIsOriginal; // ivar: _photoIsOriginal
@property (readonly, nonatomic) ISWrappedAVPlayer *videoPlayer; // ivar: _videoPlayer
@property (readonly, nonatomic) CGSize videoSize; // ivar: _videoSize


-(id)description;
-(id)initWithPhoto:(struct CGImage *)arg0 photoIsOriginal:(BOOL)arg1 photoEXIFOrientation:(int)arg2 videoPlayer:(id)arg3 videoSize:(struct CGSize )arg4 ;
-(void)dealloc;


@end


#endif