// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MUPLACELISTITEMSECTIONCONTROLLER_H
#define MUPLACELISTITEMSECTIONCONTROLLER_H

@class NSString, UIView, UIViewController, MKUGCCallToActionViewAppearance;
@protocol MUPlaceSectionControlling, GEOAnnotatedItemList, MUInfoCardAnalyticsDelegate;


#import "MUPlaceSectionController.h"
#import "MUTextPairVerticalCardView.h"
#import "MUPlaceSectionView.h"
#import "MUPlaceSectionFooterViewModel.h"
#import "MUPlaceSectionHeaderViewModel.h"

@interface MUPlaceListItemSectionController : MUPlaceSectionController <MUPlaceSectionControlling>

 {
    MUTextPairVerticalCardView *_textVerticalCardView;
    MUPlaceSectionView *_sectionView;
    id<GEOAnnotatedItemList> *_annotatedList;
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


-(id)initWithMapItem:(id)arg0 annotatedList:(id)arg1 ;
-(int)analyticsModuleType;
-(void)_captureUserAction:(int)arg0 ;
-(void)_performPunchout;
-(void)_setupSubviews;


@end


#endif