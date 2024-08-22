// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCEUIDSET_H
#define TSCEUIDSET_H

@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface TSCEUIDSet : NSObject <NSCopying, NSMutableCopying>

 {
    unordered_set<TSKUIDStruct, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<TSKUIDStruct>> _uuidSet;
}


@property (readonly) NSUInteger count;


-(BOOL)containsUuid:(struct TSKUIDStruct )arg0 ;
-(BOOL)intersectsSet:(id)arg0 ;
-(BOOL)isAllInvalid;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSubsetOf:(id)arg0 ;
-(BOOL)p_addUUID:(struct TSKUIDStruct )arg0 ;
-(BOOL)p_removeUUID:(struct TSKUIDStruct )arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)expandedSetWithUuid:(struct TSKUIDStruct )arg0 ;
-(id)expandedSetWithUuids:(*void)arg0 ;
-(id)expandedSetWithUuidsFromVector:(*void)arg0 ;
-(id)initWithTSUUUIDVector:(*void)arg0 ;
-(id)initWithUUID:(struct TSKUIDStruct )arg0 ;
-(id)initWithUUIDSet:(id)arg0 ;
-(id)initWithUUIDVector:(*void)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)reducedSetMinusUuid:(struct TSKUIDStruct )arg0 ;
-(id)reducedSetMinusUuids:(*void)arg0 ;
-(id)reducedSetMinusUuidsFromVector:(*void)arg0 ;
-(id)setByUnionWithSet:(id)arg0 ;
-(struct TSKUIDStruct )anyUuid;
-(struct TSKUIDStructVectorTemplate<TSKUIDStruct> )uuidsAsVector;
-(struct vector<TSU::UUIDData<TSP::UUIDData>, std::allocator<TSU::UUIDData<TSP::UUIDData>>> )uuidsAsTSUVector;
-(void)foreachUuid:(id)arg0 ;
-(void)p_addUUIDs:(*void)arg0 ;
-(void)p_addUUIDsFromVector:(*void)arg0 ;
-(void)p_removeUUIDs:(*void)arg0 ;
-(void)p_removeUUIDsFromVector:(*void)arg0 ;
-(void)p_reserve:(NSUInteger)arg0 ;


@end


#endif