// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
@property (readonly, nonatomic) NSInteger horizontalDistribution;
@property (nonatomic) NSInteger numberOfColumns;
@property (nonatomic) CGFloat rowSpacing;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger verticalAlignment;
@property (readonly, nonatomic) NSInteger verticalDistribution;


+(id)containerFlowViewWithArrangedSubviews:(id)arg0 ;
-(BOOL)isLayoutSizeDependentOnPerpendicularAxis;
-(BOOL)setNeedsInvalidation:(NSInteger)arg0 ;
-(id)arrangedDescription;
-(id)calculateViewForFirstBaselineLayout;
-(id)calculateViewForLastBaselineLayout;
-(id)debugDictionary;
-(id)initWithArrangedSubviews:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )calculateArrangedSizeFittingSize:(struct CGSize )arg0 ;
-(void)dealloc;
-(void)layoutArrangedSubviewsInBounds:(struct CGRect )arg0 ;
-(void)populateFlowArrangementCells:(*void)arg0 ;
-(void)setBaselineRelativeArrangement:(BOOL)arg0 ;


@end


#endif