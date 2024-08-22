// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUFEEDVIEWCONTROLLERPADSPEC_H
#define PUFEEDVIEWCONTROLLERPADSPEC_H



#import "PUFeedViewControllerSpec.h"

@interface PUFeedViewControllerPadSpec : PUFeedViewControllerSpec



-(BOOL)shouldHideBarsInLandscape;
-(BOOL)shouldShowCommentBadgesInCollectionViewType:(NSInteger)arg0 ;
-(BOOL)shouldShowInvitationsInPopover;
-(BOOL)shouldUseAspectThumbnails;
-(BOOL)shouldUseFullscreenLayout;
-(NSInteger)configurationForSectionHeaderType:(NSInteger)arg0 collectionViewType:(NSInteger)arg1 ;
-(NSInteger)largeNumberOfSubjectsForLikes;
-(NSInteger)promptStyle;
-(id)defaultTextAttributesForCollectionViewType:(NSInteger)arg0 ;
-(id)emphasizedTextAttributesForCollectionViewType:(NSInteger)arg0 ;
-(id)gridSpec;
-(id)popoverFeedViewControllerSpec;
-(struct CGSize )minimumVideoTileSize;
-(struct CGSize )thumbnailSize;
-(struct CGSize )thumbnailSizeForImageSize:(struct CGSize )arg0 ;
-(void)configureCommentSeparatorMetrics:(struct PUFeedSeparatorMetrics *)arg0 ;
-(void)configureFeedCollectionViewLayout:(id)arg0 forCollectionViewType:(NSInteger)arg1 collectionViewSize:(struct CGSize )arg2 collectionViewContentInset:(struct UIEdgeInsets *)arg3 ;
-(void)configureSeparatorMetrics:(struct PUFeedSeparatorMetrics *)arg0 betweenSectionWithInfo:(id)arg1 andSectionWithInfo:(id)arg2 joined:(BOOL)arg3 collectionViewType:(NSInteger)arg4 ;
-(void)configureTextCell:(id)arg0 forSectionFooterWithActionText:(id)arg1 collectionViewType:(NSInteger)arg2 ;
-(void)configureTextCell:(id)arg0 forSectionFooterWithDateText:(id)arg1 collectionViewType:(NSInteger)arg2 ;
-(void)configureTextCell:(id)arg0 forSectionGroupHeaderWithText:(id)arg1 collectionViewType:(NSInteger)arg2 ;
-(void)configureTextCell:(id)arg0 forSectionHeaderWithDescriptionPhrase:(id)arg1 streamDisclosureLabel:(id)arg2 actionText:(id)arg3 buttonType:(NSInteger)arg4 collectionViewType:(NSInteger)arg5 animated:(BOOL)arg6 ;
-(void)getReferenceMaximumLength:(*CGFloat)arg0 minimumNumberOfTilesToOmit:(*NSInteger)arg1 forSectionType:(NSInteger)arg2 collectionViewType:(NSInteger)arg3 ;


@end


#endif