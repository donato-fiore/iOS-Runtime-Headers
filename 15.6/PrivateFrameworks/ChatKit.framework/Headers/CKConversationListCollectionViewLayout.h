// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKCONVERSATIONLISTCOLLECTIONVIEWLAYOUT_H
#define CKCONVERSATIONLISTCOLLECTIONVIEWLAYOUT_H


#import <Foundation/Foundation.h>

#import "CKConversationListCollectionViewController.h"

@interface CKConversationListCollectionViewLayout : NSObject

@property (weak, nonatomic) CKConversationListCollectionViewController *conversationListController; // ivar: _conversationListController


-(CGFloat)_edgeToAvatarWidthForPinnedConversationLayoutStyle:(NSInteger)arg0 ;
-(CGFloat)_minimumEdgeToCellSpacingForLayoutStyle:(NSInteger)arg0 ;
-(CGFloat)_totalVerticalRowSpacingForLayoutStyle:(NSInteger)arg0 ;
-(CGFloat)conversationCellHeight;
-(CGFloat)pinnedConversationCellHeightForLayoutStyle:(NSInteger)arg0 cellWidth:(CGFloat)arg1 ;
-(CGFloat)widthForPinnedConversationCellInCollectionViewOfSize:(struct CGSize )arg0 numberOfItems:(NSInteger)arg1 ;
-(NSInteger)_numberOfItemsInSection:(NSUInteger)arg0 ;
-(NSInteger)_pinnedConversationViewLayoutStyleForCollectionViewSize:(struct CGSize )arg0 ;
-(NSInteger)numberOfPinnedConversationColumnsForLayoutStyle:(NSInteger)arg0 ;
-(id)_emptyLayoutSection;
-(id)conversationListLayout;
-(id)init;
-(id)pinGridLayoutGroupForCollectionViewSize:(struct CGSize )arg0 numberOfItems:(NSInteger)arg1 ;
-(id)pinGridLayoutSectionForEnvironment:(id)arg0 withNumberOfItems:(NSInteger)arg1 ;
-(id)pinningOnboardingTitleLayoutSectionForEnvironment:(id)arg0 ;
-(id)rowLayoutSectionForEnvironment:(id)arg0 withRowHeight:(CGFloat)arg1 usingEstimatedRowHeight:(BOOL)arg2 needsPinnedSectionSeparator:(BOOL)arg3 ;
-(id)tipKitLayoutSectionForEnvironment:(id)arg0 ;
-(void)updatePinnedConversationViewLayoutStyle;


@end


#endif