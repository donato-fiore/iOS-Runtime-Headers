// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUPERSONALGUIDESSECTIONCONTROLLER_H
#define MUPERSONALGUIDESSECTIONCONTROLLER_H

@class NSDictionary, NSString, UIView, UIViewController, NSArray, MKUGCCallToActionViewAppearance;
@protocol MUPlaceVerticalCardContainerViewDelegate, MUPlaceSectionControlling, MUPersonalGuidesViewProvider, MUInfoCardAnalyticsDelegate;


#import "MUPlaceSectionController.h"
#import "MUPlaceVerticalCardContainerView.h"
#import "MUPlaceSectionView.h"
#import "MUPlaceSectionFooterViewModel.h"
#import "MUPlaceSectionHeaderViewModel.h"

@interface MUPersonalGuidesSectionController : MUPlaceSectionController <MUPlaceVerticalCardContainerViewDelegate, MUPlaceSectionControlling>

 {
    id<MUPersonalGuidesViewProvider> *_viewProvider;
    MUPlaceVerticalCardContainerView *_containerView;
    MUPlaceSectionView *_sectionView;
    NSDictionary *_collectionViews;
    NSDictionary *_wrappedSectionViewsByIdentifier;
}


@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (weak, nonatomic) NSObject<MUInfoCardAnalyticsDelegate> *analyticsDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property (readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel; // ivar: _sectionHeaderViewModel
@property (readonly, nonatomic) UIView *sectionView;
@property (readonly, nonatomic) UIViewController *sectionViewController;
@property (readonly, nonatomic) NSArray *sectionViews;
@property (retain, nonatomic) MKUGCCallToActionViewAppearance *submissionStatus;
@property (readonly) Class superclass;


-(BOOL)isImpressionable;
-(id)initWithMapItem:(id)arg0 collectionViewProvider:(id)arg1 ;
-(int)analyticsModuleType;
-(void)_setupSectionView;
-(void)reloadCollectionsAnimated:(BOOL)arg0 ;
-(void)verticalCardContainerView:(id)arg0 didSelectRow:(id)arg1 atIndex:(NSUInteger)arg2 ;


@end


#endif