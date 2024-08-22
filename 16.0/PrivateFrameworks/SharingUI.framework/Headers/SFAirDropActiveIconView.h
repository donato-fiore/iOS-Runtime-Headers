// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFAIRDROPACTIVEICONVIEW_H
#define SFAIRDROPACTIVEICONVIEW_H

@class UIImageView, UIView;



@interface SFAirDropActiveIconView : UIImageView {
    UIView *_circleMaskView;
}


@property (nonatomic, getter=isMasked) BOOL masked; // ivar: _masked


+(id)baseImage;
-(id)initWithFrame:(struct CGRect )arg0 grayscale:(BOOL)arg1 ;
-(void)layoutSubviews;


@end


#endif