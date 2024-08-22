// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUICONTAINERFLOWVIEW_H
#define NUICONTAINERFLOWVIEW_H

@class NSString;
@protocol _NUIFlowArrangementContainer;


#import "NUIContainerView.h"

@interface NUIContainerFlowView : NUIContainerView <_NUIFlowArrangementContainer>

 {
    _NUIFlowArrangement _arrangement;
    ? _flowFlags;
}


@property (nonatomic) CGFloat columnSpacing;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger horizontalAlignment;
@property (nonatomic) NSInteger horizontalDistribution;
@property (nonatomic) CGFloat itemSpacing;
@property (nonatomic) CGFloat itemWidth;
@property (nonatomic) NSInteger numberOfColumns;
@property (nonatomic) CGFloat rowHeight;
@property (nonatomic) CGFloat rowSpacing;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger verticalAlignment;
@property (nonatomic) NSInteger verticalDistribution;


+(id)containerFlowViewWithArrangedSubviews:(id)arg0 ;
-(BOOL)isLayoutSizeDependentOnPerpendicularAxis;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(NSInteger)distributionForRowAtIndex:(NSInteger)arg0 ofTotalRowCount:(NSInteger)arg1 withArrangedSubviews:(id)arg2 ;
-(NSInteger)distributionForRowAtIndex:(NSInteger)arg0 ofTotalRowCount:(NSInteger)arg1 withCells:(*void)arg2 ;
-(id)arrangedDebugDescription;
-(id)calculateViewForFirstBaselineLayout;
-(id)calculateViewForLastBaselineLayout;
-(id)debugDictionary;
-(id)initWithArrangedSubviews:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )calculateArrangedSizeFittingSize:(struct CGSize )arg0 ;
-(struct CGSize )fittingSizeForCell:(struct _NUIFlowArrangementCell *)arg0 withProposedSize:(struct CGSize )arg1 ;
-(struct CGSize )fittingSizeForFlowPositioningOfArrangedSubview:(id)arg0 withProposedSize:(struct CGSize )arg1 ;
-(void)dealloc;
-(void)invalidateInternalStateForInvalidation:(NSInteger)arg0 ;
-(void)layoutArrangedSubviewsInBounds:(struct CGRect )arg0 ;
-(void)populateFlowArrangementCells:(*void)arg0 ;


@end


#endif