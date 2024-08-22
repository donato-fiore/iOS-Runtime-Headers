// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFAIRDROPICONVIEW_H
#define SFAIRDROPICONVIEW_H

@class UIControl, UIImageView;



@interface SFAirDropIconView : UIControl {
    UIImageView *_imageView;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)loadImageIfNeeded;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif