// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTNEWSTODAYRESULTSCONTENTFILLAGGREGATOR_H
#define NTNEWSTODAYRESULTSCONTENTFILLAGGREGATOR_H

@class NSString;
@protocol NTTodayResultsAggregator;

#import <Foundation/Foundation.h>


@interface NTNewsTodayResultsContentFillAggregator : NSObject <NTTodayResultsAggregator>



@property (retain, nonatomic) NSObject<NTTodayResultsAggregator> *aggregator; // ivar: _aggregator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat maxHeadlineScale; // ivar: _maxHeadlineScale
@property (nonatomic) CGFloat minHeadlineScale; // ivar: _minHeadlineScale
@property (readonly) Class superclass;


-(id)_aggregateSections:(id)arg0 itemsBySectionDescriptor:(id)arg1 budgetInfo:(id)arg2 scale:(CGFloat)arg3 ;
-(id)_bestResultOfResults:(id)arg0 withBudgetInfo:(id)arg1 ;
-(id)aggregateSections:(id)arg0 itemsBySectionDescriptor:(id)arg1 budgetInfo:(id)arg2 ;
-(id)init;
-(id)initWithAggregator:(id)arg0 minHeadlineScale:(CGFloat)arg1 maxHeadlineScale:(CGFloat)arg2 ;


@end


#endif