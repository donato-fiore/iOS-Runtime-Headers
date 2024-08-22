// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RMSAUDIOROUTESDIDUPDATEMESSAGE_H
#define RMSAUDIOROUTESDIDUPDATEMESSAGE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface RMSAudioRoutesDidUpdateMessage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *audioRoutes; // ivar: _audioRoutes
@property (nonatomic) BOOL hasSessionIdentifier;
@property (nonatomic) int sessionIdentifier; // ivar: _sessionIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)audioRoutesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addAudioRoutes:(id)arg0 ;
-(void)clearAudioRoutes;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif