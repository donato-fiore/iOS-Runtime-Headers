// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTITEMAGGREGATIONRESULT_H
#define NTITEMAGGREGATIONRESULT_H

@class NSDictionary, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NTItemAggregationResult : NSObject <NSCopying>



@property (copy, nonatomic) NSDictionary *aggregatedItemsBySectionDescriptor; // ivar: _aggregatedItemsBySectionDescriptor
@property (nonatomic) CGFloat headlineScale; // ivar: _headlineScale
@property (readonly, nonatomic) NSUInteger itemCount;
@property (copy, nonatomic) NSDictionary *slotAllocationByDynamicSlotItemID; // ivar: _slotAllocationByDynamicSlotItemID
@property (nonatomic) CGFloat slotsUsed; // ivar: _slotsUsed
@property (copy, nonatomic) NSArray *unusedSectionDescriptors; // ivar: _unusedSectionDescriptors


-(CGFloat)headlineSlotCostWithSlotCost:(CGFloat)arg0 ;
-(CGFloat)sectionOverheadSlotCostWithInfo:(id)arg0 ;
-(CGFloat)slotCostWithInfo:(id)arg0 ;
-(id)copyWithHeadlineScale:(CGFloat)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithAggregatedItemsBySectionDescriptor:(id)arg0 slotAllocationByDynamicSlotItemID:(id)arg1 unusedSectionDescriptors:(id)arg2 ;


@end


#endif