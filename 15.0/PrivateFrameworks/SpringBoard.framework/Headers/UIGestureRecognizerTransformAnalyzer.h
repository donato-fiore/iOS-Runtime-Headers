// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIGESTURERECOGNIZERTRANSFORMANALYZER_H
#define UIGESTURERECOGNIZERTRANSFORMANALYZER_H


#import <Foundation/Foundation.h>

#import "UIGestureRecognizerTransformAnalyzerInfo.h"

@interface UIGestureRecognizerTransformAnalyzer : NSObject

@property (readonly, nonatomic) int dominantComponent; // ivar: _dominantComponent
@property (nonatomic) CGFloat pinchingWeight; // ivar: _pinchingWeight
@property (nonatomic) CGFloat rotationWeight; // ivar: _rotationWeight
@property (readonly, nonatomic) UIGestureRecognizerTransformAnalyzerInfo *smoothedInfo; // ivar: _smoothedInfo
@property (nonatomic) CGFloat translationWeight; // ivar: _translationWeight


-(id)analyzeTouches:(id)arg0 ;
-(id)init;
-(void)reset;


@end


#endif