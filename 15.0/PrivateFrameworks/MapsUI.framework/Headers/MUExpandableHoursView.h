// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MUEXPANDABLEHOURSVIEW_H
#define MUEXPANDABLEHOURSVIEW_H

@class MKViewWithHairline, NSArray, NSString;
@protocol MUStackable, MUExpandableHoursViewDelegate;


#import "MUStackView.h"
#import "MUHoursSummaryView.h"
#import "MUBusinessHoursConfiguration.h"

@interface MUExpandableHoursView : MKViewWithHairline <MUStackable>

 {
    MUStackView *_contentStackView;
    MUHoursSummaryView *_hoursSummaryView;
    NSArray *_dayRowViews;
    MUBusinessHoursConfiguration *_config;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MUExpandableHoursViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isExpanded) BOOL expanded; // ivar: _expanded
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isStacked) BOOL stacked; // ivar: _stacked
@property (readonly) Class superclass;


-(BOOL)shouldStackForProposedWidth:(CGFloat)arg0 ;
-(id)initWithBusinessHoursConfiguration:(id)arg0 ;
-(void)_buildContent;
-(void)_invokeChildrenOfStackingChange;
-(void)_setupStackView;
-(void)_updateHoursVisibilityAnimated:(BOOL)arg0 ;


@end


#endif