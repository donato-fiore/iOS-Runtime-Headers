// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MUAMENITIESSECTIONCONTROLLER_H
#define MUAMENITIESSECTIONCONTROLLER_H

@class GEOBusinessInfoModuleConfiguration, NSString, UIView, UIViewController, MKUGCCallToActionViewAppearance;
@protocol MUPlaceSectionControlling, MUInfoCardAnalyticsDelegate;


#import "MUPlaceSectionController.h"
#import "MUPlaceSectionView.h"
#import "MUAmenityListSectionView.h"
#import "MUPlaceSectionFooterViewModel.h"
#import "MUPlaceSectionHeaderViewModel.h"

@interface MUAmenitiesSectionController : MUPlaceSectionController <MUPlaceSectionControlling>

 {
    MUPlaceSectionView *_sectionView;
    GEOBusinessInfoModuleConfiguration *_moduleConfig;
    MUAmenityListSectionView *_amenitySectionView;
}


@property (nonatomic, getter=isActive) BOOL active;
@property (weak, nonatomic) NSObject<MUInfoCardAnalyticsDelegate> *analyticsDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property (readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel; // ivar: _sectionHeaderViewModel
@property (readonly, nonatomic) UIView *sectionView;
@property (readonly, nonatomic) UIViewController *sectionViewController;
@property (retain, nonatomic) MKUGCCallToActionViewAppearance *submissionStatus;
@property (readonly) Class superclass;


-(id)infoCardChildUnactionableUIElements;
-(id)initWithMapItem:(id)arg0 moduleConiguration:(id)arg1 ;
-(int)analyticsModuleType;
-(void)_setupAmenitiyRows;


@end


#endif