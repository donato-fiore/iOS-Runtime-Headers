// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDROPZONECIRCLEVIEW_H
#define CKDROPZONECIRCLEVIEW_H

@class UIView, CAShapeLayer;



@interface CKDropZoneCircleView : UIView

@property (retain, nonatomic) CAShapeLayer *dropZoneShapeLayer; // ivar: _dropZoneShapeLayer
@property (readonly, nonatomic) BOOL isAnimating; // ivar: _isAnimating


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)spinAnimation;
-(void)_updateShapeLayerStrokeColor;
-(void)layoutSubviews;
-(void)startAnimating;
-(void)stopAnimating;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif