// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXGRADIENTVIEW_H
#define PXGRADIENTVIEW_H

@class UIView, NSArray, CAGradientLayer;



@interface PXGradientView : UIView

@property (copy, nonatomic) NSArray *colors; // ivar: _colors
@property (nonatomic) CGPoint endPoint;
@property (readonly, nonatomic) CAGradientLayer *gradientLayer;
@property (copy, nonatomic) NSArray *locations;
@property (nonatomic) CGPoint startPoint;


+(Class)layerClass;
-(void)_updateGradientLayerColors;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif