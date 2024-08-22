// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUPLACEUNIFIEDACTIONROWSECTIONCONTROLLER_H
#define MUPLACEUNIFIEDACTIONROWSECTIONCONTROLLER_H

@class NSArray, NSString, _MKPlaceActionButtonController;
@protocol MUPlaceCardActionsRowViewMenuProvider, MUPlaceCardActionsRowViewDelegate, MUActionRowItemViewModelObserver, MUExternalActionAnalyticsHandling, MUPlaceUnifiedActionRowSectionControllerDelegate;


#import "MUPlaceSectionController.h"
#import "MUPlaceUnifiedActionRowSectionControllerConfiguration.h"
#import "MUGroupedActionsRowView.h"
#import "MUPlaceSectionView.h"
#import "MUPlaceholderGridCache.h"
#import "MUTimeExpirableLRUCache.h"

@interface MUPlaceUnifiedActionRowSectionController : MUPlaceSectionController <MUPlaceCardActionsRowViewMenuProvider, MUPlaceCardActionsRowViewDelegate, MUActionRowItemViewModelObserver, MUExternalActionAnalyticsHandling>

 {
    MUPlaceUnifiedActionRowSectionControllerConfiguration *_configuration;
    MUGroupedActionsRowView *_actionsRowView;
    MUPlaceSectionView *_sectionView;
    MUPlaceholderGridCache *_placeholderGridCache;
    NSArray *_actionItemViewModels;
    MUTimeExpirableLRUCache *_partnerIconsByURLs;
    BOOL _hasContent;
}


@property (weak, nonatomic) NSObject<MUPlaceUnifiedActionRowSectionControllerDelegate> *actionDelegate; // ivar: _actionDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _MKPlaceActionButtonController *secondaryActionButtonController;
@property (readonly) Class superclass;


-(BOOL)hasContent;
-(BOOL)isImpressionable;
-(id)_actionItemViewModelWithPlaceActionItem:(id)arg0 ;
-(id)_buildSARLayout;
-(id)_buildServerControlledLayoutWithConfiguration:(id)arg0 ;
-(id)_buildStaticLayout;
-(id)_directionsViewModel;
-(id)_moreActionsViewModelWithGroupedButton:(id)arg0 excludedSystemActionsTypes:(id)arg1 ;
-(id)_moreActionsViewModelWithPartnerActions:(id)arg0 promotedSystemActionTypes:(id)arg1 excludedSystemActionTypes:(id)arg2 ;
-(id)_partnerActionViewModelWithPartnerActionIndex:(NSUInteger)arg0 ;
-(id)analyticsModule;
-(id)initWithMapItem:(id)arg0 configuration:(id)arg1 ;
-(id)menuElementForActionItem:(id)arg0 ;
-(id)menuForActionItem:(id)arg0 ;
-(id)sectionView;
-(int)analyticsModuleType;
-(void)_buildButtonLayout;
-(void)_createSectionView;
-(void)_populateRevealedAnalyticsModule:(id)arg0 ;
-(void)_updateActions:(id)arg0 ;
-(void)_updateHasContent;
-(void)actionRowItemViewModelDidUpdate:(id)arg0 ;
-(void)actionsRowView:(id)arg0 didPresentMenuForViewModel:(id)arg1 ;
-(void)actionsRowView:(id)arg0 didSelectViewModel:(id)arg1 presentationOptions:(id)arg2 ;
-(void)instrumentExternalActionUsingAnalyticsAction:(int)arg0 target:(int)arg1 eventValue:(id)arg2 sharedStateButtonList:(id)arg3 ;


@end


#endif