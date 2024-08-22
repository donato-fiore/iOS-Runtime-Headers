// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUFADEINBUTTON_H
#define HUFADEINBUTTON_H

@class UIButton, CAGradientLayer;



@interface HUFadeInButton : UIButton

@property (retain) CAGradientLayer *fadeLayer; // ivar: _fadeLayer
@property (nonatomic) BOOL shouldFadeRightToLeft; // ivar: _shouldFadeRightToLeft


+(id)button;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif