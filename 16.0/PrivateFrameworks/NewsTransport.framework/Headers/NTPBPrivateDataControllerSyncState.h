// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTPBPRIVATEDATACONTROLLERSYNCSTATE_H
#define NTPBPRIVATEDATACONTROLLERSYNCSTATE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface NTPBPrivateDataControllerSyncState : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasVersion;
@property (retain, nonatomic) NSMutableArray *recordStates; // ivar: _recordStates
@property (nonatomic) NSUInteger version; // ivar: _version
@property (retain, nonatomic) NSMutableArray *zoneStates; // ivar: _zoneStates


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)recordStatesAtIndex:(NSUInteger)arg0 ;
-(id)zoneStatesAtIndex:(NSUInteger)arg0 ;
-(void)addRecordStates:(id)arg0 ;
-(void)addZoneStates:(id)arg0 ;
-(void)clearRecordStates;
-(void)clearZoneStates;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif