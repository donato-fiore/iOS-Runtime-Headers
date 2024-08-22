// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFEXPANDINGTEXTVIEW_H
#define SFEXPANDINGTEXTVIEW_H

@class UITextView;



@interface SFExpandingTextView : UITextView {
    CGFloat _maxHeight;
}




-(id)initWithMaxHeight:(CGFloat)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)setText:(id)arg0 ;


@end


#endif