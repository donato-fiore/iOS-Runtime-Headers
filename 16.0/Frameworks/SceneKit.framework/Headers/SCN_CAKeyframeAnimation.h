// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCN_CAKEYFRAMEANIMATION_H
#define SCN_CAKEYFRAMEANIMATION_H

@class CAKeyframeAnimation;



@interface SCN_CAKeyframeAnimation : CAKeyframeAnimation {
    *__C3DKeyframedAnimation _c3dAnimation;
    BOOL _caReady;
}




+(BOOL)supportsSecureCoding;
-(BOOL)additive;
-(BOOL)autoreverses;
-(BOOL)commitsOnCompletion;
-(BOOL)cumulative;
-(BOOL)isAdditive;
-(BOOL)isCumulative;
-(BOOL)isRemovedOnCompletion;
-(BOOL)usesSceneTimeBase;
-(CGFloat)duration;
-(CGFloat)fadeInDuration;
-(CGFloat)fadeOutDuration;
-(CGFloat)repeatDuration;
-(CGFloat)timeOffset;
-(float)repeatCount;
-(float)speed;
-(id)animationEvents;
-(id)biasValues;
-(id)continuityValues;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)fillMode;
-(id)initWithCoder:(id)arg0 ;
-(id)keyPath;
-(id)keyTimes;
-(id)tensionValues;
-(id)timingFunction;
-(id)timingFunctions;
-(id)values;
-(struct __C3DKeyframedAnimation *)c3dAnimation;
-(void)_clearC3DCache;
-(void)_convertToCA;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setAdditive:(BOOL)arg0 ;
-(void)setAnimationEvents:(id)arg0 ;
-(void)setAutoreverses:(BOOL)arg0 ;
-(void)setBiasValues:(id)arg0 ;
-(void)setC3dAnimation:(struct __C3DKeyframedAnimation *)arg0 ;
-(void)setCommitsOnCompletion:(BOOL)arg0 ;
-(void)setContinuityValues:(id)arg0 ;
-(void)setCumulative:(BOOL)arg0 ;
-(void)setDuration:(CGFloat)arg0 ;
-(void)setFadeInDuration:(CGFloat)arg0 ;
-(void)setFadeOutDuration:(CGFloat)arg0 ;
-(void)setFillMode:(id)arg0 ;
-(void)setKeyPath:(id)arg0 ;
-(void)setKeyTimes:(id)arg0 ;
-(void)setRemovedOnCompletion:(BOOL)arg0 ;
-(void)setRepeatCount:(float)arg0 ;
-(void)setRepeatDuration:(CGFloat)arg0 ;
-(void)setSpeed:(float)arg0 ;
-(void)setTensionValues:(id)arg0 ;
-(void)setTimeOffset:(CGFloat)arg0 ;
-(void)setTimingFunction:(id)arg0 ;
-(void)setTimingFunctions:(id)arg0 ;
-(void)setUsesSceneTimeBase:(BOOL)arg0 ;
-(void)setValues:(id)arg0 ;


@end


#endif