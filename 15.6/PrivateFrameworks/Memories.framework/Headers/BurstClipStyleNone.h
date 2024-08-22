// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BURSTCLIPSTYLENONE_H
#define BURSTCLIPSTYLENONE_H



#import "BurstClipStyle.h"

@interface BurstClipStyleNone : BurstClipStyle



-(BOOL)isSupported;
-(CGFloat)idealDuration;
-(CGFloat)maximumDuration;
-(CGFloat)minimumDuration;
-(id)containedClipsWithInTransition:(id)arg0 outTransition:(id)arg1 ;
-(id)containedClipsWithoutTransitions;
-(void)adjustDurationsOfClips:(id)arg0 withInTransition:(id)arg1 outTransition:(id)arg2 ;


@end


#endif