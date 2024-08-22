// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDCONTENTPATHANIMATION_H
#define TSDCONTENTPATHANIMATION_H

@class NSArray, CAMediaTimingFunction;


#import "TSDContentAnimation.h"
#import "TSDContentPath.h"

@interface TSDContentPathAnimation : TSDContentAnimation

@property (copy, nonatomic) NSArray *contentLocations; // ivar: _contentLocations
@property (copy, nonatomic) TSDContentPath *contentPath;
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (copy, nonatomic) NSArray *keyTimes; // ivar: _keyTimes
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction; // ivar: _timingFunction
@property (copy, nonatomic) NSArray *timingFunctions; // ivar: _timingFunctions


-(BOOL)i_canProduceAnimation;
-(id)i_animationWithTransformBlock:(id)arg0 ;
-(id)i_endLocation;
-(void)dealloc;


@end


#endif