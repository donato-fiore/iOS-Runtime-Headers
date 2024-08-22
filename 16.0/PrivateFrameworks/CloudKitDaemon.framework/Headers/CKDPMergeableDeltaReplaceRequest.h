// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDPMERGEABLEDELTAREPLACEREQUEST_H
#define CKDPMERGEABLEDELTAREPLACEREQUEST_H

@class PBRequest, NSMutableArray;
@protocol NSCopying;


#import "CKDPMergeableValueIdentifier.h"

@interface CKDPMergeableDeltaReplaceRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL containsNewData; // ivar: _containsNewData
@property (retain, nonatomic) NSMutableArray *deltaIdentifiers; // ivar: _deltaIdentifiers
@property (retain, nonatomic) NSMutableArray *deltas; // ivar: _deltas
@property (nonatomic) BOOL hasContainsNewData;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (nonatomic) BOOL hasIgnoreMissingDeltas;
@property (retain, nonatomic) CKDPMergeableValueIdentifier *identifier; // ivar: _identifier
@property (nonatomic) BOOL ignoreMissingDeltas; // ivar: _ignoreMissingDeltas


+(id)options;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)deltaIdentifiersAtIndex:(NSUInteger)arg0 ;
-(id)deltasAtIndex:(NSUInteger)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addDeltaIdentifiers:(id)arg0 ;
-(void)addDeltas:(id)arg0 ;
-(void)clearDeltaIdentifiers;
-(void)clearDeltas;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif