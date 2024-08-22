// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUIFLIGHTCARDSECTIONVIEW_H
#define SEARCHUIFLIGHTCARDSECTIONVIEW_H

@class NUIContainerBoxView, NSString, FUFlightViewController, SFFlightCardSection;
@protocol FUFlightViewControllerDelegate, NUIContainerViewDelegate;


#import "SearchUICardSectionView.h"

@interface SearchUIFlightCardSectionView : SearchUICardSectionView <FUFlightViewControllerDelegate, NUIContainerViewDelegate>



@property (retain, nonatomic) NUIContainerBoxView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) FUFlightViewController *flightViewController; // ivar: _flightViewController
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger lastSelectedLegIndex; // ivar: _lastSelectedLegIndex
@property (retain, nonatomic) SFFlightCardSection *section;
@property (readonly) Class superclass;


+(BOOL)fillsBackgroundWithContentForCardSection:(id)arg0 ;
+(int)defaultSeparatorStyleForCardSection:(id)arg0 ;
-(id)initWithRowModel:(id)arg0 feedbackDelegate:(id)arg1 ;
-(id)setupContentView;
-(void)flightController:(id)arg0 didSelectLeg:(NSInteger)arg1 ofFlight:(NSInteger)arg2 ;
-(void)updateChevronVisible:(BOOL)arg0 leaveSpaceForChevron:(BOOL)arg1 ;


@end


#endif