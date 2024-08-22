// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKFIXEDVALUEDATESPANDELEGATE_H
#define _HKFIXEDVALUEDATESPANDELEGATE_H

@protocol HKDateRangeDataSourceDelegate, HKDateRangeDataUpdateDelegate;

#import <Foundation/Foundation.h>

#import "HKFixedValueDateSpanDataSource.h"

@interface _HKFixedValueDateSpanDelegate : NSObject <HKDateRangeDataSourceDelegate>



@property (weak, nonatomic) HKFixedValueDateSpanDataSource *fixedValueDateSpanDataSource; // ivar: _fixedValueDateSpanDataSource
@property (weak, nonatomic) NSObject<HKDateRangeDataUpdateDelegate> *updateCallbackDelegate; // ivar: _updateCallbackDelegate


-(id)dataForDateRange:(id)arg0 timeScope:(NSInteger)arg1 ;
-(void)setUpdateDelegate:(id)arg0 ;


@end


#endif