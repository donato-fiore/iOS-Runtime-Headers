// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NUIFLOWROWCONTAINER_H
#define _NUIFLOWROWCONTAINER_H

@class NSString;
@protocol _NUIGridArrangementContainer, NUIArrangementItem;

#import <Foundation/Foundation.h>

#import "_NUIFlowFillEuallyDummyItem.h"

@interface _NUIFlowRowContainer : NSObject <_NUIGridArrangementContainer, NUIArrangementItem>

 {
    _NUIGridArrangement _gridArrangement;
    _NSRange _range;
    _NUIFlowFillEuallyDummyItem *_dummyItem;
    *void _flowArrangement;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isLayoutSizeDependentOnPerpendicularAxis;
-(CGFloat)effectiveBaselineOffsetFromContentBottom;
-(CGFloat)effectiveFirstBaselineOffsetFromContentTop;
-(float)contentCompressionResistancePriorityForAxis:(NSInteger)arg0 ;
-(float)contentHuggingPriorityForAxis:(NSInteger)arg0 ;
-(id)initWithFlowArrangement:(*void)arg0 cellRange:(struct _NSRange )arg1 ;
-(struct CGRect )layoutFrameForArrangedSubview:(id)arg0 withProposedContentFrame:(struct CGRect )arg1 ;
-(struct CGSize )contentLayoutSizeFittingSize:(struct CGSize )arg0 forArrangedSubview:(id)arg1 ;
-(void)dealloc;
-(void)populateGridArrangementCells:(*void)arg0 ;
-(void)populateGridArrangementDimension:(*void)arg0 withCells:(*void)arg1 axis:(NSInteger)arg2 ;


@end


#endif