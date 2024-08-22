// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IRISCLIPSTYLETRANSITION_H
#define IRISCLIPSTYLETRANSITION_H



#import "IrisClipStyle.h"

@interface IrisClipStyleTransition : IrisClipStyle

@property (nonatomic) BOOL buildIntro; // ivar: _buildIntro
@property (nonatomic) BOOL buildOutro; // ivar: _buildOutro
@property (readonly, nonatomic) int containedTransitionOverlapOffset; // ivar: _containedTransitionOverlapOffset
@property (nonatomic) BOOL videoContainedWithinTransitions; // ivar: _videoContainedWithinTransitions


-(CGFloat)idealDuration;
-(CGFloat)maximumDuration;
-(CGFloat)minimumDuration;
-(id)containedClipsWithInTransition:(id)arg0 outTransition:(id)arg1 ;
-(int)minimumPhotoFrameDuration;
-(struct _NSRange )preferredInTransitionDurationRange;
-(struct _NSRange )preferredOutTransitionDurationRange;


@end


#endif