// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HRLINKTEXTVIEW_H
#define HRLINKTEXTVIEW_H

@class UIView, UITapGestureRecognizer, UITextView;
@protocol HRLinkTextViewDelegate;



@interface HRLinkTextView : UIView

@property (nonatomic) NSInteger URLIdentifier; // ivar: _URLIdentifier
@property (nonatomic) NSInteger currentUserInterfaceStyle; // ivar: _currentUserInterfaceStyle
@property (weak, nonatomic) NSObject<HRLinkTextViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) _NSRange linkRange; // ivar: _linkRange
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer
@property (retain, nonatomic) UITextView *textView; // ivar: _textView
@property (copy, nonatomic) id *userInterfaceStyleChanged; // ivar: _userInterfaceStyleChanged


-(id)firstBaselineAnchor;
-(id)initWithLinkRange:(struct _NSRange )arg0 URLIdentifier:(NSInteger)arg1 delegate:(id)arg2 ;
-(id)initWithLinkRange:(struct _NSRange )arg0 URLIdentifier:(NSInteger)arg1 delegate:(id)arg2 userInterfaceStyleChanged:(id)arg3 ;
-(id)lastBaselineAnchor;
-(void)_setUpConstraints;
-(void)_setUpUI;
-(void)_updateCurrentUserInterfaceStyleIfNeeded;
-(void)layoutSubviews;
-(void)linkTextViewTapped:(id)arg0 ;


@end


#endif