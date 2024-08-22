// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDPDISTRIBUTEDTIMESTAMPSSITEVERSIONVECTORS_H
#define CKDPDISTRIBUTEDTIMESTAMPSSITEVERSIONVECTORS_H

@class PBCodable;
@protocol NSCopying;


#import "CKDPDistributedTimestampsVersionVector.h"

@interface CKDPDistributedTimestampsSiteVersionVectors : PBCodable <NSCopying>



@property (retain, nonatomic) CKDPDistributedTimestampsVersionVector *contentsVector; // ivar: _contentsVector
@property (retain, nonatomic) CKDPDistributedTimestampsVersionVector *dependenciesVector; // ivar: _dependenciesVector
@property (readonly, nonatomic) BOOL hasContentsVector;
@property (readonly, nonatomic) BOOL hasDependenciesVector;
@property (readonly, nonatomic) BOOL hasPreviousVector;
@property (readonly, nonatomic) BOOL hasRemovalsVector;
@property (retain, nonatomic) CKDPDistributedTimestampsVersionVector *previousVector; // ivar: _previousVector
@property (retain, nonatomic) CKDPDistributedTimestampsVersionVector *removalsVector; // ivar: _removalsVector


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif