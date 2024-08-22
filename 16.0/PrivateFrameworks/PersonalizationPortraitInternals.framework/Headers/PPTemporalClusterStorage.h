// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPTEMPORALCLUSTERSTORAGE_H
#define PPTEMPORALCLUSTERSTORAGE_H


#import <Foundation/Foundation.h>

#import "PPLocalEventStore.h"
#import "PPLocalTopicStore.h"
#import "PPLocalNamedEntityStore.h"
#import "PPLocalLocationStore.h"
#import "PPLocalContactStore.h"

@interface PPTemporalClusterStorage : NSObject {
    PPLocalEventStore *_eventStore;
    PPLocalTopicStore *_topicStore;
    PPLocalNamedEntityStore *_entityStore;
    PPLocalLocationStore *_locationStore;
    PPLocalContactStore *_contactStore;
}




+(id)defaultStorage;
+(id)enrichEntities:(id)arg0 mediaRecords:(id)arg1 ;
-(id)eventsWithStartDate:(id)arg0 endDate:(id)arg1 ;
-(id)init;
-(id)initWithEventStore:(id)arg0 topicStore:(id)arg1 entityStore:(id)arg2 locationStore:(id)arg3 contactStore:(id)arg4 ;
-(id)rankedTemporalClusterForStartDate:(id)arg0 endDate:(id)arg1 error:(*id)arg2 ;


@end


#endif