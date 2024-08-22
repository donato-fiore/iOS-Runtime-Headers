// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMSLASHMASKVIEW_H
#define CAMSLASHMASKVIEW_H

@class UIView, CAShapeLayer;



@interface CAMSlashMaskView : UIView

@property (readonly, nonatomic) CAShapeLayer *_shapeLayer;
@property (nonatomic) CGRect slashBounds; // ivar: _slashBounds


+(Class)layerClass;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateShapeLayerAnimated:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateMaskAnimated;


@end


#endif