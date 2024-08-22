// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKPLACECURATEDCOLLECTIONSVIEWCONTROLLER_H
#define MKPLACECURATEDCOLLECTIONSVIEWCONTROLLER_H

@class NSArray, NSString;
@protocol MKCollectionCarouselRoutingDelegate, MKCollectionCarouselAnalyticsDelegate, MKModuleViewControllerProtocol, MKPlaceCollectionsDelegate;


#import "MKPlaceSectionViewController.h"
#import "MKMapItem.h"
#import "MKCuratedCollectionsPlacecardAnalyticsManager.h"
#import "MKCollectionsCarouselView.h"
#import "MKPlaceSectionHeaderView.h"

@interface MKPlaceCuratedCollectionsViewController : MKPlaceSectionViewController <MKCollectionCarouselRoutingDelegate, MKCollectionCarouselAnalyticsDelegate, MKModuleViewControllerProtocol>

 {
    MKMapItem *_mapItem;
    CGSize _viewSize;
}


@property (retain, nonatomic) MKCuratedCollectionsPlacecardAnalyticsManager *analyticsManager; // ivar: _analyticsManager
@property (retain, nonatomic) MKCollectionsCarouselView *carouselView; // ivar: _carouselView
@property (retain, nonatomic) NSArray *collectionIds; // ivar: _collectionIds
@property (weak, nonatomic) NSObject<MKPlaceCollectionsDelegate> *collectionsDelegate; // ivar: _collectionsDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MKPlaceSectionHeaderView *headerView; // ivar: _headerView
@property (retain, nonatomic) NSArray *placeCollections; // ivar: _placeCollections
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(BOOL)shouldShowMoreButton;
-(id)initWithDelegate:(id)arg0 withPlaceCollections:(id)arg1 usingSyncCoordinator:(id)arg2 usingMapItem:(id)arg3 usingCollectionIds:(id)arg4 exploreGuides:(id)arg5 ;
-(void)collectionsCarouselDidRouteToCollectionId:(id)arg0 atIndex:(NSInteger)arg1 isSaved:(BOOL)arg2 ;
-(void)collectionsCarouselDidScrollBackward;
-(void)collectionsCarouselDidScrollForward;
-(void)refreshCollections;
-(void)routeToCuratedCollection:(id)arg0 ;
-(void)routeToGuidesHomeFromExploreGuides:(id)arg0 ;
-(void)setUpHeaderView;
-(void)showMoreTapped;
-(void)updateConstraintsForCarouselView;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif