// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUMASKEDVIEW_H
#define SUMASKEDVIEW_H

@class UIView;


#import "SUMaskProvider.h"

@interface SUMaskedView : UIView

@property (retain, nonatomic) SUMaskProvider *maskProvider; // ivar: _maskProvider


-(struct CGPath *)copyMaskPath;
-(void)_reloadMask;
-(void)dealloc;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif