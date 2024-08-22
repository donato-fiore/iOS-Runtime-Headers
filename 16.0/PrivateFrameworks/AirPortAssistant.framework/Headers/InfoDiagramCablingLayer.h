// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INFODIAGRAMCABLINGLAYER_H
#define INFODIAGRAMCABLINGLAYER_H

@class CALayer, CAShapeLayer, NSString, CAGradientLayer;
@protocol CALayerDelegate, InfoDiagramCablingAnchorDelegate;



@interface InfoDiagramCablingLayer : CALayer <CALayerDelegate>



@property (retain, nonatomic) CAShapeLayer *broadbandToWANInnerLineLayer; // ivar: broadbandToWANInnerLineLayer
@property (retain, nonatomic) CAShapeLayer *broadbandToWANOuterLineLayer; // ivar: broadbandToWANOuterLineLayer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSObject<InfoDiagramCablingAnchorDelegate> *diagramAnchorPointDelegate; // ivar: diagramAnchorPointDelegate
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CAGradientLayer *internetGradientLayer; // ivar: internetGradientLayer
@property (retain, nonatomic) CAShapeLayer *internetInnerLineLayer; // ivar: internetInnerLineLayer
@property (retain, nonatomic) CAShapeLayer *internetOuterLineLayer; // ivar: internetOuterLineLayer
@property (nonatomic) BOOL isCompactWidth; // ivar: isCompactWidth
@property (readonly) Class superclass;
@property (retain, nonatomic) CAShapeLayer *swapArcArrowLayer; // ivar: swapArcArrowLayer
@property (retain, nonatomic) CAShapeLayer *swapArcLineLayer; // ivar: swapArcLineLayer
@property (nonatomic) BOOL swapCabling; // ivar: swapCabling


-(id)initNoWANLinkFirstFrame;
-(id)initNoWANLinkLastFrame;
-(void)commonInit;
-(void)createPathForSublayer:(id)arg0 ;
-(void)dealloc;
-(void)layoutSublayers;


@end


#endif