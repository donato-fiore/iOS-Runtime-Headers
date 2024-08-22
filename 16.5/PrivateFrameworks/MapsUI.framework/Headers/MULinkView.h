// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MULINKVIEW_H
#define MULINKVIEW_H

@class UIView, UITextView, NSAttributedString, NSString;
@protocol UITextViewDelegate;



@interface MULinkView : UIView <UITextViewDelegate>

 {
    UITextView *_textView;
}


@property (retain, nonatomic) NSAttributedString *attributedText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger numberOfLines;
@property (copy, nonatomic) id *selectionBlock; // ivar: _selectionBlock
@property (readonly) Class superclass;


-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(BOOL)textViewShouldBeginEditing:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setupLinkView;
-(void)_updateForButtonShapeStatusChange;
-(void)_updateTintColor;
-(void)textViewDidChangeSelection:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif