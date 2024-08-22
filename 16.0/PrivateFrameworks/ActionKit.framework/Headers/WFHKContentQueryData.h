// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFHKCONTENTQUERYDATA_H
#define WFHKCONTENTQUERYDATA_H

@class HKCategoryType, NSDate, HKQuantityType, HKSampleType, NSString;

#import <Foundation/Foundation.h>


@interface WFHKContentQueryData : NSObject

@property (retain, nonatomic) HKCategoryType *categoryType; // ivar: _categoryType
@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (retain, nonatomic) HKQuantityType *quantityType; // ivar: _quantityType
@property (readonly, nonatomic) HKSampleType *sampleType;
@property (retain, nonatomic) NSString *sourceName; // ivar: _sourceName
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate




@end


#endif