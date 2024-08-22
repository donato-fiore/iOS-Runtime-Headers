// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MUHEADERBUTTONSSECTIONCONTROLLER_H
#define MUHEADERBUTTONSSECTIONCONTROLLER_H

@class MKETAProvider, MKPlaceHeaderButtonsViewController, UIView, _MKPlaceActionButtonController, NSString, UIViewController, MKUGCCallToActionViewAppearance;
@protocol MKETAProviderObserver, MUPlaceHeaderButtonsViewControllerDelegate, MKPlaceHeaderButtonsViewControllerDelegate, MUPlaceSectionControlling, MUInfoCardAnalyticsDelegate, MUHeaderButtonsSectionControllerDelegate;

#import <Foundation/Foundation.h>

#import "MUHeaderButtonsViewConfiguration.h"
#import "MUHeaderButtonsView.h"
#import "MUPlaceSectionView.h"
#import "MUPlaceSectionFooterViewModel.h"
#import "MUPlaceSectionHeaderViewModel.h"

@interface MUHeaderButtonsSectionController : NSObject <MKETAProviderObserver, MUPlaceHeaderButtonsViewControllerDelegate, MKPlaceHeaderButtonsViewControllerDelegate, MUPlaceSectionControlling>

 {
    MKETAProvider *_etaProvider;
    MUHeaderButtonsViewConfiguration *_headerConfiguration;
    MUHeaderButtonsView *_headerButtonsView;
    MUPlaceSectionView *_sectionView;
    MKPlaceHeaderButtonsViewController *_catalystHeaderViewController;
    UIView *_contentView;
}


@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (retain, nonatomic) _MKPlaceActionButtonController *alternatePrimaryButtonController;
@property (weak, nonatomic) NSObject<MUInfoCardAnalyticsDelegate> *analyticsDelegate; // ivar: _analyticsDelegate
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MUHeaderButtonsSectionControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger primaryButtonType;
@property (retain, nonatomic) _MKPlaceActionButtonController *secondaryButtonController;
@property (readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property (readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel; // ivar: _sectionHeaderViewModel
@property (readonly, nonatomic) UIView *sectionView;
@property (readonly, nonatomic) UIViewController *sectionViewController;
@property (retain, nonatomic) MKUGCCallToActionViewAppearance *submissionStatus; // ivar: _submissionStatus
@property (readonly) Class superclass;


-(id)analyticsModule;
-(id)draggableContent;
-(id)infoCardChildPossibleActions;
-(id)infoCardChildUnactionableUIElements;
-(id)initWithETAProvider:(id)arg0 headerButtonsConfiguration:(id)arg1 ;
-(int)analyticsModuleType;
-(void)_setupSectionView;
-(void)_updateWithPreviousState:(BOOL)arg0 ;
-(void)headerButtonsViewWillPresentMenu:(id)arg0 ;
-(void)placeHeaderButtonsViewController:(id)arg0 didSelectPrimaryType:(NSUInteger)arg1 withPresentationOptions:(id)arg2 ;
-(void)placeHeaderButtonsViewController:(id)arg0 didSelectPrimaryType:(NSUInteger)arg1 withView:(id)arg2 ;


@end


#endif