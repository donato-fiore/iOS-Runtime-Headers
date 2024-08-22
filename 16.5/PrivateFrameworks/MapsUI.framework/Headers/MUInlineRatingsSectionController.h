// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUINLINERATINGSSECTIONCONTROLLER_H
#define MUINLINERATINGSSECTIONCONTROLLER_H

@class UIViewController, NSString, UIView, NSArray, MKUGCCallToActionViewAppearance;
@protocol MUPlaceSectionControlling, MUInlineRatingsSectionControllerViewProvider, MUInfoCardAnalyticsDelegate;


#import "MUPlaceSectionController.h"
#import "MUPlaceSectionView.h"
#import "MUPlaceSectionFooterViewModel.h"
#import "MUPlaceSectionHeaderViewModel.h"

@interface MUInlineRatingsSectionController : MUPlaceSectionController <MUPlaceSectionControlling>

 {
    MUPlaceSectionView *_sectionView;
    UIViewController *_inlineRatingsViewController;
    id<MUInlineRatingsSectionControllerViewProvider> *_viewProvider;
}


@property (nonatomic, getter=isActive) BOOL active;
@property (weak, nonatomic) NSObject<MUInfoCardAnalyticsDelegate> *analyticsDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property (readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property (readonly, nonatomic) UIView *sectionView;
@property (readonly, nonatomic) UIViewController *sectionViewController;
@property (readonly, nonatomic) NSArray *sectionViews;
@property (retain, nonatomic) MKUGCCallToActionViewAppearance *submissionStatus;
@property (readonly) Class superclass;


-(BOOL)isImpressionable;
-(id)initWithMapItem:(id)arg0 inlineRatingsViewProvider:(id)arg1 ;
-(int)analyticsModuleType;
-(void)_setupSectionView;


@end


#endif