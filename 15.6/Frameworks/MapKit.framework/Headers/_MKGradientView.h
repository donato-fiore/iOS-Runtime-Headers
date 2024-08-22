// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKGRADIENTVIEW_H
#define _MKGRADIENTVIEW_H

@class UIView, CAGradientLayer, NSArray, NSString;



@interface _MKGradientView : UIView {
    CAGradientLayer *_gradient;
}


@property (copy) NSArray *gradientColors;
@property CGPoint gradientEndPoint;
@property (copy) NSArray *gradientLocations;
@property CGPoint gradientStartPoint;
@property (copy) NSString *gradientType;


+(Class)layerClass;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif