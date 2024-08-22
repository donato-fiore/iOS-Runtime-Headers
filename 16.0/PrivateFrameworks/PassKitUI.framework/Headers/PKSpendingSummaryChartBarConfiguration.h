// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSPENDINGSUMMARYCHARTBARCONFIGURATION_H
#define PKSPENDINGSUMMARYCHARTBARCONFIGURATION_H

@class NSArray, NSString, PKSpendingSummary;
@protocol PKSegmentedBarConfiguration;

#import <Foundation/Foundation.h>


@interface PKSpendingSummaryChartBarConfiguration : NSObject <PKSegmentedBarConfiguration>

 {
    NSArray *_orderedCategories;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PKSpendingSummary *summary; // ivar: _summary
@property (readonly) Class superclass;


-(BOOL)isReady;
-(CGFloat)totalValue;
-(CGFloat)valueForSegmentAtIndex:(NSInteger)arg0 ;
-(NSInteger)numberOfSegments;
-(id)_categoryAtIndex:(NSInteger)arg0 ;
-(id)colorForSegmentAtIndex:(NSInteger)arg0 ;
-(id)initWithSummary:(id)arg0 ;
-(void)_configureWithSummary:(id)arg0 ;


@end


#endif