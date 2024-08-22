// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BURSTCLIPSTYLEPHOTODISSOLVEPOP_H
#define BURSTCLIPSTYLEPHOTODISSOLVEPOP_H



#import "BurstClipStylePhoto.h"

@interface BurstClipStylePhotoDissolvePop : BurstClipStylePhoto



-(CGFloat)clipLastClipRatio;
-(CGFloat)idealDuration;
-(CGFloat)idealLastClipDuration;
-(CGFloat)idealRegularClipDuration;
-(CGFloat)maximumDuration;
-(CGFloat)maximumLastClipDuration;
-(CGFloat)maximumRegularClipDuration;
-(CGFloat)minimumDuration;
-(CGFloat)minimumLastClipDuration;
-(CGFloat)minimumRegularClipDuration;
-(NSUInteger)_idealNumberOfContainedClips;
-(NSUInteger)_maximumNumberOfContainedClips;
-(NSUInteger)_minimumNumberOfContainedClips;
-(id)containedClipsWithInTransition:(id)arg0 outTransition:(id)arg1 ;
-(id)containedClipsWithoutTransitions;
-(void)adjustDurationsOfClips:(id)arg0 withInTransition:(id)arg1 outTransition:(id)arg2 ;


@end


#endif