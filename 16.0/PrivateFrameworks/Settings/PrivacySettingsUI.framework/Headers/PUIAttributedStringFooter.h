// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUIATTRIBUTEDSTRINGFOOTER_H
#define PUIATTRIBUTEDSTRINGFOOTER_H

@class UITableViewHeaderFooterView, NSString, PSSpecifier, UITextView, NSLayoutConstraint;
@protocol UITextViewDelegate, PSHeaderFooterView;



@interface PUIAttributedStringFooter : UITableViewHeaderFooterView <UITextViewDelegate, PSHeaderFooterView>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PSSpecifier *specifier; // ivar: _specifier
@property (readonly) Class superclass;
@property (retain, nonatomic) UITextView *textView; // ivar: _textView
@property (retain, nonatomic) NSLayoutConstraint *textViewLeadingConstraint; // ivar: _textViewLeadingConstraint
@property (retain, nonatomic) NSLayoutConstraint *textViewTrailingConstraint; // ivar: _textViewTrailingConstraint


+(id)string:(id)arg0 replacingSubstring:(id)arg1 withImage:(id)arg2 ;
-(CGFloat)preferredHeightForWidth:(CGFloat)arg0 inTableView:(id)arg1 ;
-(id)initWithSpecifier:(id)arg0 ;
-(void)_accessibilitySetInterfaceStyleIntent:(NSUInteger)arg0 ;
-(void)refreshContentsWithSpecifier:(id)arg0 ;
-(void)setTableView:(id)arg0 ;
-(void)setupSubviewsAndContstraints;
-(void)updateConstraints;


@end


#endif