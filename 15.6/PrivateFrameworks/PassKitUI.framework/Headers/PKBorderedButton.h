// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKBORDEREDBUTTON_H
#define PKBORDEREDBUTTON_H

@class UIButton, UIView;


#import "PKBorderedButtonConfiguration.h"

@interface PKBorderedButton : UIButton {
    UIView *_topBorder;
    UIView *_bottomBorder;
    UIView *_trailingBorder;
    UIView *_leadingBorder;
}


@property (copy, nonatomic) PKBorderedButtonConfiguration *borderConfiguration;


+(id)borderedButtonWithConfiguration:(id)arg0 primaryAction:(id)arg1 ;
-(void)_updateForConfigurationChange;
-(void)layoutSubviews;


@end


#endif