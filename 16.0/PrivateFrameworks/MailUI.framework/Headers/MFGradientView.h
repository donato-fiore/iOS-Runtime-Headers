// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFGRADIENTVIEW_H
#define MFGRADIENTVIEW_H

@class UIView, NSArray, CAGradientLayer;



@interface MFGradientView : UIView

@property (nonatomic) CGPoint endPoint;
@property (retain, nonatomic) NSArray *gradientColors;
@property (readonly, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) NSArray *locations;
@property (nonatomic) CGPoint startPoint;


+(Class)layerClass;


@end


#endif