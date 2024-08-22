// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICLOADINGPIELAYER_H
#define ICLOADINGPIELAYER_H

@class CALayer, CAShapeLayer, NSProgress;



@interface ICLoadingPieLayer : CALayer

@property (retain, nonatomic) CAShapeLayer *backgroundLayer; // ivar: _backgroundLayer
@property (retain, nonatomic) NSProgress *observedProgress; // ivar: _observedProgress
@property (retain, nonatomic) CAShapeLayer *pieLayer; // ivar: _pieLayer
@property (readonly, nonatomic) CGFloat progress; // ivar: _progress
@property (nonatomic) BOOL removeOnCompletion; // ivar: _removeOnCompletion


-(id)init;
-(struct CGPath *)newPathForProgress:(CGFloat)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif