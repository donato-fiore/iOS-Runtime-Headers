// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIUIGRADIENTVIEW_H
#define FIUIGRADIENTVIEW_H

@class UIView;


#import "FIUIShapeView.h"

@interface FIUIGradientView : UIView {
    FIUIShapeView *_maskView;
}




+(Class)layerClass;
-(id)gradientLayer;
-(id)init;
-(void)layoutSubviews;
-(void)setColors:(id)arg0 ;
-(void)setLocations:(id)arg0 ;
-(void)setMask:(id)arg0 ;


@end


#endif