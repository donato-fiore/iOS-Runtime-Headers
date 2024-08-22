// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUGRADIENTVIEW_H
#define SUGRADIENTVIEW_H

@class UIView;


#import "SUGradient.h"

@interface SUGradientView : UIView {
    *CGGradient _cgGradient;
}


@property (copy, nonatomic) SUGradient *gradient; // ivar: _gradient


-(void)dealloc;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif