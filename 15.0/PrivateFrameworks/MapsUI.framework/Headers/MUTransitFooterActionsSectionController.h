// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MUTRANSITFOOTERACTIONSSECTIONCONTROLLER_H
#define MUTRANSITFOOTERACTIONSSECTIONCONTROLLER_H

@class NSString, UIView, UIViewController, MKUGCCallToActionViewAppearance;
@protocol MUPlaceSectionControlling, MUInfoCardAnalyticsDelegate;


#import "MUTransitLineItemSectionController.h"
#import "MUFooterActionsSectionController.h"
#import "MUPlaceSectionFooterViewModel.h"
#import "MUPlaceSectionHeaderViewModel.h"

@interface MUTransitFooterActionsSectionController : MUTransitLineItemSectionController <MUPlaceSectionControlling>

 {
    MUFooterActionsSectionController *_underlyingSectionController;
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
@property (retain, nonatomic) MKUGCCallToActionViewAppearance *submissionStatus;
@property (readonly) Class superclass;


-(id)analyticsModule;
-(id)infoCardChildPossibleActions;
-(id)infoCardChildUnactionableUIElements;
-(id)initWithTransitLineItem:(id)arg0 actionManager:(id)arg1 ;
-(void)reloadData;


@end


#endif