// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKCONVERSATIONLISTCELL_H
#define CKCONVERSATIONLISTCELL_H

@class UITableViewCell, UIImageView, UIButton, NSString, CAGradientLayer, NSDate, UILabel;
@protocol CKConversationListCell, CKConversationListCellDelegate;


#import "CKAvatarView.h"
#import "CKConversationListCellLayout.h"
#import "CKConversation.h"
#import "CKDateLabel.h"
#import "CKLabel.h"
#import "CKConversationListTypingIndicatorView.h"

@interface CKConversationListCell : UITableViewCell <CKConversationListCell>



@property (nonatomic) BOOL _editingPins; // ivar: __editingPins
@property (readonly, nonatomic) CKAvatarView *avatarView;
@property (retain, nonatomic) CKConversationListCellLayout *cellLayout; // ivar: _cellLayout
@property (retain, nonatomic) UIImageView *chevronImageView; // ivar: _chevronImageView
@property (retain, nonatomic) UIButton *closeButton; // ivar: _closeButton
@property (nonatomic) CGRect containerBounds; // ivar: _containerBounds
@property (retain, nonatomic) CKConversation *conversation; // ivar: _conversation
@property (retain, nonatomic) CKDateLabel *dateLabel; // ivar: _dateLabel
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKConversationListCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL freezeSummaryText; // ivar: _freezeSummaryText
@property (retain, nonatomic) CKLabel *fromLabel; // ivar: _fromLabel
@property (readonly, nonatomic) CAGradientLayer *gradient; // ivar: _gradient
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImageView *muteIndicatorImageView; // ivar: _muteIndicatorImageView
@property (nonatomic, getter=isMuted) BOOL muted; // ivar: _muted
@property (nonatomic, getter=isPlaceholder) BOOL placeholder; // ivar: _placeholder
@property (retain, nonatomic) NSDate *searchMessageDate; // ivar: _searchMessageDate
@property (copy, nonatomic) NSString *searchMessageGUID; // ivar: _searchMessageGUID
@property (copy, nonatomic) NSString *searchSummaryText; // ivar: _searchSummaryText
@property (nonatomic) BOOL shouldHidePreviewSummary; // ivar: _shouldHidePreviewSummary
@property (nonatomic) BOOL shouldLabelsBeHighlighted; // ivar: _shouldLabelsBeHighlighted
@property (readonly, nonatomic) UILabel *summaryBlockedLabel; // ivar: _summaryBlockedLabel
@property (retain, nonatomic) UILabel *summaryLabel; // ivar: _summaryLabel
@property (readonly) Class superclass;
@property (retain, nonatomic) CKConversationListTypingIndicatorView *typingIndicatorView; // ivar: _typingIndicatorView
@property (nonatomic) BOOL verified; // ivar: _verified


+(CGFloat)cellHeightForDisplayScale:(CGFloat)arg0 ;
+(id)identifierForConversation:(id)arg0 ;
-(BOOL)lastMessageIsTypingIndicator;
-(BOOL)shouldAppearAsRecoverableConversation;
-(BOOL)shouldHideMuteIndicator;
-(BOOL)showingEditControl;
-(NSUInteger)unreadMessageCount;
-(id)_makeSummaryAttributedStringWithText:(id)arg0 multiwayConversation:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)summaryAttributedTextForBlockedConversationWithIcon:(BOOL)arg0 ;
-(id)unreadIndicatorImageForVisibility:(BOOL)arg0 withMuteState:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_contentSizeCategoryDidChange:(id)arg0 ;
-(void)_increaseContrastDidChange:(id)arg0 ;
// -(void)_performBlock:(id)arg0 animated:(unk)arg1  ;
-(void)contentSizeCategoryDidChange;
-(void)dealloc;
-(void)deleteButtonTapped;
-(void)didHoverOverCell:(id)arg0 ;
-(void)increaseContrastDidChange;
-(void)prepareForReuse;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setEditingPins:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)updateBlockedSummaryLabelIfNeeded;
-(void)updateContentsForConversation:(id)arg0 ;
-(void)updateContentsForConversation:(id)arg0 fastPreview:(BOOL)arg1 ;
-(void)updateDateLabel:(id)arg0 conversation:(id)arg1 ;
-(void)updateForEditing:(BOOL)arg0 ;
-(void)updateFromLabelWithText:(id)arg0 ;
-(void)updateMuteIndicatorColor;
-(void)updateSummaryLabel:(id)arg0 conversation:(id)arg1 fastPreview:(BOOL)arg2 ;
-(void)updateUnreadIndicatorForCurrentConversation;
-(void)updateUnreadIndicatorWithImage:(id)arg0 ;
-(void)updateVerifiedCheckmarkForBusiness;
-(void)updateWithForwardedConfigurationState:(NSUInteger)arg0 ;
-(void)updateWithSearchResult:(id)arg0 ;


@end


#endif