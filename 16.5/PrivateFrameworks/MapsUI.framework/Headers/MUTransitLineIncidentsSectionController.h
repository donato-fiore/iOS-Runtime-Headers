// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUTRANSITLINEINCIDENTSSECTIONCONTROLLER_H
#define MUTRANSITLINEINCIDENTSSECTIONCONTROLLER_H

@class NSString, UIView, UIViewController, NSArray, MKUGCCallToActionViewAppearance;
@protocol MUTransitLineIncidentsViewControllerDelegate, MUPlaceSectionControlling, MUInfoCardAnalyticsDelegate, MUTransitLineIncidentsSectionControllerDelegate;


#import "MUTransitLineItemSectionController.h"
#import "MUFixedHeightAwareViewController.h"
#import "MUPlaceSectionView.h"
#import "MUPlaceSectionFooterViewModel.h"
#import "MUPlaceSectionHeaderViewModel.h"

@interface MUTransitLineIncidentsSectionController : MUTransitLineItemSectionController <MUTransitLineIncidentsViewControllerDelegate, MUPlaceSectionControlling>

 {
    MUFixedHeightAwareViewController *_fixedHeightAwareVC;
    MUPlaceSectionView *_sectionView;
}


@property (nonatomic, getter=isActive) BOOL active;
@property (weak, nonatomic) NSObject<MUInfoCardAnalyticsDelegate> *analyticsDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<MUTransitLineIncidentsSectionControllerDelegate> *incidentsDelegate; // ivar: _incidentsDelegate
@property (readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property (readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property (readonly, nonatomic) UIView *sectionView;
@property (readonly, nonatomic) UIViewController *sectionViewController;
@property (readonly, nonatomic) NSArray *sectionViews;
@property (retain, nonatomic) MKUGCCallToActionViewAppearance *submissionStatus;
@property (readonly) Class superclass;


-(id)initWithTransitLineItem:(id)arg0 ;
-(void)_setupSection;
-(void)transitLineIncidentsViewController:(id)arg0 didSelectDetailsForIncidents:(id)arg1 ;


@end


#endif