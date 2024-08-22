// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMSLASHVIEW_H
#define CAMSLASHVIEW_H

@class UIView, CAShapeLayer;



@interface CAMSlashView : UIView

@property (readonly, nonatomic) CAShapeLayer *_shapeLayer;
@property (nonatomic, getter=isVisible) BOOL visible; // ivar: _visible


+(Class)layerClass;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateShapeLayerColor;
-(void)_updateShapeLayerLineWidth;
-(void)_updateShapeLayerPath;
-(void)_updateShapeLayerProgressAnimated:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)tintColorDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif