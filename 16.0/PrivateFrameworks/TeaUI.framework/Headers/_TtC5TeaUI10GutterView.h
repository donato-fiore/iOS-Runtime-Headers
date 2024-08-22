// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC5TEAUI10GUTTERVIEW_H
#define _TTC5TEAUI10GUTTERVIEW_H

@class UIScrollView;



@interface _TtC5TeaUI10GutterView : UIScrollView {
    ? contentView;
    ? childScrollView;
    ? gutters;
    ? observations;
    ? boundsObservers;
}


@property (nonatomic) CGPoint contentOffset;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutMarginsDidChange;
-(void)layoutSubviews;


@end


#endif