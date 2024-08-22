// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AWDMETRICSCELLULARPOWERLOGPLMNSEARCHEVENT_H
#define AWDMETRICSCELLULARPOWERLOGPLMNSEARCHEVENT_H

@class PBCodable;
@protocol NSCopying;



@interface AWDMETRICSCellularPowerLogPLMNSearchEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int duration; // ivar: _duration
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasNetworkSelectionMode;
@property (nonatomic) BOOL hasRat;
@property (nonatomic) BOOL hasSearchType;
@property (nonatomic) BOOL hasState;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int networkSelectionMode; // ivar: _networkSelectionMode
@property (nonatomic) int rat; // ivar: _rat
@property (nonatomic) int searchType; // ivar: _searchType
@property (nonatomic) int state; // ivar: _state
@property (nonatomic) unsigned int subsId; // ivar: _subsId
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)networkSelectionModeAsString:(int)arg0 ;
-(id)ratAsString:(int)arg0 ;
-(id)searchTypeAsString:(int)arg0 ;
-(id)stateAsString:(int)arg0 ;
-(int)StringAsNetworkSelectionMode:(id)arg0 ;
-(int)StringAsRat:(id)arg0 ;
-(int)StringAsSearchType:(id)arg0 ;
-(int)StringAsState:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif