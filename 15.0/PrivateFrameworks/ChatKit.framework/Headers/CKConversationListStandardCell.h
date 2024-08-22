// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKCONVERSATIONLISTSTANDARDCELL_H
#define CKCONVERSATIONLISTSTANDARDCELL_H

@class UIImageView;


#import "CKConversationListCell.h"
#import "CKAvatarView.h"

@interface CKConversationListStandardCell : CKConversationListCell {
    UIImageView *_unreadIndicatorImageView;
    CKAvatarView *_avatarView;
}


@property (nonatomic) BOOL showTypingIndicator; // ivar: _showTypingIndicator


+(CGFloat)leadingLayoutMargin;
+(id)identifierForConversation:(id)arg0 ;
-(BOOL)_boundsShouldCollapseContent:(struct CGRect )arg0 ;
-(BOOL)_isCollapsed;
-(BOOL)_shouldShowAvatarForWidth:(CGFloat)arg0 ;
-(BOOL)avatarView:(id)arg0 shouldShowContact:(id)arg1 ;
-(id)avatarView;
-(id)avatarView:(id)arg0 orderedPropertiesForProperties:(id)arg1 category:(id)arg2 ;
-(id)chevronImageView;
-(id)contactsForPreviewInteractionForAvatarView:(id)arg0 suggestedKeysToFetch:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)overrideImageDataForPreviewInteractionForAvatarView:(id)arg0 ;
-(id)presentingViewControllerForAvatarView:(id)arg0 ;
-(struct CGRect )_calculateIndicatorFrameForSize:(struct CGSize )arg0 trailing:(BOOL)arg1 displayScale:(CGFloat)arg2 insets:(struct UIEdgeInsets )arg3 ;
-(struct CGRect )_calculateRectVerticallyCenteredWithFirstTextLineOfLabel:(id)arg0 horizontallyCenteredInColumn:(struct CGRect )arg1 size:(struct CGSize )arg2 offset:(struct CGPoint )arg3 ;
-(struct CGRect )_calculateSummaryLabelFrameForColumn:(struct CGRect )arg0 summaryLabelCapFrameYOrigin:(CGFloat)arg1 displayScale:(CGFloat)arg2 ;
-(void)_calculateLayoutFrames;
-(void)_resetTypingIndicator;
-(void)_startTypingIndicator;
-(void)_stopTypingIndicator;
-(void)_updateAvatarView;
-(void)_updateLabelVisibility;
-(void)dealloc;
-(void)forceUnreadIndicatorVisibility:(BOOL)arg0 forConversation:(id)arg1 animated:(BOOL)arg2 ;
-(void)increaseContrastDidChange;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)registerForEvents;
-(void)setMuted:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateContentsForConversation:(id)arg0 ;
-(void)updateContentsForConversation:(id)arg0 fastPreview:(BOOL)arg1 ;
-(void)updateForEditing:(BOOL)arg0 ;
-(void)updateFromLabelWithText:(id)arg0 ;
-(void)updateTypingIndicatorIfNeeded;
-(void)updateUnreadIndicatorWithImage:(id)arg0 tintColor:(id)arg1 ;
-(void)updateUnreadIndicatorWithImage:(id)arg0 tintColor:(id)arg1 animated:(BOOL)arg2 ;
-(void)updateWithForwardedConfigurationState:(NSUInteger)arg0 ;


@end


#endif