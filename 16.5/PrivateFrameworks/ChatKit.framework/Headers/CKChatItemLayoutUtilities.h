// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKCHATITEMLAYOUTUTILITIES_H
#define CKCHATITEMLAYOUTUTILITIES_H


#import <Foundation/Foundation.h>


@interface CKChatItemLayoutUtilities : NSObject



+(BOOL)needsAdditionalBracketPaddingForChatItem:(id)arg0 prevChatItem:(id)arg1 ;
+(BOOL)nextItemIsOriginatorWithRepliesForIndex:(NSUInteger)arg0 allDatasourceItems:(id)arg1 ;
+(BOOL)nextMessageIsReplyForIndex:(NSUInteger)arg0 allDatasourceItems:(id)arg1 ;
+(BOOL)prevMessageIsReplyForIndex:(NSUInteger)arg0 allDatasourceItems:(id)arg1 ;
+(CGFloat)adjustedBalloonTopSpacingWithSpacing:(CGFloat)arg0 previousChatItem:(id)arg1 ;
+(CGFloat)adjustedTopSpacingForTextAlignmentInsetsWithSpacing:(CGFloat)arg0 chatItem:(id)arg1 previousChatItem:(id)arg2 ;
+(id)avatarSupplementaryItemForChatItem:(id)arg0 layoutEnvironment:(id)arg1 ;
+(id)balloonEdgeSpacingForItemWithLayoutEnvironment:(id)arg0 orientation:(char)arg1 itemSize:(struct CGSize )arg2 supplementaryItems:(id)arg3 ;
+(id)dynamicWidthLayoutSizeWithHeight:(CGFloat)arg0 ;
+(id)layoutGroupForItem:(id)arg0 ;
+(id)layoutSizeWithSize:(struct CGSize )arg0 ;
+(id)tapbackLayoutAnchorForAcknowledgmentChatItem:(id)arg0 ;
+(id)tapbackSupplementaryItemForChatItem:(id)arg0 layoutEnvironment:(id)arg1 ;
+(id)transcriptBalloonVerticalLayoutSpacingWithTopSpacing:(CGFloat)arg0 bottomSpacing:(CGFloat)arg1 previousChatItem:(id)arg2 ;
+(id)transcriptVerticalEdgeSpacingForChatItem:(id)arg0 previousChatItem:(id)arg1 topSpacing:(CGFloat)arg2 bottomSpacing:(CGFloat)arg3 ;
+(struct CGSize )sizeWithLayoutSize:(id)arg0 ;


@end


#endif