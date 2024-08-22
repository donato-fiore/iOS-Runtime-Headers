// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NCCHECKMARKBUTTON_H
#define NCCHECKMARKBUTTON_H

@class UIControl, UIView, UIImageView;



@interface NCCheckmarkButton : UIControl {
    UIView *_backgroundView;
    UIImageView *_checkmarkImageView;
}




+(id)button;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)_init;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif