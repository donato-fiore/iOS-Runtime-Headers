// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUPLACESECTIONCONTROLLER_H
#define MUPLACESECTIONCONTROLLER_H

@class NSString, MKMapItem, GEORevealedPlaceCardModule, UIView, UIViewController, NSArray, MKUGCCallToActionViewAppearance;
@protocol MUPlaceSectionControlling, MUInfoCardAnalyticsDelegate, MUPlaceSectionControllerDelegate;

#import <Foundation/Foundation.h>

#import "MUImpressionElement.h"
#import "MUPlaceSectionFooterViewModel.h"
#import "MUPlaceSectionHeaderViewModel.h"

@interface MUPlaceSectionController : NSObject <MUPlaceSectionControlling>



@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (weak, nonatomic) NSObject<MUInfoCardAnalyticsDelegate> *analyticsDelegate; // ivar: _analyticsDelegate
@property (readonly, nonatomic) int analyticsModuleType;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MUPlaceSectionControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MUImpressionElement *impressionElement; // ivar: _impressionElement
@property (readonly, nonatomic) CGRect impressionsFrame;
@property (readonly, nonatomic) BOOL isImpressionable;
@property (readonly, nonatomic) MKMapItem *mapItem; // ivar: _mapItem
@property (readonly, nonatomic) GEORevealedPlaceCardModule *revealedAnalyticsModule;
@property (readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property (readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property (readonly, nonatomic) UIView *sectionView; // ivar: _sectionView
@property (readonly, nonatomic) UIViewController *sectionViewController;
@property (readonly, nonatomic) NSArray *sectionViews;
@property (retain, nonatomic) MKUGCCallToActionViewAppearance *submissionStatus; // ivar: _submissionStatus
@property (readonly) Class superclass;


-(id)_placeCardImpressionsMetadata;
-(id)analyticsModule;
-(id)draggableContent;
-(id)infoCardChildPossibleActions;
-(id)infoCardChildUnactionableUIElements;
-(id)initWithMapItem:(id)arg0 ;
-(void)_populateAnalyticsModule:(id)arg0 ;
-(void)_populateRevealedAnalyticsModule:(id)arg0 ;
-(void)captureInfoCardAction:(int)arg0 eventValue:(id)arg1 ;
-(void)captureInfoCardAction:(int)arg0 eventValue:(id)arg1 feedbackType:(int)arg2 ;
-(void)captureInfoCardAction:(int)arg0 target:(int)arg1 eventValue:(id)arg2 ;
-(void)captureInfoCardPartnerAction:(int)arg0 eventValue:(id)arg1 sharedStateButtonList:(id)arg2 ;
-(void)captureInfoCardPartnerAction:(int)arg0 target:(int)arg1 eventValue:(id)arg2 sharedStateButtonList:(id)arg3 ;


@end


#endif