// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TFDATAAGGREGATOR_H
#define TFDATAAGGREGATOR_H

@protocol OS_dispatch_queue, TFDataAggregatorDelegate;

#import <Foundation/Foundation.h>

#import "TFFeedbackDataContainer.h"

@interface TFDataAggregator : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *aggregationQueue; // ivar: _aggregationQueue
@property (weak, nonatomic) NSObject<TFDataAggregatorDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) TFFeedbackDataContainer *sessionDataContainer; // ivar: _sessionDataContainer


-(id)_loadAndExtractDataForTasks:(id)arg0 intoDataContainer:(id)arg1 ;
-(id)initWithSessionDataContainer:(id)arg0 ;
-(void)_finishUpdatingDataContainer:(id)arg0 byMergingDataContainer:(id)arg1 forTasks:(id)arg2 ;
-(void)_prepareDestinationDataContainer:(id)arg0 forTasks:(id)arg1 ;
-(void)_validateProvidedIdentifiersForTasks:(id)arg0 ;
-(void)runTasks:(id)arg0 ;


@end


#endif