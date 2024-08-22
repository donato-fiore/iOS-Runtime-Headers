// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSCOREVIEW_H
#define PXSCOREVIEW_H

@class UIView, UILabel;



@interface PXScoreView : UIView {
    UILabel *_label;
    NSUInteger _colorScale;
}




-(id)init;
-(id)initWithColorScale:(NSUInteger)arg0 ;
-(void)layoutSubviews;
-(void)setScore:(CGFloat)arg0 ;


@end


#endif