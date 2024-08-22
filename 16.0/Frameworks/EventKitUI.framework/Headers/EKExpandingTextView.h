// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKEXPANDINGTEXTVIEW_H
#define EKEXPANDINGTEXTVIEW_H

@class UITextView, UILabel, NSString;
@protocol UITextViewDelegate;



@interface EKExpandingTextView : UITextView <UITextViewDelegate>

 {
    UILabel *_placeholderLabel;
    BOOL _allowEnclosingViewScroll;
    CGSize _previousIntrinsicContentSize;
    CGSize _previousSizeThatFits;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *placeholder;
@property (readonly) Class superclass;


-(BOOL)_shouldScrollEnclosingScrollView;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updatePlaceholder;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setAttributedText:(id)arg0 ;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setContentOffset:(struct CGPoint )arg0 ;
-(void)setContentSize:(struct CGSize )arg0 ;
-(void)setFont:(id)arg0 ;
-(void)setTextAlignment:(NSInteger)arg0 ;


@end


#endif