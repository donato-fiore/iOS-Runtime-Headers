// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MUTRANSITDEPARTURESSECTIONCONTROLLER_H
#define MUTRANSITDEPARTURESSECTIONCONTROLLER_H

@class MKTransitDeparturesViewController, UIView, NSString, UIViewController, MKUGCCallToActionViewAppearance;
@protocol _MKInfoCardAnalyticsDelegate, MUPlaceSectionControlling, MUInfoCardAnalyticsDelegate;


#import "MUPlaceSectionController.h"
#import "MUFixedHeightAwareViewController.h"
#import "MUPlaceFooterAttributionController.h"
#import "MUPlaceSectionFooterViewModel.h"
#import "MUPlaceSectionHeaderViewModel.h"

@interface MUTransitDeparturesSectionController : MUPlaceSectionController <_MKInfoCardAnalyticsDelegate, MUPlaceSectionControlling>

 {
    MUFixedHeightAwareViewController *_fixedHeightVC;
    MKTransitDeparturesViewController *_departuresVC;
    UIView *_sectionView;
    MUPlaceFooterAttributionController *_footerAttributionController;
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


-(BOOL)_newStationCardUIEnabled;
-(id)draggableContent;
-(id)infoCardChildPossibleActions;
-(id)infoCardChildUnactionableUIElements;
-(id)initWithMapItem:(id)arg0 allowTransitLineSelection:(BOOL)arg1 transitDelegate:(id)arg2 ;
-(int)analyticsModuleType;
-(void)_handleAttributionTap;
-(void)_setupDeparturesVCWithDelegate:(id)arg0 ;
-(void)infoCardAnalyticsDidSelectAction:(int)arg0 eventValue:(id)arg1 feedbackDelegateSelector:(int)arg2 ;
-(void)infoCardAnalyticsDidSelectAction:(int)arg0 target:(int)arg1 eventValue:(id)arg2 actionURL:(id)arg3 photoID:(id)arg4 moduleMetadata:(id)arg5 feedbackDelegateSelector:(int)arg6 ;
-(void)infoCardAnalyticsDidSelectAction:(int)arg0 target:(int)arg1 eventValue:(id)arg2 feedbackDelegateSelector:(int)arg3 ;
-(void)infoCardAnalyticsDidSelectAction:(int)arg0 target:(int)arg1 eventValue:(id)arg2 moduleMetadata:(id)arg3 feedbackDelegateSelector:(int)arg4 ;
-(void)infoCardTransitAnalyticsDidSelectionAction:(int)arg0 resultIndex:(NSInteger)arg1 targetID:(NSUInteger)arg2 transitSystem:(id)arg3 transitDepartureSequence:(id)arg4 transitCardCategory:(int)arg5 transitIncident:(id)arg6 feedbackDelegateSelector:(int)arg7 ;


@end


#endif