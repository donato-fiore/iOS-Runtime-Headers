// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSUUUIDSET_H
#define TSUUUIDSET_H

@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface TSUUUIDSet : NSObject <NSCopying, NSMutableCopying>

 {
    unordered_set<TSU::UUIDData<TSP::UUIDData>, std::hash<TSUUUID>, std::equal_to<TSU::UUIDData<TSP::UUIDData>>, std::allocator<TSU::UUIDData<TSP::UUIDData>>> _uuidSet;
}


@property (readonly) NSUInteger count;
@property (readonly) unsigned int index; // ivar: _index


-(BOOL)containsUuid:(*void)arg0 ;
-(BOOL)intersectsSet:(id)arg0 ;
-(BOOL)isAllInvalid;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)p_addUUID:(*void)arg0 ;
-(BOOL)p_removeUUID:(*void)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)expandedSetWithUuid:(*void)arg0 ;
-(id)expandedSetWithUuids:(*void)arg0 ;
-(id)expandedSetWithUuidsFromVector:(*void)arg0 ;
-(id)initWithUUID:(*void)arg0 ;
-(id)initWithUUIDSet:(id)arg0 ;
-(id)initWithUUIDVector:(*void)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)reducedSetMinusUuid:(*void)arg0 ;
-(id)reducedSetMinusUuids:(*void)arg0 ;
-(id)reducedSetMinusUuidsFromVector:(*void)arg0 ;
-(struct UUIDData<TSP::UUIDData> )anyUuid;
-(struct vector<TSU::UUIDData<TSP::UUIDData>, std::allocator<TSU::UUIDData<TSP::UUIDData>>> )uuidsAsVector;
-(void)foreachUuid:(id)arg0 ;
-(void)p_addUUIDs:(*void)arg0 ;
-(void)p_addUUIDsFromVector:(*void)arg0 ;
-(void)p_removeUUIDs:(*void)arg0 ;
-(void)p_removeUUIDsFromVector:(*void)arg0 ;


@end


#endif