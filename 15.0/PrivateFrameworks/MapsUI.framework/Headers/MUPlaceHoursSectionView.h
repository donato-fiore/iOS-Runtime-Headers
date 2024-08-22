// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MUPLACEHOURSSECTIONVIEW_H
#define MUPLACEHOURSSECTIONVIEW_H

@class UIView<MULabelViewProtocol>, NSArray, NSString;
@protocol MUPlaceVerticalCardContainerViewDelegate, MUExpandableHoursViewDelegate, MUPlaceHoursSectionViewDelegate;


#import "MUPlaceVerticalCardContainerView.h"
#import "MUPlaceSectionRowView.h"
#import "MUPlaceHoursSectionViewConfiguration.h"

@interface MUPlaceHoursSectionView : MUPlaceVerticalCardContainerView <MUPlaceVerticalCardContainerViewDelegate, MUExpandableHoursViewDelegate>

 {
    UIView<MULabelViewProtocol> *_moreLabel;
    MUPlaceSectionRowView *_moreRowView;
    NSArray *_hoursViews;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<MUPlaceHoursSectionViewDelegate> *expandDelegate; // ivar: _expandDelegate
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) MUPlaceHoursSectionViewConfiguration *sectionViewConfiguration; // ivar: _sectionViewConfiguration
@property (readonly) Class superclass;


-(id)initWithSectionViewConfiguration:(id)arg0 ;
-(void)_performExpansion;
-(void)_recalculateStackingIfNeeded;
-(void)_setupViews;
-(void)expandableHoursViewDidExpand:(id)arg0 ;
-(void)layoutSubviews;
-(void)verticalCardContainerView:(id)arg0 didSelectRow:(id)arg1 atIndex:(NSUInteger)arg2 ;


@end


#endif