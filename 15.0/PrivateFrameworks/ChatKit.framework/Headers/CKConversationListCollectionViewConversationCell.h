// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKCONVERSATIONLISTCOLLECTIONVIEWCONVERSATIONCELL_H
#define CKCONVERSATIONLISTCOLLECTIONVIEWCONVERSATIONCELL_H

@class NSString;
@protocol CKConversationListCellDelegate, CKConversationListCell, CKConversationListCollectionViewCellDelegate;


#import "CKConversationListEmbeddedCollectionViewCell.h"
#import "_CKCollectionViewTapGestureRecognizer.h"

@interface CKConversationListCollectionViewConversationCell : CKConversationListEmbeddedCollectionViewCell <CKConversationListCellDelegate, CKConversationListCell>



@property (retain, nonatomic) _CKCollectionViewTapGestureRecognizer *avatarViewTapGestureRecognizer; // ivar: _avatarViewTapGestureRecognizer
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKConversationListCollectionViewCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) UIEdgeInsets marginInsets; // ivar: _marginInsets
@property (nonatomic) BOOL shouldHidePreviewSummary;
@property (readonly) Class superclass;


+(CGFloat)cellHeightForDisplayScale:(CGFloat)arg0 ;
+(Class)conversationCellClassForCurrentSizeCategory;
+(Class)embeddedTableViewCellClass;
+(id)identifierForConversation:(id)arg0 ;
+(id)reuseIdentifier;
-(BOOL)avatarView:(id)arg0 shouldShowContact:(id)arg1 ;
-(CGFloat)widthForDeterminingAvatarVisibility;
-(id)avatarView;
-(id)embeddedConversationTableViewCell;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)avatarHeaderWasTappedForConversation:(id)arg0 inCell:(id)arg1 ;
-(void)didHoverOverCell:(id)arg0 ;
-(void)forceUnreadIndicatorVisibility:(BOOL)arg0 forConversation:(id)arg1 animated:(BOOL)arg2 ;
-(void)layoutSubviews;
-(void)selectedDeleteButtonForConversation:(id)arg0 inCell:(id)arg1 ;
-(void)setEditingMode:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)updateContentsForConversation:(id)arg0 ;
-(void)updateContentsForConversation:(id)arg0 fastPreview:(BOOL)arg1 ;


@end


#endif