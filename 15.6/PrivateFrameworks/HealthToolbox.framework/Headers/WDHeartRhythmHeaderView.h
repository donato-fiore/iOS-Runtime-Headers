// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDHEARTRHYTHMHEADERVIEW_H
#define WDHEARTRHYTHMHEADERVIEW_H

@class UITableViewHeaderFooterView, NSLayoutConstraint, NSString, NSAttributedString, UITextView, NSURL, UILabel;
@protocol UITextViewDelegate;



@interface WDHeartRhythmHeaderView : UITableViewHeaderFooterView <UITextViewDelegate>



@property (retain, nonatomic) NSLayoutConstraint *bodyFirstBaslineToTitleLastBaslineConstraint; // ivar: _bodyFirstBaslineToTitleLastBaslineConstraint
@property (copy, nonatomic) NSString *bodyText; // ivar: _bodyText
@property (readonly, nonatomic) NSAttributedString *bodyTextAttributedString;
@property (retain, nonatomic) UITextView *bodyTextView; // ivar: _bodyTextView
@property (copy, nonatomic) NSURL *bodyURL; // ivar: _bodyURL
@property (readonly, nonatomic) NSAttributedString *bodyURLAttributedString;
@property (copy, nonatomic) NSString *bodyURLText; // ivar: _bodyURLText
@property (retain, nonatomic) NSLayoutConstraint *bottomMarginToBodyLastBaselineConstraint; // ivar: _bottomMarginToBodyLastBaselineConstraint
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSLayoutConstraint *titleFirstBaselineToTopMarginConstraint; // ivar: _titleFirstBaselineToTopMarginConstraint
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (copy, nonatomic) NSString *titleText;


+(id)defaultReuseIdentifier;
-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(id)initWithReuseIdentifier:(id)arg0 ;
-(void)setUpUI;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateBodyTextView;
-(void)updateConstraintConstants;


@end


#endif