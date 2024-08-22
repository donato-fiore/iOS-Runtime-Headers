// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MUCURATEDGUIDESSECTIONCONTROLLER_H
#define MUCURATEDGUIDESSECTIONCONTROLLER_H

@class MKCuratedCollectionsPlacecardAnalyticsManager, MKCollectionsCarouselView, NSArray, NSString, UIView, UIViewController, MKUGCCallToActionViewAppearance;
@protocol UIScrollViewDelegate, MKCollectionCarouselAnalyticsDelegate, MUPlaceSectionControlling, MUInfoCardAnalyticsDelegate, MKPlaceCollectionsDelegate;


#import "MUPlaceSectionController.h"
#import "MUPlaceSectionView.h"
#import "MUPlaceSectionFooterViewModel.h"
#import "MUPlaceSectionHeaderViewModel.h"

@interface MUCuratedGuidesSectionController : MUPlaceSectionController <UIScrollViewDelegate, MKCollectionCarouselAnalyticsDelegate, MUPlaceSectionControlling>

 {
    MUPlaceSectionView *_sectionView;
}


@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (weak, nonatomic) NSObject<MUInfoCardAnalyticsDelegate> *analyticsDelegate;
@property (retain, nonatomic) MKCuratedCollectionsPlacecardAnalyticsManager *analyticsManager; // ivar: _analyticsManager
@property (retain, nonatomic) MKCollectionsCarouselView *carouselView; // ivar: _carouselView
@property (retain, nonatomic) NSArray *collectionIds; // ivar: _collectionIds
@property (weak, nonatomic) NSObject<MKPlaceCollectionsDelegate> *collectionsDelegate; // ivar: _collectionsDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *placeCollections; // ivar: _placeCollections
@property (readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property (readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel; // ivar: _sectionHeaderViewModel
@property (readonly, nonatomic) UIView *sectionView;
@property (readonly, nonatomic) UIViewController *sectionViewController;
@property (retain, nonatomic) MKUGCCallToActionViewAppearance *submissionStatus;
@property (readonly) Class superclass;


-(BOOL)shouldShowMoreButton;
-(id)_sectionHeaderTitle;
-(id)draggableContent;
-(id)initWithDelegate:(id)arg0 withPlaceCollections:(id)arg1 usingSyncCoordinator:(id)arg2 usingMapItem:(id)arg3 usingCollectionIds:(id)arg4 exploreGuides:(id)arg5 ;
-(int)analyticsModuleType;
-(void)_seeAllTapped;
-(void)_setupCollectionView;
-(void)_setupViews;
-(void)collectionsCarouselDidRouteToCollectionId:(id)arg0 atIndex:(NSInteger)arg1 isSaved:(BOOL)arg2 ;
-(void)collectionsCarouselDidScrollBackward;
-(void)collectionsCarouselDidScrollForward;
-(void)exploreGuidesButtonTapped;
-(void)refreshCollections;
-(void)scrollViewDidScroll:(id)arg0 ;


@end


#endif