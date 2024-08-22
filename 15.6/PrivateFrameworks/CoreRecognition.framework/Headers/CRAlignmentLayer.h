// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRALIGNMENTLAYER_H
#define CRALIGNMENTLAYER_H

@class CALayer, NSMutableArray, CATextLayer, CAShapeLayer;



@interface CRAlignmentLayer : CALayer

@property (nonatomic) CGRect cardNumberHorizontalDefaultBounds; // ivar: _cardNumberHorizontalDefaultBounds
@property (nonatomic) CGPoint cardNumberHorizontalDefaultPos; // ivar: _cardNumberHorizontalDefaultPos
@property (retain) NSMutableArray *cardNumberLayers; // ivar: _cardNumberLayers
@property (retain) CATextLayer *cardholderNameLayer; // ivar: _cardholderNameLayer
@property (retain) CATextLayer *expirationDateLayer; // ivar: _expirationDateLayer
@property (retain) CALayer *infoLayer; // ivar: _infoLayer
@property (retain) CATextLayer *instructionLayer; // ivar: _instructionLayer
@property (retain) CAShapeLayer *maskLayer; // ivar: _maskLayer
@property (retain) CAShapeLayer *outlineLayer; // ivar: _outlineLayer


+(id)layer;
-(id)init;
-(struct CGPoint )pointOnInfoLayerForPointOnCard:(struct CGPoint )arg0 ;
-(struct CGRect )alignmentRect;
-(void)animateFoundCardRect:(id)arg0 ;
-(void)animateFoundCodeParts:(id)arg0 codePartPositions:(id)arg1 codeFrameIndex:(NSUInteger)arg2 cardHolder:(id)arg3 cardholderPosition:(struct CGPoint )arg4 cardholderFrameIndex:(NSUInteger)arg5 expDate:(id)arg6 expdatePosition:(struct CGPoint )arg7 expDateFrameIndex:(NSUInteger)arg8 completionBlock:(id)arg9 ;
-(void)fadePlacementImage;
-(void)layoutSublayers;
-(void)makeTextLayer:(id)arg0 matchWidthOfText:(id)arg1 ;
-(void)propogateMaskColor:(id)arg0 outlineColor:(id)arg1 placementTextColor:(id)arg2 capturedTextColor:(id)arg3 ;
-(void)resetLayer;


@end


#endif