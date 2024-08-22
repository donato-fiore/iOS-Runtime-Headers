// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPEVENTKITIMPORTER_H
#define PPEVENTKITIMPORTER_H

@class SGSqlEntityStore, SGURLDissector, SGNamedEntityDissector;

#import <Foundation/Foundation.h>

#import "PPLocalEventStore.h"
#import "PPLocalNamedEntityStore.h"
#import "PPLocalLocationStore.h"
#import "PPLocalTopicStore.h"

@interface PPEventKitImporter : NSObject {
    PPLocalEventStore *_eventStore;
    PPLocalNamedEntityStore *_namedEntityStore;
    PPLocalLocationStore *_locationStore;
    PPLocalTopicStore *_topicStore;
    SGSqlEntityStore *_urlStore;
    SGURLDissector *_urlDissector;
    SGNamedEntityDissector *_neDissector;
    Class _dataDetectorMatchClass;
    atomic_flag _fullImportInProgress;
}




+(id)defaultInstance;
-(BOOL)deleteAndReimportAllData;
-(id)importEventData;
-(id)importEventDataWithShouldContinueBlock:(id)arg0 ;
-(id)init;
-(id)initWithEventStore:(id)arg0 namedEntityStore:(id)arg1 locationStore:(id)arg2 topicStore:(id)arg3 urlStore:(id)arg4 urlDissector:(id)arg5 namedEntityDissector:(id)arg6 dataDetectorMatchClass:(Class)arg7 ;
-(void)importChangedEvents:(id)arg0 ;
-(void)importEvent:(id)arg0 ;


@end


#endif