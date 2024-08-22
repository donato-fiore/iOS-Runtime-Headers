// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKRICHCOMPLICATIONRINGPROGRESSVIEW_H
#define NTKRICHCOMPLICATIONRINGPROGRESSVIEW_H



#import "NTKRichComplicationProgressView.h"
#import "NTKRichComplicationRingView.h"

@interface NTKRichComplicationRingProgressView : NTKRichComplicationProgressView {
    CGFloat _curveWidth;
    NTKRichComplicationRingView *_backgroundView;
    NTKRichComplicationRingView *_foregroundView;
}


@property (nonatomic) BOOL clockwise; // ivar: _clockwise


-(id)initWithFamily:(NSInteger)arg0 curveWidth:(CGFloat)arg1 padding:(CGFloat)arg2 forDevice:(id)arg3 ;


@end


#endif