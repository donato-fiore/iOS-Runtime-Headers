// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MUPLACEINFOSECTIONCONTROLLER_H
#define MUPLACEINFOSECTIONCONTROLLER_H

@class GEOPlaceDetailsModuleConfiguration, NSString, UIView, UIViewController, MKUGCCallToActionViewAppearance;
@protocol MUPlaceSectionControlling, _MKPlaceItem, MKPlaceActionManagerProtocol, MUInfoCardAnalyticsDelegate, MUPlaceInfoSectionControllerDelegate;


#import "MUPlaceSectionController.h"
#import "MUPlaceDataAvailability.h"
#import "MUPlaceInfoSectionView.h"
#import "MUPlaceFooterAttributionController.h"
#import "MUPlaceSectionFooterViewModel.h"
#import "MUPlaceSectionHeaderViewModel.h"

@interface MUPlaceInfoSectionController : MUPlaceSectionController <MUPlaceSectionControlling>

 {
    id<_MKPlaceItem> *_placeItem;
    id<MKPlaceActionManagerProtocol> *_actionDelegate;
    MUPlaceDataAvailability *_availability;
    GEOPlaceDetailsModuleConfiguration *_moduleConfig;
    MUPlaceInfoSectionView *_sectionStackView;
    MUPlaceFooterAttributionController *_footerAttributionController;
}


@property (nonatomic, getter=isActive) BOOL active;
@property (weak, nonatomic) NSObject<MUInfoCardAnalyticsDelegate> *analyticsDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<MUPlaceInfoSectionControllerDelegate> *placeInfoDelegate; // ivar: _placeInfoDelegate
@property (readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property (readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property (readonly, nonatomic) UIView *sectionView; // ivar: _sectionView
@property (readonly, nonatomic) UIViewController *sectionViewController;
@property (retain, nonatomic) MKUGCCallToActionViewAppearance *submissionStatus;
@property (readonly) Class superclass;


-(id)_createAddressItem;
-(id)draggableContent;
-(id)initWithPlaceItem:(id)arg0 moduleConfiguration:(id)arg1 availability:(id)arg2 actionDelegate:(id)arg3 ;
-(id)labeledValuesForContactValues:(id)arg0 type:(NSInteger)arg1 ;
-(int)analyticsModuleType;
-(void)_handleFactoidTap:(id)arg0 withReference:(id)arg1 ;
-(void)_performActionItem:(id)arg0 withOptions:(id)arg1 ;
-(void)_refineMapItemForIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)_setupRowItems;
-(void)_tappedAddToMapWithSourceView:(id)arg0 ;
-(void)_tappedAddressItem;
-(void)_tappedContactOfType:(NSInteger)arg0 withLabeledValue:(id)arg1 ;
-(void)_tappedMessageType;
-(void)_tappedReportAnIssueWithSourceView:(id)arg0 ;


@end


#endif