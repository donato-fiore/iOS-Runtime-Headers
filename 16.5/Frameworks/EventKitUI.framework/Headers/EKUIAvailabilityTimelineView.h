// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKUIAVAILABILITYTIMELINEVIEW_H
#define EKUIAVAILABILITYTIMELINEVIEW_H

@class UIScrollView, NSMutableArray, UIView;



@interface EKUIAvailabilityTimelineView : UIScrollView {
    NSMutableArray *_labels;
    UIView *_bottomPixelBorder;
    CGFloat _offset;
    CGFloat _largestLabelWidth;
}




-(CGFloat)minWidth;
-(id)init;
-(void)setContentOffset:(struct CGPoint )arg0 ;
-(void)setContentWidth:(CGFloat)arg0 ;
-(void)setHorizontalScrollOffset:(CGFloat)arg0 ;
-(void)setLabels;


@end


#endif