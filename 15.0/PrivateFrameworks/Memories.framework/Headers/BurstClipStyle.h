// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BURSTCLIPSTYLE_H
#define BURSTCLIPSTYLE_H


#import <Foundation/Foundation.h>

#import "BurstClip.h"

@interface BurstClipStyle : NSObject

@property (weak, nonatomic) BurstClip *burstClip; // ivar: _burstClip
@property (readonly, nonatomic) CGFloat idealPhotoDuration;
@property (readonly, nonatomic) CGFloat idealVideoDuration;
@property (readonly, nonatomic) CGFloat maximumPhotoDuration;
@property (readonly, nonatomic) CGFloat minimumPhotoDuration;
@property (readonly, nonatomic) CGFloat minimumVideoDuration;


-(BOOL)isSupported;
-(CGFloat)idealDuration;
-(CGFloat)maximumDuration;
-(CGFloat)minimumDuration;
-(CGFloat)projectAspectRatio;
-(id)containedClipsWithInTransition:(id)arg0 outTransition:(id)arg1 ;
-(id)containedClipsWithoutTransitions;
-(id)sourceClips;
-(int)duration;
-(int)projectFrameRate;
-(void)adjustDurationsOfClips:(id)arg0 withInTransition:(id)arg1 outTransition:(id)arg2 ;
-(void)turnOffKenBurnsForClips:(id)arg0 ;


@end


#endif