// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CDSPOTLIGHTEVENTINDEXERDATASOURCE_H
#define _CDSPOTLIGHTEVENTINDEXERDATASOURCE_H

@protocol _DKKnowledgeQuerying;

#import <Foundation/Foundation.h>

#import "_DKEventStream.h"

@interface _CDSpotlightEventIndexerDataSource : NSObject

@property (readonly, nonatomic) NSObject<_DKKnowledgeQuerying> *knowledgeStore; // ivar: _knowledgeStore
@property (readonly, nonatomic) _DKEventStream *stream; // ivar: _stream


+(NSUInteger)currentVersion;
-(id)bundleIDToSearchableItemsDictionaryFromEvents:(id)arg0 ;
-(id)bundleIDToSearchableItemsDictionaryWithCreationDateInInterval:(id)arg0 limit:(NSInteger)arg1 nextBatch:(*BOOL)arg2 latestCreationDate:(*id)arg3 error:(*id)arg4 ;
-(id)earliestEventCreationDateWithError:(*id)arg0 ;
-(id)initWithKnowledgeStore:(id)arg0 eventStream:(id)arg1 ;
-(id)searchableItemIdentifiersForTombstonedEventsInInterval:(id)arg0 latestTombstoneDate:(*id)arg1 error:(*id)arg2 ;
-(id)searchableItemUniqueIdentifierWithDomain:(id)arg0 indexingIdentifier:(id)arg1 ;


@end


#endif