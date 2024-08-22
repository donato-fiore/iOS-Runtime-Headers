// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RMSAVAILABLESERVICESDIDUPDATEMESSAGE_H
#define RMSAVAILABLESERVICESDIDUPDATEMESSAGE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface RMSAvailableServicesDidUpdateMessage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasSessionIdentifier;
@property (retain, nonatomic) NSMutableArray *services; // ivar: _services
@property (nonatomic) int sessionIdentifier; // ivar: _sessionIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)servicesAtIndex:(NSUInteger)arg0 ;
-(void)addServices:(id)arg0 ;
-(void)clearServices;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif