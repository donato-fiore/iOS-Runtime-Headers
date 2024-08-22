// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCLOUDSYNCCODABLESHAREDSUMMARYRELATIONSHIPRECORD_H
#define HDCLOUDSYNCCODABLESHAREDSUMMARYRELATIONSHIPRECORD_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface HDCloudSyncCodableSharedSummaryRelationshipRecord : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *participants; // ivar: _participants


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)participantsAtIndex:(NSUInteger)arg0 ;
-(void)addParticipants:(id)arg0 ;
-(void)clearParticipants;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif