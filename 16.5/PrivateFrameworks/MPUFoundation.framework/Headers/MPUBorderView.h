// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPUBORDERVIEW_H
#define MPUBORDERVIEW_H

@class UIView;


#import "MPUBorderConfiguration.h"

@interface MPUBorderView : UIView

@property (copy, nonatomic) MPUBorderConfiguration *borderConfiguration; // ivar: _borderConfiguration
@property (nonatomic) BOOL hidesWhenFullyTransparent; // ivar: _hidesWhenFullyTransparent
@property (readonly, nonatomic) CGFloat requiredOutsetForDropShadow;
@property (readonly, nonatomic) UIEdgeInsets resizableImageCapInsets;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif