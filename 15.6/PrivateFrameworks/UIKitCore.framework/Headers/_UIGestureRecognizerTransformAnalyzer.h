// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIGESTURERECOGNIZERTRANSFORMANALYZER_H
#define _UIGESTURERECOGNIZERTRANSFORMANALYZER_H


#import <Foundation/Foundation.h>


@interface _UIGestureRecognizerTransformAnalyzer : NSObject {
    CGFloat _lowPassTranslationMagnitudeDelta;
    CGFloat _lowPassScaleDelta;
    CGFloat _lowPassRotationDelta;
}


@property (readonly, nonatomic) NSInteger dominantComponent; // ivar: _dominantComponent
@property (nonatomic) CGFloat pinchingWeight; // ivar: _pinchingWeight
@property (nonatomic) CGFloat rotationWeight; // ivar: _rotationWeight
@property (nonatomic) CGFloat translationWeight; // ivar: _translationWeight


-(id)init;
-(void)analyzeTouches:(id)arg0 ;
-(void)reset;


@end


#endif