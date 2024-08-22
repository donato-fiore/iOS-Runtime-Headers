// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MURATINGSANDREVIEWSSECTIONCONTROLLER_H
#define MURATINGSANDREVIEWSSECTIONCONTROLLER_H

@class MKPlaceReviewAvatarGenerator, NSMutableArray, NSString, UIView, UIViewController, MKUGCCallToActionViewAppearance;
@protocol MUPlaceCollectionPullQuotePlatterViewDelegate, MUPlaceSectionControlling, MURatingsAndReviewsSectionControllerDelegate, MUInfoCardAnalyticsDelegate;


#import "MUPlaceSectionController.h"
#import "MUScrollableStackView.h"
#import "MUPlaceSectionView.h"
#import "MUPlaceRatingReviewTitleBuilder.h"
#import "MUPlaceSectionFooterViewModel.h"
#import "MUPlaceSectionHeaderViewModel.h"

@interface MURatingsAndReviewsSectionController : MUPlaceSectionController <MUPlaceCollectionPullQuotePlatterViewDelegate, MUPlaceSectionControlling>

 {
    MUScrollableStackView *_contentStackView;
    MUPlaceSectionView *_sectionView;
    MKPlaceReviewAvatarGenerator *_avatarGenerator;
    NSMutableArray *_focusItems;
    MUPlaceRatingReviewTitleBuilder *_titleBuilder;
}


@property (weak, nonatomic) NSObject<MURatingsAndReviewsSectionControllerDelegate> *actionDelegate; // ivar: _actionDelegate
@property (nonatomic, getter=isActive) BOOL active;
@property (weak, nonatomic) NSObject<MUInfoCardAnalyticsDelegate> *analyticsDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property (readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel; // ivar: _sectionHeaderViewModel
@property (readonly, nonatomic) UIView *sectionView;
@property (readonly, nonatomic) UIViewController *sectionViewController;
@property (retain, nonatomic) MKUGCCallToActionViewAppearance *submissionStatus;
@property (readonly) Class superclass;


-(id)infoCardChildPossibleActions;
-(id)initWithMapItem:(id)arg0 ;
-(int)analyticsModuleType;
-(void)_addAppleRatingsCategoryTileIfNeeded:(id)arg0 ;
-(void)_addHorizontalTileToContentStackView:(id)arg0 items:(id)arg1 ;
-(void)_addPlaceCollectionPullQuotesIfNeeded:(id)arg0 ;
-(void)_addRatingSnippets:(id)arg0 withCellItems:(id)arg1 ;
-(void)_addUserReviewCategoryTilesIfNeeded:(id)arg0 ;
-(void)_sectionHeaderAccessoryTapped;
-(void)_setupRatingRows;
-(void)pullQuoteViewDidTapMore:(id)arg0 ;


@end


#endif