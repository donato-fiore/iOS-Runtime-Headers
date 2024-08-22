// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SVMATERIALBUTTON_H
#define SVMATERIALBUTTON_H

@class AVBackgroundView;


#import "SVButton.h"

@interface SVMaterialButton : SVButton

@property (readonly, nonatomic) AVBackgroundView *backgroundView; // ivar: _backgroundView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif