// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKCONVERSATIONLISTLARGETEXTCELL_H
#define CKCONVERSATIONLISTLARGETEXTCELL_H

@class NSArray, NSLayoutConstraint, UILayoutGuide, NSTextAttachment, UIColor;


#import "CKConversationListCell.h"

@interface CKConversationListLargeTextCell : CKConversationListCell

@property (retain, nonatomic) NSArray *contentSizeCategoryDependentConstraints; // ivar: _contentSizeCategoryDependentConstraints
@property (retain, nonatomic) NSLayoutConstraint *editingDependentConstraint; // ivar: _editingDependentConstraint
@property (retain, nonatomic) UILayoutGuide *firstLineLayoutGuide; // ivar: _firstLineLayoutGuide
@property (retain, nonatomic) NSTextAttachment *unreadIndicatorAttachment; // ivar: _unreadIndicatorAttachment
@property (retain, nonatomic) UIColor *unreadIndicatorColor; // ivar: _unreadIndicatorColor


+(CGFloat)cellHeightForDisplayScale:(CGFloat)arg0 ;
+(id)hyphenationParagraphStyle;
+(id)identifierForConversation:(id)arg0 ;
-(id)_constraintForEditing:(BOOL)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)unreadIndicatorColorForVisibility:(BOOL)arg0 withMuteState:(BOOL)arg1 ;
-(id)unreadIndicatorImageForVisibility:(BOOL)arg0 withMuteState:(BOOL)arg1 ;
-(void)contentSizeCategoryDidChange;
-(void)updateContentsForConversation:(id)arg0 fastPreview:(BOOL)arg1 ;
-(void)updateForEditing:(BOOL)arg0 ;
-(void)updateFromLabelWithText:(id)arg0 ;
-(void)updateUnreadIndicatorWithImage:(id)arg0 tintColor:(id)arg1 ;


@end


#endif