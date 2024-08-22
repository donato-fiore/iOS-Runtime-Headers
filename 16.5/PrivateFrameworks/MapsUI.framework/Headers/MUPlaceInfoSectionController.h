// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUPLACEINFOSECTIONCONTROLLER_H
#define MUPLACEINFOSECTIONCONTROLLER_H

@class GEOPlaceDetailsModuleConfiguration, NSArray, UIView, NSString, UIViewController, MKUGCCallToActionViewAppearance;
@protocol MUPlaceHoursSectionViewDelegate, MUPlaceSectionControlling, _MKPlaceItem, MKPlaceActionManagerProtocol, MUInfoCardAnalyticsDelegate, MUPlaceInfoSectionControllerDelegate, MUUserInformationProvider;


#import "MUPlaceSectionController.h"
#import "MUPlaceDataAvailability.h"
#import "MUPlaceInfoSectionView.h"
#import "MUPlaceFooterAttributionController.h"
#import "MUDisclosureActionRowView.h"
#import "MUPlaceHoursSectionViewConfiguration.h"
#import "MUPlaceSectionFooterViewModel.h"
#import "MUPlaceSectionHeaderViewModel.h"

@interface MUPlaceInfoSectionController : MUPlaceSectionController <MUPlaceHoursSectionViewDelegate, MUPlaceSectionControlling>

 {
    id<_MKPlaceItem> *_placeItem;
    id<MKPlaceActionManagerProtocol> *_actionDelegate;
    MUPlaceDataAvailability *_availability;
    GEOPlaceDetailsModuleConfiguration *_moduleConfig;
    MUPlaceInfoSectionView *_sectionStackView;
    NSArray *_sectionViews;
    MUPlaceFooterAttributionController *_footerAttributionController;
    UIView *_hoursContentView;
    MUDisclosureActionRowView *_rapStatusContentView;
    BOOL _needsUpdate;
}


@property (nonatomic, getter=isActive) BOOL active;
@property (weak, nonatomic) NSObject<MUInfoCardAnalyticsDelegate> *analyticsDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MUPlaceHoursSectionViewConfiguration *hoursConfig; // ivar: _hoursConfig
@property (weak, nonatomic) NSObject<MUPlaceInfoSectionControllerDelegate> *placeInfoDelegate; // ivar: _placeInfoDelegate
@property (nonatomic) NSUInteger placeNumberOfReportsInReview; // ivar: _placeNumberOfReportsInReview
@property (readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel; // ivar: _sectionFooterViewModel
@property (readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property (readonly, nonatomic) UIView *sectionView;
@property (readonly, nonatomic) UIViewController *sectionViewController;
@property (readonly, nonatomic) NSArray *sectionViews;
@property (retain, nonatomic) MKUGCCallToActionViewAppearance *submissionStatus;
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<MUUserInformationProvider> *userInfoProvider; // ivar: _userInfoProvider


-(BOOL)isImpressionable;
-(id)_createAddressItem;
-(id)_loadHoursContentViewIfNeeded;
-(id)_loadPlaceInfoContentIfNeeded;
-(id)_loadRAPStatusViewIfNeeded;
-(id)_rapEditPlaceDetailsMenu;
-(id)draggableContent;
-(id)initWithPlaceItem:(id)arg0 moduleConfiguration:(id)arg1 availability:(id)arg2 actionDelegate:(id)arg3 hoursConfiguration:(id)arg4 ;
-(id)labeledValuesForContactValues:(id)arg0 type:(NSInteger)arg1 ;
-(int)_attributionStyle;
-(int)analyticsModuleType;
-(void)_buildSections;
-(void)_handleFactoidTap:(id)arg0 withReference:(id)arg1 ;
-(void)_performActionItem:(id)arg0 withOptions:(id)arg1 ;
-(void)_populateRevealedAnalyticsModule:(id)arg0 ;
-(void)_rapEditPlaceDetailsButtonTapped;
-(void)_refineMapItemForIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)_tappedAddressItem;
-(void)_tappedContactOfType:(NSInteger)arg0 withLabeledValue:(id)arg1 ;
-(void)_tappedMessageType;
-(void)_tappedViewRAPReport;
-(void)hoursSectionView:(id)arg0 didExpand:(BOOL)arg1 forConfiguration:(id)arg2 ;
-(void)refreshContents;


@end


#endif