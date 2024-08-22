// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUEXPANDABLEHOURSVIEW_H
#define MUEXPANDABLEHOURSVIEW_H

@class NSArray, NSString;
@protocol MUStackable, MUExpandableHoursViewDelegate;


#import "MUPlaceSectionRowView.h"
#import "MUStackView.h"
#import "MUHoursSummaryView.h"
#import "MUStackLayout.h"
#import "MUBusinessHoursConfiguration.h"

@interface MUExpandableHoursView : MUPlaceSectionRowView <MUStackable>

 {
    MUStackView *_contentStackView;
    MUHoursSummaryView *_hoursSummaryView;
    NSArray *_dayRowViews;
    MUStackLayout *_summaryAndHoursStackLayout;
    MUBusinessHoursConfiguration *_config;
    NSArray *_dayRowViewModels;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MUExpandableHoursViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isExpanded) BOOL expanded; // ivar: _expanded
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MUBusinessHoursConfiguration *hoursConfiguration;
@property (nonatomic, getter=isStacked) BOOL stacked; // ivar: _stacked
@property (readonly) Class superclass;


-(BOOL)shouldStackForProposedWidth:(CGFloat)arg0 ;
-(id)initWithBusinessHoursConfiguration:(id)arg0 ;
-(void)_addDayRowViewsToStackViewIfNeeded;
-(void)_buildDayRowViewModels;
-(void)_createDayRowViewsIfNeeded;
-(void)_invokeChildrenOfStackingChange;
-(void)_setupStackView;
-(void)_updateHoursVisibilityAnimated:(BOOL)arg0 ;


@end


#endif