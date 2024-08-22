// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTADAPTATIVELAYOUTVIEW_H
#define AVTADAPTATIVELAYOUTVIEW_H

@class UIView;
@protocol AVTAdaptativeLayout;



@interface AVTAdaptativeLayoutView : UIView

@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (retain, nonatomic) NSObject<AVTAdaptativeLayout> *layout; // ivar: _layout


-(id)initWithFrame:(struct CGRect )arg0 contentView:(id)arg1 ;


@end


#endif