// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKPINNEDCONVERSATIONSUMMARYBUBBLE_H
#define CKPINNEDCONVERSATIONSUMMARYBUBBLE_H

@class UILabel, NSAttributedString;


#import "CKPinnedConversationTailedActivityItemView.h"
#import "CKPinnedConversationSummaryBubbleActivityItem.h"

@interface CKPinnedConversationSummaryBubble : CKPinnedConversationTailedActivityItemView

@property (readonly, nonatomic) CKPinnedConversationSummaryBubbleActivityItem *summaryBubbleActivityItem; // ivar: _summaryBubbleActivityItem
@property (retain, nonatomic) UILabel *summaryLabel; // ivar: _summaryLabel
@property (readonly, nonatomic) NSAttributedString *summaryText;


-(BOOL)supportsActivityItemViewContentScale;
-(BOOL)supportsAlignmentWithOriginationSubAvatarFrame;
-(CGFloat)pillCornerRadius;
-(NSInteger)contentViewContentMode;
-(id)initWithSummaryBubbleActivityItem:(id)arg0 ;
-(struct UIEdgeInsets )contentViewPadding;
-(void)_updateSummaryLabel;
-(void)contentSizeCategoryDidChange:(id)arg0 ;
-(void)setActivityItem:(id)arg0 ;
-(void)setActivityItemViewContentScale:(NSInteger)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif