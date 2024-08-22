// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKCONVERSATIONLISTCELL_H
#define CKCONVERSATIONLISTCELL_H

@class UITableViewCell, UIDateLabel, UILabel, CAGradientLayer, UIButton, UIImageView, NSString, NSDate;
@protocol CKConversationListCell, CKConversationListCellDelegate;


#import "CKLabel.h"
#import "CKConversationListTypingIndicatorView.h"
#import "CKAvatarView.h"
#import "CKConversation.h"

@interface CKConversationListCell : UITableViewCell <CKConversationListCell>

 {
    UIDateLabel *_dateLabel;
    UILabel *_summaryLabel;
    CAGradientLayer *_gradient;
    UIButton *_closeButton;
    UILabel *_summaryBlockedLabel;
    UIImageView *_chevronImageView;
    UIImageView *_muteIndicatorImageView;
    CKLabel *_fromLabel;
    BOOL _isPlaceholder;
    CKConversationListTypingIndicatorView *_typingIndicatorView;
}


@property (nonatomic) BOOL _editingPins; // ivar: __editingPins
@property (readonly, nonatomic) CKAvatarView *avatarView;
@property (nonatomic) CGRect containerBounds; // ivar: _containerBounds
@property (retain, nonatomic) CKConversation *conversation; // ivar: _conversation
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKConversationListCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL freezeSummaryText; // ivar: _freezeSummaryText
@property (readonly, nonatomic) CKLabel *fromLabel;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isMuted) BOOL muted; // ivar: _muted
@property (retain, nonatomic) NSDate *searchMessageDate; // ivar: _searchMessageDate
@property (copy, nonatomic) NSString *searchMessageGUID; // ivar: _searchMessageGUID
@property (copy, nonatomic) NSString *searchSummaryText; // ivar: _searchSummaryText
@property (nonatomic) BOOL shouldHidePreviewSummary; // ivar: _shouldHidePreviewSummary
@property (nonatomic) BOOL shouldLabelsBeHighlighted; // ivar: _shouldLabelsBeHighlighted
@property (readonly) Class superclass;
@property (nonatomic) BOOL verified; // ivar: _verified


+(CGFloat)cellHeightForDisplayScale:(CGFloat)arg0 ;
+(id)identifierForConversation:(id)arg0 ;
-(BOOL)lastMessageIsTypingIndicator;
-(BOOL)showingEditControl;
-(NSUInteger)unreadMessageCount;
-(id)_makeSummaryAttributedStringWithText:(id)arg0 multiwayConversation:(id)arg1 ;
-(id)dateLabel;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)summaryAttributedTextForBlockedConversationWithIcon:(BOOL)arg0 ;
-(id)summaryLabel;
-(id)summaryLabelTextColor;
-(id)unreadIndicatorColorForVisibility:(BOOL)arg0 withMuteState:(BOOL)arg1 ;
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
-(void)updateForEditing:(BOOL)arg0 ;
-(void)updateFromLabelWithText:(id)arg0 ;
-(void)updateLabelTextColors;
-(void)updateMuteIndicatorColor;
-(void)updateSummaryTextForConversation:(id)arg0 fastPreview:(BOOL)arg1 ;
-(void)updateUnreadIndicatorForCurrentConversation;
-(void)updateUnreadIndicatorWithImage:(id)arg0 tintColor:(id)arg1 ;
-(void)updateVerifiedCheckmarkForBusiness;
-(void)updateWithForwardedConfigurationState:(NSUInteger)arg0 ;
-(void)updateWithSearchResult:(id)arg0 ;


@end


#endif