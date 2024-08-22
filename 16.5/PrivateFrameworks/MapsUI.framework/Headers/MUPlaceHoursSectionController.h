// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUPLACEHOURSSECTIONCONTROLLER_H
#define MUPLACEHOURSSECTIONCONTROLLER_H

@class NSString, UIView, UIViewController, NSArray, MKUGCCallToActionViewAppearance;
@protocol MUPlaceHoursSectionViewDelegate, MUPlaceSectionControlling, MUInfoCardAnalyticsDelegate;


#import "MUPlaceSectionController.h"
#import "MUPlaceSectionView.h"
#import "MUPlaceHoursSectionViewConfiguration.h"
#import "MUPlaceSectionFooterViewModel.h"
#import "MUPlaceSectionHeaderViewModel.h"

@interface MUPlaceHoursSectionController : MUPlaceSectionController <MUPlaceHoursSectionViewDelegate, MUPlaceSectionControlling>

 {
    MUPlaceSectionView *_sectionView;
    MUPlaceHoursSectionViewConfiguration *_businessHoursConfig;
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


+(id)sectionControllerForMapItem:(id)arg0 ;
+(id)sectionControllerForMessagesMapItem:(id)arg0 ;
-(BOOL)isImpressionable;
-(id)initWithMapItem:(id)arg0 sectionViewConfiguration:(id)arg1 ;
-(int)analyticsModuleType;
-(void)_setupSectionView;
-(void)hoursSectionView:(id)arg0 didExpand:(BOOL)arg1 forConfiguration:(id)arg2 ;


@end


#endif