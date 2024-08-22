// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VIBRANTLABELVIEW_H
#define VIBRANTLABELVIEW_H

@class UILabel, UIColor;



@interface VibrantLabelView : UILabel {
    UIColor *_nonVibrantTextColor;
    BOOL _usesVibrantAppearance;
}




-(void)_reduceTransparencyStatusDidChange:(id)arg0 ;
-(void)setTextColor:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif