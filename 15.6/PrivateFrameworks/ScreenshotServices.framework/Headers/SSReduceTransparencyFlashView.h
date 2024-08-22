// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSREDUCETRANSPARENCYFLASHVIEW_H
#define SSREDUCETRANSPARENCYFLASHVIEW_H

@class UIView;


#import "SSFlashView.h"

@interface SSReduceTransparencyFlashView : SSFlashView {
    id *_oldCompletionBlock;
    UIView *_colorView;
}




+(CGFloat)expectedAnimationDurationForStyle:(NSUInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)flashWithCompletion:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif