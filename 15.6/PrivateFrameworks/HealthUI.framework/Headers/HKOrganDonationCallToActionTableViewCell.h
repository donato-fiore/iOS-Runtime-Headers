// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKORGANDONATIONCALLTOACTIONTABLEVIEWCELL_H
#define HKORGANDONATIONCALLTOACTIONTABLEVIEWCELL_H

@class UITableViewCell, UIButton, UITextView, NSAttributedString, NSString, UIView, UILabel;
@protocol UITextViewDelegate;



@interface HKOrganDonationCallToActionTableViewCell : UITableViewCell <UITextViewDelegate>



@property (retain, nonatomic) UIButton *actionButton; // ivar: _actionButton
@property (retain, nonatomic) UITextView *callToActionTextView; // ivar: _callToActionTextView
@property (readonly, nonatomic) NSAttributedString *callToActionTextViewString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *spacerView; // ivar: _spacerView
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


+(id)defaultReuseIdentifier;
-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)setupConstraints;
-(void)setupSubviews;


@end


#endif