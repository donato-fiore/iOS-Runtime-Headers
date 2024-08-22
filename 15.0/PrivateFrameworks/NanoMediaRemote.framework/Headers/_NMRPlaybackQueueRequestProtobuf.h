// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NMRPLAYBACKQUEUEREQUESTPROTOBUF_H
#define _NMRPLAYBACKQUEUEREQUESTPROTOBUF_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface _NMRPlaybackQueueRequestProtobuf : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasPlayerPath;
@property (readonly, nonatomic) BOOL hasRequest;
@property (retain, nonatomic) NSData *playerPath; // ivar: _playerPath
@property (retain, nonatomic) NSData *request; // ivar: _request


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