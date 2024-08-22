// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFEXPANDINGTEXTVIEW_H
#define SFEXPANDINGTEXTVIEW_H

@class UITextView;



@interface SFExpandingTextView : UITextView {
    CGFloat _maxHeight;
}




-(id)init;
-(id)initWithMaxHeight:(CGFloat)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)setText:(id)arg0 ;


@end


#endif