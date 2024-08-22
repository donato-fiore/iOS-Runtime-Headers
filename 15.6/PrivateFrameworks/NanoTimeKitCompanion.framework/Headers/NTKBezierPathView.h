// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKBEZIERPATHVIEW_H
#define NTKBEZIERPATHVIEW_H

@class UIView, UIBezierPath, NSString, UIColor;
@protocol CAAnimationDelegate;


#import "NTKPromise.h"
#import "NTKBezierPathPointModel.h"

@interface NTKBezierPathView : UIView <CAAnimationDelegate>

 {
    UIBezierPath *_animateToPath;
    NTKPromise *_pointModel;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *lineCap;
@property (retain, nonatomic) UIBezierPath *path; // ivar: _path
@property (retain, nonatomic) UIColor *pathColor; // ivar: _pathColor
@property (readonly, nonatomic) NTKBezierPathPointModel *pointModel;
@property (readonly) Class superclass;


+(Class)layerClass;
-(id)_shapeLayer;
-(struct CGPoint )pointOnPathForHorizontalPercentage:(CGFloat)arg0 ;
-(void)animateToPath:(id)arg0 duration:(CGFloat)arg1 curve:(NSInteger)arg2 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;


@end


#endif