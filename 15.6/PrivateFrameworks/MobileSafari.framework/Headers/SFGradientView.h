// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFGRADIENTVIEW_H
#define SFGRADIENTVIEW_H

@class UIView, CAGradientLayer;



@interface SFGradientView : UIView

@property (readonly, nonatomic) CAGradientLayer *gradientLayer;


+(Class)layerClass;
+(id)standardGaussianGradientView;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithColors:(id)arg0 locations:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif