// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTAGGREGATIONBUDGETINFO_H
#define NTAGGREGATIONBUDGETINFO_H

@class NTPBSectionSlotCostInfo;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NTAggregationBudgetInfo : NSObject <NSCopying>



@property (nonatomic) BOOL allowSectionTitles; // ivar: _allowSectionTitles
@property (nonatomic) NSUInteger embedsLimit; // ivar: _embedsLimit
@property (nonatomic) BOOL respectMinMaxLimit; // ivar: _respectMinMaxLimit
@property (copy, nonatomic) NTPBSectionSlotCostInfo *sectionSlotCostInfo; // ivar: _sectionSlotCostInfo
@property (nonatomic) CGFloat slotsLimit; // ivar: _slotsLimit


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif