// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDBACKINGSTORESINGLETON_H
#define HMDBACKINGSTORESINGLETON_H

@class HMFObject, NSMapTable, NSString, NSOperationQueue;
@protocol HMFLogging;


#import "HMDHomeManager.h"
#import "HMDBackingStoreLocal.h"

@interface HMDBackingStoreSingleton : HMFObject <HMFLogging>



@property (readonly, nonatomic) NSMapTable *classToNameTransform; // ivar: _classToNameTransform
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) HMDHomeManager *homeManager; // ivar: _homeManager
@property (retain, nonatomic) HMDBackingStoreLocal *local; // ivar: _local
@property (readonly, nonatomic) NSMapTable *nameToClassTransform; // ivar: _nameToClassTransform
@property (readonly, nonatomic) NSMapTable *objectLookup; // ivar: _objectLookup
@property (readonly, nonatomic) NSMapTable *objectPropertyHashLookup; // ivar: _objectPropertyHashLookup
@property (readonly, nonatomic) NSOperationQueue *queue; // ivar: _queue
@property (readonly) Class superclass;


+(id)dataVersion;
+(id)logCategory;
+(id)sharedInstance;
+(void)resetClassMappings;
+(void)resetSchemaHash;
+(void)setClass:(Class)arg0 forClassName:(id)arg1 ;
+(void)start;
-(id)flushBackingStore;
-(id)init;
-(id)logIdentifier;
-(id)resetBackingStore;
-(id)schemaHashForObject:(id)arg0 ;


@end


#endif