// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKPINNEDCONVERSATIONRICHLINKBUBBLE_H
#define CKPINNEDCONVERSATIONRICHLINKBUBBLE_H

@class NSString, LPLinkView;
@protocol LPLinkViewDelegate;


#import "CKPinnedConversationTailedActivityItemView.h"
#import "CKPinnedConversationRichLinkActivityItem.h"

@interface CKPinnedConversationRichLinkBubble : CKPinnedConversationTailedActivityItemView <LPLinkViewDelegate>

 {
    CGFloat _pillCornerRadius;
    NSInteger _activityItemViewContentScale;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) LPLinkView *linkView; // ivar: _linkView
@property (readonly, nonatomic) CKPinnedConversationRichLinkActivityItem *richLinkActivityItem; // ivar: _richLinkActivityItem
@property (readonly) Class superclass;


-(BOOL)supportsActivityItemViewContentScale;
-(BOOL)supportsAlignmentWithOriginationSubAvatarFrame;
-(CGFloat)contentViewHorizontalInsetForPillCornerRadius;
-(CGFloat)pillCornerRadius;
-(NSInteger)activityItemViewContentScale;
-(NSInteger)contentViewContentMode;
-(id)_linkViewFromActivityItem:(id)arg0 ;
-(id)initWithRichLinkActivityItem:(id)arg0 ;
-(struct UIEdgeInsets )contentViewPadding;
-(void)_updateLinkMetadata;
-(void)_updatePillCornerRadius;
-(void)contentSizeCategoryDidChange:(id)arg0 ;
-(void)linkViewNeedsResize:(id)arg0 ;
-(void)setActivityItem:(id)arg0 ;
-(void)setActivityItemViewContentScale:(NSInteger)arg0 ;


@end


#endif