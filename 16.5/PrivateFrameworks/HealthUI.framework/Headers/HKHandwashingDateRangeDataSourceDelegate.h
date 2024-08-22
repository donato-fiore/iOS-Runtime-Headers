// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKHANDWASHINGDATERANGEDATASOURCEDELEGATE_H
#define HKHANDWASHINGDATERANGEDATASOURCEDELEGATE_H

@protocol HKDateRangeDataSourceDelegate;

#import <Foundation/Foundation.h>


@interface HKHandwashingDateRangeDataSourceDelegate : NSObject <HKDateRangeDataSourceDelegate>



@property (nonatomic) CGFloat goal; // ivar: _goal


-(id)dataForDateRange:(id)arg0 timeScope:(NSInteger)arg1 ;
-(id)initWithGoal:(CGFloat)arg0 ;
-(void)setUpdateDelegate:(id)arg0 ;


@end


#endif