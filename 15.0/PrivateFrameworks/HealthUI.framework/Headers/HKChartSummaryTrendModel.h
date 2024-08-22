// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKCHARTSUMMARYTRENDMODEL_H
#define HKCHARTSUMMARYTRENDMODEL_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface HKChartSummaryTrendModel : NSObject

@property (readonly, nonatomic) BOOL selectTrendInitially; // ivar: _selectTrendInitially
@property (readonly, nonatomic) NSArray *timeScopeTrends; // ivar: _timeScopeTrends


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithTimeScopeTrends:(id)arg0 selectTrendInitially:(BOOL)arg1 ;


@end


#endif