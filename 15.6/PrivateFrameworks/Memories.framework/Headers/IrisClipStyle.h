// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IRISCLIPSTYLE_H
#define IRISCLIPSTYLE_H


#import <Foundation/Foundation.h>

#import "IrisClip.h"

@interface IrisClipStyle : NSObject

@property (weak, nonatomic) IrisClip *irisClip; // ivar: _irisClip


-(BOOL)buildIntro;
-(BOOL)buildOutro;
-(CGFloat)idealDuration;
-(CGFloat)idealPhotoDuration;
-(CGFloat)maximumDuration;
-(CGFloat)maximumPhotoDuration;
-(CGFloat)minimumDuration;
-(CGFloat)minimumPhotoDuration;
-(CGFloat)projectAspectRatio;
-(id)containedClipsWithInTransition:(id)arg0 outTransition:(id)arg1 ;
-(int)duration;
-(int)projectFrameRate;
-(struct _NSRange )preferredInTransitionDurationRange;
-(struct _NSRange )preferredOutTransitionDurationRange;
-(void)adjustGeometryOfIntroClip:(id)arg0 outroClip:(id)arg1 ;


@end


#endif