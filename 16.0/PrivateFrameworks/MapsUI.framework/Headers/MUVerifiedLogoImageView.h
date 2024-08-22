// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUVERIFIEDLOGOIMAGEVIEW_H
#define MUVERIFIEDLOGOIMAGEVIEW_H

@class CAShapeLayer, UIColor;


#import "MUImageView.h"

@interface MUVerifiedLogoImageView : MUImageView {
    CAShapeLayer *_innerRingLayer;
}


@property (readonly, nonatomic) UIColor *innerRingColor;
@property (readonly, nonatomic) UIColor *outerRingColor;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setupCustomBorder;
-(void)_updateInnerRingFrame;
-(void)_updateRingColors;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif