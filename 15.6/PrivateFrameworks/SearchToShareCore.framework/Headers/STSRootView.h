// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STSROOTVIEW_H
#define STSROOTVIEW_H

@class UIView, UIVisualEffectView;



@interface STSRootView : UIView {
    UIVisualEffectView *_visualEffectView;
}


@property (nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setupView;
-(void)awakeFromNib;


@end


#endif