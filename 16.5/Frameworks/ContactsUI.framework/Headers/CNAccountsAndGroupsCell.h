// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNACCOUNTSANDGROUPSCELL_H
#define CNACCOUNTSANDGROUPSCELL_H

@class UICollectionViewListCell, NSString;
@protocol UITextViewDelegate, CNAccountsAndGroupsCellDelegate;


#import "CNAccountsAndGroupsItem.h"
#import "CNAccountsAndGroupsCellTextView.h"

@interface CNAccountsAndGroupsCell : UICollectionViewListCell <UITextViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNAccountsAndGroupsCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CNAccountsAndGroupsItem *item; // ivar: _item
@property (readonly) Class superclass;
@property (retain, nonatomic) CNAccountsAndGroupsCellTextView *titleTextView; // ivar: _titleTextView
@property (nonatomic) CGFloat titleTextViewHeight; // ivar: _titleTextViewHeight


-(BOOL)isCellEditing;
-(BOOL)isValidTitle:(id)arg0 ;
-(BOOL)textView:(id)arg0 shouldChangeTextInRange:(struct _NSRange )arg1 replacementText:(id)arg2 ;
-(BOOL)textViewShouldBeginEditing:(id)arg0 ;
-(CGFloat)requiredHeightForTextView:(id)arg0 fittingWidth:(CGFloat)arg1 ;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg0 ;
-(void)applyAccessoryTintColor:(id)arg0 ;
-(void)applyTextColor:(id)arg0 ;
-(void)applyTextViewPlaceholderIfNeeded;
-(void)applyTextViewTintColor:(id)arg0 ;
-(void)beginEditingName;
-(void)endEditingName;
-(void)prepareForDisplay;
-(void)prepareForReuse;
-(void)resetTextFieldEnabled;
-(void)setTextViewEnabled:(BOOL)arg0 ;
-(void)setupTextViewConstraints;
-(void)textViewDidBeginEditing:(id)arg0 ;
-(void)textViewDidChange:(id)arg0 ;
-(void)textViewDidEndEditing:(id)arg0 ;


@end


#endif