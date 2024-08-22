// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKFOOTERVIEWWITHLINK_H
#define HKFOOTERVIEWWITHLINK_H

@class UITableViewHeaderFooterView, NSString, UITextView;
@protocol UITextViewDelegate;



@interface HKFooterViewWithLink : UITableViewHeaderFooterView <UITextViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UITextView *footerTextView; // ivar: _footerTextView
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultReuseIdentifier;
-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(id)_createAttributedTextWithFullText:(id)arg0 linkRange:(struct _NSRange )arg1 link:(id)arg2 ;
-(id)initWithReuseIdentifier:(id)arg0 bodyText:(id)arg1 linkText:(id)arg2 link:(id)arg3 ;
-(id)initWithReuseIdentifier:(id)arg0 fullText:(id)arg1 linkRange:(struct _NSRange )arg2 link:(id)arg3 ;
-(void)_setUpFooterTextViewWithBodyText:(id)arg0 linkText:(id)arg1 link:(id)arg2 ;
-(void)_setUpFooterTextViewWithFullText:(id)arg0 linkRange:(struct _NSRange )arg1 link:(id)arg2 ;
-(void)_setupConstraints;
-(void)updateWithFullText:(id)arg0 linkRange:(struct _NSRange )arg1 link:(id)arg2 ;


@end


#endif