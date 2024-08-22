// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPANALYTICSKNOWLEDGESTOREDESTINATION_H
#define CPANALYTICSKNOWLEDGESTOREDESTINATION_H

@class NSString, NSMutableArray;
@protocol CPAnalyticsDestination, _DKKnowledgeSaving;

#import <Foundation/Foundation.h>


@interface CPAnalyticsKnowledgeStoreDestination : NSObject <CPAnalyticsDestination>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL disabled;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<_DKKnowledgeSaving> *knowledgeStore; // ivar: _knowledgeStore
@property (readonly, nonatomic) NSMutableArray *matchers; // ivar: _matchers
@property (readonly) Class superclass;


-(id)_datasetSampleFromEvent:(id)arg0 andMatcher:(id)arg1 ;
-(id)initWithConfig:(id)arg0 cpAnalyticsInstance:(id)arg1 ;
-(void)_addCoreDuetDatasetSample:(id)arg0 toDataset:(id)arg1 ;
-(void)processEvent:(id)arg0 ;
-(void)updateWithConfig:(id)arg0 ;


@end


#endif