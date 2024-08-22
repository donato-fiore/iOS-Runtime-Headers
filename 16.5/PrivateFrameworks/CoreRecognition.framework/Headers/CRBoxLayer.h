// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRBOXLAYER_H
#define CRBOXLAYER_H

@class CAReplicatorLayer, CATextLayer, NSMutableArray, CAShapeLayer;



@interface CRBoxLayer : CAReplicatorLayer

@property (retain) CATextLayer *codeLayer; // ivar: _codeLayer
@property (retain) NSMutableArray *completionBlocks; // ivar: _completionBlocks
@property BOOL customInit; // ivar: _customInit
@property CGFloat demoSpeed; // ivar: _demoSpeed
@property (nonatomic) CGFloat frameRatio; // ivar: _frameRatio
@property (retain) CAShapeLayer *reticleLayer; // ivar: _reticleLayer


+(id)layer;
-(id)init;
-(id)initWithCodeFrameRatio:(CGFloat)arg0 ;
-(void)addCompletionBlock:(id)arg0 ;
-(void)animateConceal;
-(void)animatePulseColor:(id)arg0 ;
-(void)animateReveal;
-(void)animateToPosition:(struct CGPoint )arg0 transform:(struct CATransform3D )arg1 opacity:(CGFloat)arg2 type:(NSInteger)arg3 ;
-(void)dealloc;
-(void)layoutSublayers;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)positionForCodeBoxPoints:(id)arg0 ;
-(void)setString:(id)arg0 mirrored:(BOOL)arg1 inverted:(BOOL)arg2 ;


@end


#endif