// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MUBROWSECATEGORYSECTIONCONTROLLER_H
#define MUBROWSECATEGORYSECTIONCONTROLLER_H

@class MKBrowseCategoryViewController, NSString, UIView, UIViewController, MKUGCCallToActionViewAppearance;
@protocol MKBrowseCategoryViewControllerDelegate, MUPlaceSectionControlling, MUInfoCardAnalyticsDelegate, MUBrowseCategorySectionControllerDelegate;


#import "MUPlaceSectionController.h"
#import "MUPlaceSectionView.h"
#import "MUPlaceSectionFooterViewModel.h"
#import "MUPlaceSectionHeaderViewModel.h"

@interface MUBrowseCategorySectionController : MUPlaceSectionController <MKBrowseCategoryViewControllerDelegate, MUPlaceSectionControlling>

 {
    MKBrowseCategoryViewController *_browseCategoryVC;
    MUPlaceSectionView *_sectionView;
}


@property (nonatomic, getter=isActive) BOOL active;
@property (weak, nonatomic) NSObject<MUInfoCardAnalyticsDelegate> *analyticsDelegate;
@property (weak, nonatomic) NSObject<MUBrowseCategorySectionControllerDelegate> *browseCategoryDelegate; // ivar: _browseCategoryDelegate
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


-(id)initWithMapItem:(id)arg0 ;
-(int)analyticsModuleType;
-(void)_setupSectionView;
-(void)categoryBrowseViewController:(id)arg0 didTapOnSearchCategory:(id)arg1 ;
-(void)categoryBrowseViewControllerDidDisplayBrowseCategories:(id)arg0 ;


@end


#endif