// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICBASELAYOUTMANAGER_H
#define ICBASELAYOUTMANAGER_H

@class NSLayoutManager, UITextView;



@interface ICBaseLayoutManager : NSLayoutManager

@property (weak, nonatomic) UITextView *textView; // ivar: _textView


+(id)defaultLinkTextAttributes;
-(CGFloat)bulletYOffsetForCharacterAtIndex:(NSUInteger)arg0 ;
-(id)textContainer;
-(id)textController;
-(void)drawBulletsForListRange:(struct _NSRange )arg0 paragraphStyle:(id)arg1 atPoint:(struct CGPoint )arg2 ;
-(void)drawListStylesForCharacterRange:(struct _NSRange )arg0 atPoint:(struct CGPoint )arg1 ;


@end


#endif