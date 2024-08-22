// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MUNEARESTSTATIONSECTIONCONTROLLER_H
#define MUNEARESTSTATIONSECTIONCONTROLLER_H

@class MKETAProvider, MKMapItem, NSString, UIView, UIViewController, MKUGCCallToActionViewAppearance;
@protocol MKETAProviderObserver, MUPlaceVerticalCardContainerViewDelegate, MUPlaceSectionControlling, MUInfoCardAnalyticsDelegate, MUNearestStationSectionControllerDelegate;


#import "MUTransitLineItemSectionController.h"
#import "MUPlaceSectionView.h"
#import "MUNearestStationRowView.h"
#import "MUPlaceFooterAttributionController.h"
#import "MUPlaceVerticalCardContainerView.h"
#import "MUPlaceSectionFooterViewModel.h"
#import "MUPlaceSectionHeaderViewModel.h"

@interface MUNearestStationSectionController : MUTransitLineItemSectionController <MKETAProviderObserver, MUPlaceVerticalCardContainerViewDelegate, MUPlaceSectionControlling>

 {
    MKETAProvider *_etaProvider;
    MKMapItem *_nearestStation;
    MUPlaceSectionView *_sectionView;
    MUNearestStationRowView *_nearestStationRowView;
    MUPlaceFooterAttributionController *_footerAttributionController;
    MUPlaceVerticalCardContainerView *_containerView;
}


@property (nonatomic, getter=isActive) BOOL active;
@property (weak, nonatomic) NSObject<MUInfoCardAnalyticsDelegate> *analyticsDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<MUNearestStationSectionControllerDelegate> *nearestStationDelegate; // ivar: _nearestStationDelegate
@property (readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property (readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property (readonly, nonatomic) UIView *sectionView;
@property (readonly, nonatomic) UIViewController *sectionViewController;
@property (retain, nonatomic) MKUGCCallToActionViewAppearance *submissionStatus;
@property (readonly) Class superclass;


-(id)initWithTransitLineItem:(id)arg0 etaProvider:(id)arg1 ;
-(void)ETAProviderUpdated:(id)arg0 ;
-(void)_createNearestStationSection;
-(void)_handleAttributionTap;
-(void)updateWithMapItem:(id)arg0 isLoading:(BOOL)arg1 ;
-(void)verticalCardContainerView:(id)arg0 didSelectRow:(id)arg1 atIndex:(NSUInteger)arg2 ;


@end


#endif