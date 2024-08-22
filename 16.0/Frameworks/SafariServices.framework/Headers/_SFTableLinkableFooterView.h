// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFTABLELINKABLEFOOTERVIEW_H
#define _SFTABLELINKABLEFOOTERVIEW_H

@class UITableViewHeaderFooterView, UITextView, NSLayoutConstraint, NSString;
@protocol UITextViewDelegate, _SFTableLinkableFooterViewDelegate;



@interface _SFTableLinkableFooterView : UITableViewHeaderFooterView <UITextViewDelegate>

 {
    UITextView *_textView;
    NSLayoutConstraint *_textViewLeadingConstraint;
    NSLayoutConstraint *_textViewTrailingConstraint;
    NSString *_text;
    NSString *_linkPlaceholderString;
    NSString *_linkReplacementString;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_SFTableLinkableFooterViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(id)initWithReuseIdentifier:(id)arg0 ;
-(void)_configureSubviewsAndConstraints;
-(void)_updateAttributedString;
-(void)setText:(id)arg0 linkPlaceholderString:(id)arg1 linkReplacementString:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif