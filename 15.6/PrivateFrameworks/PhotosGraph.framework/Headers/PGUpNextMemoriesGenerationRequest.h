// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGUPNEXTMEMORIESGENERATIONREQUEST_H
#define PGUPNEXTMEMORIESGENERATIONREQUEST_H

@class NSArray, NSSet, NSString;

#import <Foundation/Foundation.h>


@interface PGUpNextMemoriesGenerationRequest : NSObject

@property (readonly, nonatomic) NSArray *customVectors; // ivar: _customVectors
@property (readonly, nonatomic) NSSet *memoryLocalIdentifiersToAvoid; // ivar: _memoryLocalIdentifiersToAvoid
@property (readonly, nonatomic) NSArray *momentUUIDs; // ivar: _momentUUIDs
@property (readonly, nonatomic) NSString *rootMemoryLocalIdentifier; // ivar: _rootMemoryLocalIdentifier
@property (readonly, nonatomic) NSUInteger targetUpNextMemoryCount; // ivar: _targetUpNextMemoryCount
@property (readonly, nonatomic) BOOL wantsVerboseDebugInfo; // ivar: _wantsVerboseDebugInfo


+(id)_baseMemoryFetchOptionsWithPhotoLibrary:(id)arg0 ;
+(id)_memoryNodesWithSignificantOverlapWithMomentNodes:(id)arg0 ;
+(id)_requestErrorWithCode:(NSInteger)arg0 description:(id)arg1 ;
+(id)requestWithDictionaryRepresentation:(id)arg0 error:(*id)arg1 ;
-(id)_ephemeralMemoriesByUniqueMemoryIdentifiersWithWorkingContext:(id)arg0 ;
-(id)_fetchRootMemoryWithPhotoLibrary:(id)arg0 ;
-(id)_momentUUIDsForMemory:(id)arg0 ;
-(id)fetchMemoryLocalIdentifiersWithWorkingContext:(id)arg0 musicCurationOptions:(id)arg1 error:(*id)arg2 ;
-(id)initWithRootMemoryLocalIdentifier:(id)arg0 momentUUIDs:(id)arg1 memoryLocalIdentifiersToAvoid:(id)arg2 targetUpNextMemoryCount:(NSUInteger)arg3 ;
-(id)initWithRootMemoryLocalIdentifier:(id)arg0 momentUUIDs:(id)arg1 memoryLocalIdentifiersToAvoid:(id)arg2 targetUpNextMemoryCount:(NSUInteger)arg3 customVectors:(id)arg4 wantsVerboseDebugInfo:(BOOL)arg5 ;
-(id)upNextMemoryLocalIdentifiersWithWorkingContext:(id)arg0 rootMemory:(id)arg1 ephemeralMemoriesByUniqueMemoryIdentifiers:(id)arg2 uniqueMemoryIdentifiersOfMemoriesToAvoid:(id)arg3 aggregator:(id)arg4 debugInfo:(*id)arg5 error:(*id)arg6 ;
-(void)_enumerateMemoriesToAvoidWithWorkingContext:(id)arg0 usingBlock:(id)arg1 ;


@end


#endif