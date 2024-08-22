// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BURSTSTYLETHREEUP_H
#define BURSTSTYLETHREEUP_H

@class UIColor;


#import "BurstClipStylePhoto.h"

@interface BurstStyleThreeUp : BurstClipStylePhoto

@property (retain, nonatomic) UIColor *gapColor; // ivar: _gapColor
@property (retain, nonatomic) UIColor *popBackgroundColor; // ivar: _popBackgroundColor
@property (nonatomic) int transitionFrameDuration;


-(BOOL)isSupported;
-(CGFloat)idealContainedClipDuration;
-(CGFloat)idealDuration;
-(CGFloat)maximumContainedClipDuration;
-(CGFloat)maximumDuration;
-(CGFloat)minimumContainedClipDuration;
-(NSUInteger)_idealNumberOfContainedClips;
-(NSUInteger)_maximumNumberOfContainedClips;
-(NSUInteger)_minimumNumberOfContainedClips;
-(NSUInteger)numberOfAvailableClips;
-(NSUInteger)numberOfPossibleClips;
-(id)containedClipsWithInTransition:(id)arg0 outTransition:(id)arg1 ;
-(id)containedClipsWithoutTransitions;
-(id)transitionName;


@end


#endif