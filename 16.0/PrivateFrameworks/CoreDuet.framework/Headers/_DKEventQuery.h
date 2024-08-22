// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DKEVENTQUERY_H
#define _DKEVENTQUERY_H

@class DKQuery, NSSet, NSArray, NSPredicate;
@protocol _DKExecutableQuery, NSCopying, OS_dispatch_queue;



@interface _DKEventQuery : DKQuery <_DKExecutableQuery, NSCopying>

 {
    NSObject<OS_dispatch_queue> *_defaultQueue;
}


@property BOOL deduplicateValues; // ivar: _deduplicateValues
@property (retain) NSSet *deviceIDs; // ivar: _deviceIDs
@property BOOL disableBiomeShim; // ivar: _disableBiomeShim
@property (retain) NSArray *eventStreams; // ivar: _eventStreams
@property (retain) NSArray *excludedMetadataKeys; // ivar: _excludedMetadataKeys
@property (retain) NSArray *groupByProperties; // ivar: _groupByProperties
@property NSUInteger limit; // ivar: _limit
@property NSUInteger offset; // ivar: _offset
@property (retain) NSPredicate *predicate; // ivar: _predicate
@property BOOL readMetadata; // ivar: _readMetadata
@property NSInteger resultType; // ivar: _resultType
@property (copy) id *resultsHandler; // ivar: _resultsHandler
@property BOOL returnsDistinctResults; // ivar: _returnsDistinctResults
@property (retain) NSArray *sortDescriptors; // ivar: _sortDescriptors


+(BOOL)supportsSecureCoding;
+(id)allDevices;
+(id)constructFetchRequestPredicateForEventStreams:(id)arg0 predicate:(id)arg1 deviceIDs:(id)arg2 ;
+(id)eventQueryWithPredicate:(id)arg0 eventStreams:(id)arg1 offset:(NSUInteger)arg2 limit:(NSUInteger)arg3 sortDescriptors:(id)arg4 ;
+(id)eventQueryWithPredicate:(id)arg0 eventStreams:(id)arg1 offset:(NSUInteger)arg2 limit:(NSUInteger)arg3 sortDescriptors:(id)arg4 resultHandler:(id)arg5 ;
+(id)expressionForEventDuration;
+(id)onlyLocalDevice;
+(id)onlyRemoteDevice;
+(id)predicateForEventsOfMaximumDuration:(CGFloat)arg0 ;
+(id)predicateForEventsOfMinimumDuration:(CGFloat)arg0 ;
-(id)constructFetchRequestPredicate;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)executeUsingCoreDataStorage:(id)arg0 error:(*id)arg1 ;
-(id)explicitEventStreamsOrEventStreamsInPredicate;
-(id)handleResults:(id)arg0 error:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPredicate:(id)arg0 eventStreams:(id)arg1 offset:(NSUInteger)arg2 limit:(NSUInteger)arg3 sortDescriptors:(id)arg4 resultHandler:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif