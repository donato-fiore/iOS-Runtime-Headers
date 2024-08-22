// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKRICHCOMPLICATIONRINGPROGRESSVIEW_H
#define NTKRICHCOMPLICATIONRINGPROGRESSVIEW_H

@class CDRichComplicationProgressView, CDRichComplicationRingView;



@interface NTKRichComplicationRingProgressView : CDRichComplicationProgressView {
    CGFloat _curveWidth;
    CDRichComplicationRingView *_backgroundView;
    CDRichComplicationRingView *_foregroundView;
}


@property (nonatomic) BOOL clockwise; // ivar: _clockwise


-(id)initWithFamily:(NSInteger)arg0 curveWidth:(CGFloat)arg1 padding:(CGFloat)arg2 forDevice:(id)arg3 ;


@end


#endif