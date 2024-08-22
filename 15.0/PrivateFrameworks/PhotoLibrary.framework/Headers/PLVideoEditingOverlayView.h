// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLVIDEOEDITINGOVERLAYVIEW_H
#define PLVIDEOEDITINGOVERLAYVIEW_H

@class UIView, UILabel, UITextView;



@interface PLVideoEditingOverlayView : UIView {
    UILabel *_titleLabel;
    UITextView *_bodyLabel;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)setBody:(id)arg0 ;
-(void)setTitle:(id)arg0 ;


@end


#endif