// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDDATACOLLECTORMULTIPLEXER_H
#define HDDATACOLLECTORMULTIPLEXER_H

@class NSDictionary, NSMapTable;
@protocol HDDataCollector;

#import <Foundation/Foundation.h>

#import "HDProfile.h"

@interface HDDataCollectorMultiplexer : NSObject {
    HDProfile *_profile;
    id<HDDataCollector> *_collector;
    NSDictionary *_aggregatorsByType;
    NSMapTable *_recordsByAggregator;
}




-(id)aggregatorForType:(id)arg0 ;
-(id)diagnosticDescription;
-(id)identifierForAggregator:(id)arg0 ;
-(id)initForCollector:(id)arg0 identifier:(id)arg1 profile:(id)arg2 types:(id)arg3 ;
-(id)lastDatumForType:(id)arg0 ;
-(id)mergedConfiguration;
-(void)registerForCollectionWithState:(id)arg0 ;
-(void)setConfiguration:(id)arg0 forAggregator:(id)arg1 ;
-(void)setLastSensorDatum:(id)arg0 forAggregator:(id)arg1 ;


@end


#endif