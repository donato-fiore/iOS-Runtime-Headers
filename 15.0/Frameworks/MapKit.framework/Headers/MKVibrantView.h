// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKVIBRANTVIEW_H
#define MKVIBRANTVIEW_H

@class UIVisualEffectView;



@interface MKVibrantView : UIVisualEffectView

@property (nonatomic) NSInteger style; // ivar: _style


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEffect:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didMoveToWindow;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setContinuousCornerRadius:(CGFloat)arg0 ;


@end


#endif