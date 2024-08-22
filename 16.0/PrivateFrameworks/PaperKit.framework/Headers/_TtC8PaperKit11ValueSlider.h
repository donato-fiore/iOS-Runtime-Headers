// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8PAPERKIT11VALUESLIDER_H
#define _TTC8PAPERKIT11VALUESLIDER_H

@class UIControl;



@interface _TtC8PaperKit11ValueSlider : UIControl {
    ? leadingContentView;
    ? trailingContentView;
    ? slider;
    ? contentStackView;
    ? contentStackViewSpacing;
    ? minimumContentSizeHeight;
    ? minValue;
    ? maxValue;
    ? $__lazy_storage_$_currentValue;
}


@property (nonatomic, readonly) CGSize intrinsicContentSize;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didChangeSlider;
-(void)didFinishChangingSlider;
-(void)didStartChangingSlider;


@end


#endif