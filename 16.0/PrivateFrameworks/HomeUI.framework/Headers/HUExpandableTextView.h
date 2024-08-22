// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUEXPANDABLETEXTVIEW_H
#define HUEXPANDABLETEXTVIEW_H

@class UIView, NSAttributedString, UIButton, NSArray, NSString, NSDictionary, UITextView;
@protocol HUExpandableTextViewDelegate, HFStringGenerator;



@interface HUExpandableTextView : UIView

@property (nonatomic) BOOL alwaysShowMoreButtonUnlessExpanded; // ivar: _alwaysShowMoreButtonUnlessExpanded
@property (retain, nonatomic) NSAttributedString *attributedText;
@property (weak, nonatomic) NSObject<HUExpandableTextViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic, getter=isExpanded) BOOL expanded; // ivar: _expanded
@property (nonatomic) BOOL fitsWithinLineLimit; // ivar: _fitsWithinLineLimit
@property (nonatomic) NSUInteger languageDirection; // ivar: _languageDirection
@property (retain, nonatomic) UIButton *moreButton; // ivar: _moreButton
@property (retain, nonatomic) NSArray *moreButtonLayoutConstraints; // ivar: _moreButtonLayoutConstraints
@property (nonatomic) NSUInteger numberOfLines; // ivar: _numberOfLines
@property (copy, nonatomic) NSObject<HFStringGenerator> *stringGenerator; // ivar: _stringGenerator
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSDictionary *textAttributes; // ivar: _textAttributes
@property (retain, nonatomic) UITextView *textView; // ivar: _textView


-(CGFloat)heightForWidth:(CGFloat)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_updateLanguageDirection;
-(void)layoutSubviews;
-(void)moreButtonTapped:(id)arg0 ;
-(void)updateConstraints;


@end


#endif