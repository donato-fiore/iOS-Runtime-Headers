// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCLTEXTVIEW_H
#define MCLTEXTVIEW_H

@class UITextView, UILongPressGestureRecognizer, UITapGestureRecognizer;



@interface MCLTextView : UITextView

@property (readonly, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // ivar: _longPressGestureRecognizer
@property (readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer


-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)onLongPress:(id)arg0 ;
-(void)onTap:(id)arg0 ;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;


@end


#endif