// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMPBHOMEKITCLIENTBASE_H
#define BMPBHOMEKITCLIENTBASE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface BMPBHomeKitClientBase : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat absoluteTimestamp; // ivar: _absoluteTimestamp
@property (retain, nonatomic) NSString *clientName; // ivar: _clientName
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (retain, nonatomic) NSString *eventCorrelationIdentifier; // ivar: _eventCorrelationIdentifier
@property (nonatomic) BOOL hasAbsoluteTimestamp;
@property (readonly, nonatomic) BOOL hasClientName;
@property (nonatomic) BOOL hasDuration;
@property (readonly, nonatomic) BOOL hasEventCorrelationIdentifier;
@property (nonatomic) BOOL hasHomeOccupancy;
@property (readonly, nonatomic) BOOL hasHomeUniqueIdentifier;
@property (readonly, nonatomic) BOOL hasSource;
@property (nonatomic) int homeOccupancy; // ivar: _homeOccupancy
@property (retain, nonatomic) NSString *homeUniqueIdentifier; // ivar: _homeUniqueIdentifier
@property (retain, nonatomic) NSString *source; // ivar: _source


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