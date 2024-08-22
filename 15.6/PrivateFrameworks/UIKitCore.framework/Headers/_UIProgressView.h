// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIPROGRESSVIEW_H
#define _UIPROGRESSVIEW_H

@class NSProgress;


#import "UIView.h"
#import "_UICircleProgressView.h"

@interface _UIProgressView : UIView {
    _UICircleProgressView *_progressView;
}


@property (retain, nonatomic) NSProgress *trackedProgress; // ivar: _trackedProgress


-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_updateProgressValue;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif