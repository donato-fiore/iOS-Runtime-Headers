// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUPLATTERVIEW_H
#define MUPLATTERVIEW_H

@class UIView, MKVibrantView;



@interface MUPlatterView : UIView {
    MKVibrantView *_visualEffectView;
}


@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView


-(id)init;
-(id)initWithContentView:(id)arg0 ;
-(void)_setup;
-(void)layoutSubviews;


@end


#endif