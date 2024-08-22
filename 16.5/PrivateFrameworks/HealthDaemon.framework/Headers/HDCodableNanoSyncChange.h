// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCODABLENANOSYNCCHANGE_H
#define HDCODABLENANOSYNCCHANGE_H

@class PBCodable, NSString, NSMutableArray, NSNumber;
@protocol HDSyncChange, HDNanoSyncDescription, NSCopying;


#import "HDCodableEntityIdentifier.h"
#import "HDCodableSyncVersionRange.h"

@interface HDCodableNanoSyncChange : PBCodable <HDSyncChange, HDNanoSyncDescription, NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL complete; // ivar: _complete
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL done;
@property (readonly, nonatomic) NSInteger encodedByteCount;
@property (nonatomic) NSInteger endAnchor; // ivar: _endAnchor
@property (retain, nonatomic) HDCodableEntityIdentifier *entityIdentifier; // ivar: _entityIdentifier
@property (nonatomic) BOOL hasComplete;
@property (nonatomic) BOOL hasEndAnchor;
@property (readonly, nonatomic) BOOL hasEntityIdentifier;
@property (nonatomic) BOOL hasObjectType;
@property (nonatomic) BOOL hasSequence;
@property (nonatomic) BOOL hasSpeculative;
@property (nonatomic) BOOL hasStartAnchor;
@property (readonly, nonatomic) BOOL hasVersion;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *objectDatas; // ivar: _objectDatas
@property (nonatomic) int objectType; // ivar: _objectType
@property (retain, nonatomic) NSMutableArray *requiredAnchors; // ivar: _requiredAnchors
@property (nonatomic) NSInteger sequence; // ivar: _sequence
@property (readonly, nonatomic) NSNumber *sequenceNumber;
@property (readonly, nonatomic, getter=isSpeculative) BOOL speculative;
@property (nonatomic) BOOL speculative; // ivar: _speculative
@property (nonatomic) NSInteger startAnchor; // ivar: _startAnchor
@property (readonly) Class superclass;
@property (readonly, nonatomic) HDSyncAnchorRange syncAnchorRange;
@property (retain, nonatomic) HDCodableSyncVersionRange *version; // ivar: _version
@property (readonly, nonatomic) ? versionRange;


+(Class)objectDataType;
+(id)changeWithNanoSyncEntityClass:(Class)arg0 version:(struct ? )arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(Class)syncEntityClassForProfile:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)decodedObjectsForProfile:(id)arg0 error:(*id)arg1 ;
-(id)dictionaryRepresentation;
-(id)nanoSyncDescription;
-(id)objectDataAtIndex:(NSUInteger)arg0 ;
-(id)objectTypeAsString:(int)arg0 ;
-(id)requiredAnchorMapWithProfile:(id)arg0 error:(*id)arg1 ;
-(id)requiredAnchorsAtIndex:(NSUInteger)arg0 ;
-(id)syncEntityIdentifier;
-(int)StringAsObjectType:(id)arg0 ;
-(void)addObjectData:(id)arg0 ;
-(void)addRequiredAnchors:(id)arg0 ;
-(void)clearObjectDatas;
-(void)clearRequiredAnchors;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)setObjects:(id)arg0 syncAnchorRange:(struct HDSyncAnchorRange )arg1 requiredAnchorMap:(id)arg2 ;
-(void)writeTo:(id)arg0 ;


@end


#endif