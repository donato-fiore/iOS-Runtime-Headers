// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXPREDICTIONUPDATECOUNTPBPREDICTIONUPDATECOUNTTRACKER_H
#define ATXPREDICTIONUPDATECOUNTPBPREDICTIONUPDATECOUNTTRACKER_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface ATXPredictionUpdateCountPBPredictionUpdateCountTracker : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *abGroup; // ivar: _abGroup
@property (nonatomic) int clientType; // ivar: _clientType
@property (readonly, nonatomic) BOOL hasAbGroup;
@property (nonatomic) BOOL hasClientType;
@property (nonatomic) BOOL hasTriggerType;
@property (nonatomic) int triggerType; // ivar: _triggerType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)clientTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)triggerTypeAsString:(int)arg0 ;
-(int)StringAsClientType:(id)arg0 ;
-(int)StringAsTriggerType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif