// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LPINDETERMINATEPROGRESSSPINNERVIEW_H
#define LPINDETERMINATEPROGRESSSPINNERVIEW_H

@class UIView;


#import "LPComponentView.h"

@interface LPIndeterminateProgressSpinnerView : LPComponentView {
    UIView *_platformView;
}




-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)ensurePlatformView;
-(void)layoutComponentView;


@end


#endif