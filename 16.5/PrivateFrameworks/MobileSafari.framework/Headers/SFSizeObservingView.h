// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFSIZEOBSERVINGVIEW_H
#define SFSIZEOBSERVINGVIEW_H

@class UIView, NSLayoutConstraint, NSLayoutDimension;



@interface SFSizeObservingView : UIView {
    CGSize _lastLayoutSize;
    NSLayoutConstraint *_heightConstraint;
}


@property (retain, nonatomic) NSLayoutDimension *observedHeightDimension; // ivar: _observedHeightDimension
@property (copy, nonatomic) id *sizeChangeCallback; // ivar: _sizeChangeCallback


-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif