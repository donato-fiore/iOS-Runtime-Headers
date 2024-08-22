// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXPBUIEVENT_H
#define ATXPBUIEVENT_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface ATXPBUIEvent : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *consumerSubType; // ivar: _consumerSubType
@property (retain, nonatomic) NSData *event; // ivar: _event
@property (readonly, nonatomic) BOOL hasConsumerSubType;
@property (readonly, nonatomic) BOOL hasEvent;


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