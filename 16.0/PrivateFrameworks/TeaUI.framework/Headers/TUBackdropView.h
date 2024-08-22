// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUBACKDROPVIEW_H
#define TUBACKDROPVIEW_H

@class UIView, UIVisualEffectView;



@interface TUBackdropView : UIView

@property (readonly, nonatomic) UIVisualEffectView *backdropView; // ivar: _backdropView
@property (readonly, nonatomic) UIView *contentView;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif