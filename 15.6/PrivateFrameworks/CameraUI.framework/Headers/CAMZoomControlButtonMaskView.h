// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMZOOMCONTROLBUTTONMASKVIEW_H
#define CAMZOOMCONTROLBUTTONMASKVIEW_H

@class UIView, CAShapeLayer;



@interface CAMZoomControlButtonMaskView : UIView

@property (readonly, nonatomic) CAShapeLayer *_shapeLayer; // ivar: __shapeLayer
@property (nonatomic) CGRect maskOvalFrame; // ivar: _maskOvalFrame


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif