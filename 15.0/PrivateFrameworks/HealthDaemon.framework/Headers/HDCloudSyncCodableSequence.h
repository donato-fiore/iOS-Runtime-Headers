// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCLOUDSYNCCODABLESEQUENCE_H
#define HDCLOUDSYNCCODABLESEQUENCE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "HDCodableSyncAnchorRangeMap.h"

@interface HDCloudSyncCodableSequence : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL active; // ivar: _active
@property (retain, nonatomic) HDCodableSyncAnchorRangeMap *anchorMap; // ivar: _anchorMap
@property (nonatomic) NSInteger changeIndex; // ivar: _changeIndex
@property (nonatomic) NSInteger childRecordCount; // ivar: _childRecordCount
@property (nonatomic) NSInteger epoch; // ivar: _epoch
@property (retain, nonatomic) HDCodableSyncAnchorRangeMap *frozenAnchorMap; // ivar: _frozenAnchorMap
@property (nonatomic) BOOL hasActive;
@property (readonly, nonatomic) BOOL hasAnchorMap;
@property (nonatomic) BOOL hasChangeIndex;
@property (nonatomic) BOOL hasChildRecordCount;
@property (nonatomic) BOOL hasEpoch;
@property (readonly, nonatomic) BOOL hasFrozenAnchorMap;
@property (nonatomic) BOOL hasProtocolVersion;
@property (nonatomic) BOOL hasSlot;
@property (retain, nonatomic) NSMutableArray *includedStoreIdentifiers; // ivar: _includedStoreIdentifiers
@property (nonatomic) NSInteger protocolVersion; // ivar: _protocolVersion
@property (nonatomic) int slot; // ivar: _slot
@property (retain, nonatomic) NSMutableArray *unfrozenChangeRecordNames; // ivar: _unfrozenChangeRecordNames


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)includedStoreIdentifiersAtIndex:(NSUInteger)arg0 ;
-(id)slotAsString:(int)arg0 ;
-(id)unfrozenChangeRecordNamesAtIndex:(NSUInteger)arg0 ;
-(int)StringAsSlot:(id)arg0 ;
-(void)addIncludedStoreIdentifiers:(id)arg0 ;
-(void)addUnfrozenChangeRecordNames:(id)arg0 ;
-(void)clearIncludedStoreIdentifiers;
-(void)clearUnfrozenChangeRecordNames;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif