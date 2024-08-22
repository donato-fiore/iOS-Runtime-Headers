// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDREMOTEEVENTROUTERPROTOTOPIC_H
#define HMDREMOTEEVENTROUTERPROTOTOPIC_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface HMDRemoteEventRouterProtoTopic : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *eventUUID; // ivar: _eventUUID
@property (readonly, nonatomic) BOOL hasEventUUID;
@property (readonly, nonatomic) BOOL hasTopic;
@property (retain, nonatomic) NSString *topic; // ivar: _topic


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