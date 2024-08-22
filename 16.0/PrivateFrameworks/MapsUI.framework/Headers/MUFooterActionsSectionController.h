// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUFOOTERACTIONSSECTIONCONTROLLER_H
#define MUFOOTERACTIONSSECTIONCONTROLLER_H

@class MUPlaceActionManager, NSArray, NSString, UIView, UIViewController, MKUGCCallToActionViewAppearance;
@protocol MUPlaceSectionControlling, MUInfoCardAnalyticsDelegate;

#import <Foundation/Foundation.h>

#import "MUPlaceSectionView.h"
#import "MUActionGroupSectionView.h"
#import "MUPlaceSectionFooterViewModel.h"
#import "MUPlaceSectionHeaderViewModel.h"

@interface MUFooterActionsSectionController : NSObject <MUPlaceSectionControlling>

 {
    MUPlaceSectionView *_sectionView;
    MUPlaceActionManager *_actionManager;
    MUActionGroupSectionView *_footerView;
    NSArray *_footerActions;
}


@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (weak, nonatomic) NSObject<MUInfoCardAnalyticsDelegate> *analyticsDelegate; // ivar: _analyticsDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property (readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel; // ivar: _sectionHeaderViewModel
@property (readonly, nonatomic) UIView *sectionView;
@property (readonly, nonatomic) UIViewController *sectionViewController;
@property (readonly, nonatomic) NSArray *sectionViews;
@property (retain, nonatomic) MKUGCCallToActionViewAppearance *submissionStatus; // ivar: _submissionStatus
@property (readonly) Class superclass;


-(id)analyticsModule;
-(id)draggableContent;
-(id)infoCardChildPossibleActions;
-(id)infoCardChildUnactionableUIElements;
-(id)initWithActionManager:(id)arg0 ;
-(id)revealedAnalyticsModule;
-(int)analyticsModuleType;
-(void)_setupFooterView;
-(void)reloadData;


@end


#endif