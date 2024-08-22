// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MUPLACEHEADERBUTTONSSECTIONCONTROLLER_H
#define MUPLACEHEADERBUTTONSSECTIONCONTROLLER_H

@class _MKPlaceActionButtonController, NSString, UIView, UIViewController, MKUGCCallToActionViewAppearance;
@protocol MKETAProviderObserver, MUHeaderButtonsSectionControllerDelegate, MUPlaceSectionControlling, MUInfoCardAnalyticsDelegate, MUPlaceHeaderButtonsSectionControllerDelegate, _MKPlaceItem;


#import "MUPlaceSectionController.h"
#import "MUHeaderButtonsSectionController.h"
#import "MUPlaceHeaderButtonsSectionControllerConfiguration.h"
#import "MUPlaceSectionFooterViewModel.h"
#import "MUPlaceSectionHeaderViewModel.h"

@interface MUPlaceHeaderButtonsSectionController : MUPlaceSectionController <MKETAProviderObserver, MUHeaderButtonsSectionControllerDelegate, MUPlaceSectionControlling>

 {
    MUHeaderButtonsSectionController *_headerSectionController;
    MUPlaceHeaderButtonsSectionControllerConfiguration *_configuration;
}


@property (nonatomic, getter=isActive) BOOL active;
@property (retain, nonatomic) _MKPlaceActionButtonController *alternatePrimaryButtonController;
@property (weak, nonatomic) NSObject<MUInfoCardAnalyticsDelegate> *analyticsDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<MUPlaceHeaderButtonsSectionControllerDelegate> *headerDelegate; // ivar: _headerDelegate
@property (retain, nonatomic) NSObject<_MKPlaceItem> *placeItem; // ivar: _placeItem
@property (nonatomic) NSUInteger primaryButtonType;
@property (retain, nonatomic) _MKPlaceActionButtonController *secondaryButtonController;
@property (readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property (readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property (readonly, nonatomic) UIView *sectionView;
@property (readonly, nonatomic) UIViewController *sectionViewController;
@property (retain, nonatomic) MKUGCCallToActionViewAppearance *submissionStatus;
@property (readonly) Class superclass;


-(id)analyticsModule;
-(id)infoCardChildPossibleActions;
-(id)infoCardChildUnactionableUIElements;
-(id)initWithPlaceItem:(id)arg0 configuration:(id)arg1 ;
-(int)analyticsModuleType;
-(void)headerButtonsSectionController:(id)arg0 didSelectPrimaryType:(NSUInteger)arg1 withPresentationOptions:(id)arg2 ;
-(void)headerButtonsSectionControllerDidUpdateContent:(id)arg0 ;


@end


#endif