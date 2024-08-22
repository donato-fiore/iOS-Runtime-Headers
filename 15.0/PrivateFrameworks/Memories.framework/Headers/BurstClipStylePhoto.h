// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BURSTCLIPSTYLEPHOTO_H
#define BURSTCLIPSTYLEPHOTO_H

@class NSString;


#import "BurstClipStyle.h"

@interface BurstClipStylePhoto : BurstClipStyle

@property (nonatomic) int transitionFrameDuration; // ivar: _transitionFrameDuration
@property (copy, nonatomic) NSString *transitionName; // ivar: _transitionName


-(BOOL)isSupported;
-(CGFloat)idealContainedClipDuration;
-(CGFloat)idealDuration;
-(CGFloat)maximumContainedClipDuration;
-(CGFloat)maximumDuration;
-(CGFloat)minimumContainedClipDuration;
-(CGFloat)minimumDuration;
-(NSUInteger)_idealNumberOfContainedClips;
-(NSUInteger)_maximumNumberOfContainedClips;
-(NSUInteger)_minimumNumberOfContainedClips;
-(NSUInteger)numberOfAvailableClips;
-(id)containedClipsWithInTransition:(id)arg0 outTransition:(id)arg1 ;
-(id)containedClipsWithoutTransitions;
-(void)adjustDurationsOfClips:(id)arg0 withInTransition:(id)arg1 outTransition:(id)arg2 ;


@end


#endif