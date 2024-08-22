// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRDOCUMENT_H
#define CRDOCUMENT_H

@class NSString, NSMutableDictionary, NSUUID;
@protocol REMReplicaClockProviding;

#import <Foundation/Foundation.h>

#import "CRVectorTimestamp.h"

@interface CRDocument : NSObject <REMReplicaClockProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableDictionary *objects; // ivar: _objects
@property (readonly, nonatomic) NSUUID *replica; // ivar: _replica
@property (readonly, nonatomic) NSInteger replicaClock; // ivar: _replicaClock
@property (retain, nonatomic) id *rootObject; // ivar: _rootObject
@property (readonly, nonatomic) CRVectorTimestamp *startVersion; // ivar: _startVersion
@property (readonly) Class superclass;
@property (nonatomic) NSInteger unserializedReplicaClock; // ivar: _unserializedReplicaClock
@property (readonly, nonatomic) CRVectorTimestamp *version; // ivar: _version


+(id)documentWithReplica:(id)arg0 ;
+(id)documentWithRootObject:(id)arg0 replica:(id)arg1 ;
+(id)unarchiveFromData:(id)arg0 replica:(id)arg1 ;
-(NSUInteger)mergeResultForMergingWithDocument:(id)arg0 ;
-(NSUInteger)mergeWithData:(id)arg0 ;
-(NSUInteger)mergeWithDocument:(id)arg0 ;
-(id)archivedData;
-(id)clockElementListForReplicaUUID:(id)arg0 ;
-(id)copyForReplica:(id)arg0 ;
-(id)deltaSince:(id)arg0 ;
-(id)init;
-(id)initWithReplica:(id)arg0 ;
-(id)initWithVersion:(id)arg0 rootObject:(id)arg1 replica:(id)arg2 ;
-(id)initWithVersion:(id)arg0 startVersion:(id)arg1 rootObject:(id)arg2 replica:(id)arg3 ;
-(id)localObject:(id)arg0 ;
-(void)mergeTimestampWithDocument:(id)arg0 ;
-(void)realizeLocalChanges;
-(void)setDocument:(id)arg0 ;
-(void)setDocumentFor:(id)arg0 ;
-(void)updateGraphDocumentPointers;
-(void)updateObjects:(id)arg0 ;
-(void)updateObjectsSet;
// -(void)walkGraph:(id)arg0 root:(unk)arg1  ;


@end


#endif