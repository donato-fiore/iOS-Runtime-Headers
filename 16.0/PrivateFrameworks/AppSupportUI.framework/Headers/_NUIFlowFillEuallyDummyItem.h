// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NUIFLOWFILLEUALLYDUMMYITEM_H
#define _NUIFLOWFILLEUALLYDUMMYITEM_H

@class NSString;
@protocol NUIArrangementItem;

#import <Foundation/Foundation.h>

#import "_NUIFlowRowContainer.h"

@interface _NUIFlowFillEuallyDummyItem : NSObject <NUIArrangementItem>

 {
    _NUIFlowRowContainer *_rowContainer;
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
-(id)initWithRowContainer:(id)arg0 ;


@end


#endif