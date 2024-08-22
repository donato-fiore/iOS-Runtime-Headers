// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DKBIOMEQUERY_H
#define _DKBIOMEQUERY_H

@class NSArray, NSPredicate, NSSet;

#import <Foundation/Foundation.h>


@interface _DKBiomeQuery : NSObject {
    NSArray *_eventStreamNames;
    NSPredicate *_predicate;
    NSUInteger _limit;
    NSUInteger _offset;
    NSArray *_sortDescriptors;
    NSInteger _resultType;
    NSArray *_groupByProperties;
    BOOL _returnDistinctResults;
    BOOL _readMetadata;
    NSSet *_excludedMetadataKeys;
}




+(BOOL)canShimDuetStreamNamed:(id)arg0 ;
+(BOOL)shimDisabled;
+(BOOL)validateSortDescriptors:(id)arg0 ;
+(id)biomeExclusiveStreamsFromEventStreams:(id)arg0 ;
+(id)deletionPredicateFromArray:(id)arg0 ;
+(id)duetExclusiveStreamsFromEventStreams:(id)arg0 ;
+(id)eventStreamsFromArray:(id)arg0 ;
+(id)eventStreamsFromPredicate:(id)arg0 ;
-(BOOL)prepareQuery:(*id)arg0 ;
-(NSUInteger)executeDeletionQuery:(*id)arg0 ;
-(id)_getCachedStreamForIdentifier:(id)arg0 ;
-(id)_publisherForQueryReturningIndividualResults:(BOOL)arg0 error:(*id)arg1 ;
-(id)_publisherForStreams:(id)arg0 ;
-(id)bmdkEventStreams;
-(id)executeBiomeQueryError:(*id)arg0 ;
-(id)filterExcludedMetadataWithDKEvent:(id)arg0 ;
-(id)initWithDKEventQuery:(id)arg0 ;
-(id)initWithDeletionArray:(id)arg0 ;
-(id)initWithDeletionPredicate:(id)arg0 ;
-(id)initWithEventStreams:(id)arg0 predicate:(id)arg1 limit:(NSUInteger)arg2 offset:(NSUInteger)arg3 sortDescriptors:(id)arg4 resultType:(NSInteger)arg5 groupByProperties:(id)arg6 returnDistinctResults:(BOOL)arg7 readMetadata:(BOOL)arg8 excludedMetadataKeys:(id)arg9 ;
-(id)publisherForQueryWithError:(*id)arg0 ;
-(void)_setBiomeStreamWithBlock:(id)arg0 ;


@end


#endif