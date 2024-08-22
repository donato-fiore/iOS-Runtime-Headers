// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFPARALLAXLAYOUTHELPER_H
#define PFPARALLAXLAYOUTHELPER_H

@protocol PFParallaxLayoutConfiguration;

#import <Foundation/Foundation.h>


@interface PFParallaxLayoutHelper : NSObject

@property (readonly, nonatomic) BOOL canInflate;
@property (readonly, nonatomic) NSUInteger classification; // ivar: _classification
@property (readonly, nonatomic) CGSize imageSize; // ivar: _imageSize
@property (readonly, nonatomic) CGRect initialRect; // ivar: _initialRect
@property (readonly, nonatomic) NSObject<PFParallaxLayoutConfiguration> *layoutConfiguration; // ivar: _layoutConfiguration
@property (readonly, nonatomic) CGRect pixelEffectiveAcceptable; // ivar: _pixelEffectiveAcceptable
@property (readonly, nonatomic) CGRect pixelEffectivePreferred; // ivar: _pixelEffectivePreferred


+(CGFloat)scoreBonusInactive;
+(CGFloat)scoreBonusOverlapAvoid;
+(CGFloat)scoreBonusOverlapTarget;
+(CGFloat)scoreBonusParallaxOn;
+(CGFloat)scoreBonusZoomHeadroom;
+(CGFloat)scoreBonusZoomTarget;
+(CGFloat)targetZoomFactorLimit;
+(CGFloat)targetZoomPercent;
+(struct CGRect )inflatePersonFaceRect:(struct CGRect )arg0 ;
+(void)setScoreBonusInactive:(CGFloat)arg0 ;
+(void)setScoreBonusOverlapAvoid:(CGFloat)arg0 ;
+(void)setScoreBonusOverlapTarget:(CGFloat)arg0 ;
+(void)setScoreBonusParallaxOn:(CGFloat)arg0 ;
+(void)setScoreBonusZoomHeadroom:(CGFloat)arg0 ;
+(void)setScoreBonusZoomTarget:(CGFloat)arg0 ;
+(void)setTargetZoomFactorLimit:(CGFloat)arg0 ;
+(void)setTargetZoomPercent:(CGFloat)arg0 ;
-(CGFloat)computeCropScoreForIntermediate:(id)arg0 ;
-(CGFloat)scoreAdjustmentWithUnscoredIntermediate:(id)arg0 unsafeAreaOverlap:(CGFloat)arg1 timeBottomOverlap:(CGFloat)arg2 timeTopOverlap:(CGFloat)arg3 ;
-(id)bestLayout:(id)arg0 ;
-(id)initWithParallaxClassification:(NSUInteger)arg0 initialRect:(struct CGRect )arg1 imageSize:(struct CGSize )arg2 effectiveAcceptableRect:(struct CGRect )arg3 effectivePreferredRect:(struct CGRect )arg4 layoutConfiguration:(id)arg5 ;
-(id)intermediateWithInactiveStrategy:(NSUInteger)arg0 intermediate:(id)arg1 ;
-(id)intermediateWithOverlapStrategy:(NSUInteger)arg0 intermediate:(id)arg1 ;
-(id)intermediateWithParallaxStrategy:(NSUInteger)arg0 intermediate:(id)arg1 ;
-(id)intermediateWithZoomStrategy:(NSUInteger)arg0 intermediate:(id)arg1 ;
-(id)scoreIntermediate:(id)arg0 ;
-(struct CGRect )unsafeAreaInImageSpaceWithVisibleFrame:(struct CGRect )arg0 ;


@end


#endif