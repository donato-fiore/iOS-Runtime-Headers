// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FMBORDEREDFIELD_H
#define FMBORDEREDFIELD_H

@class UIView, UIColor;


#import "FMHorizontalRule.h"

@interface FMBorderedField : UIView

@property (retain, nonatomic) UIColor *borderColor; // ivar: _borderColor
@property (retain, nonatomic) FMHorizontalRule *bottomRule; // ivar: _bottomRule
@property (nonatomic) BOOL isConfigured; // ivar: _isConfigured
@property (retain, nonatomic) FMHorizontalRule *topRule; // ivar: _topRule


+(BOOL)requiresConstraintBasedLayout;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)awakeFromNib;
-(void)commonSetup;
-(void)prepareForInterfaceBuilder;


@end


#endif