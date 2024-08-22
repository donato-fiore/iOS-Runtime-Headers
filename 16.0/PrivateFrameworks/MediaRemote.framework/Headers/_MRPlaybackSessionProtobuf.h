// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MRPLAYBACKSESSIONPROTOBUF_H
#define _MRPLAYBACKSESSIONPROTOBUF_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface _MRPlaybackSessionProtobuf : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasMetadata;
@property (readonly, nonatomic) BOOL hasPlaybackSessionData;
@property (readonly, nonatomic) BOOL hasRevision;
@property (readonly, nonatomic) BOOL hasType;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSData *metadata; // ivar: _metadata
@property (retain, nonatomic) NSData *playbackSessionData; // ivar: _playbackSessionData
@property (retain, nonatomic) NSString *revision; // ivar: _revision
@property (retain, nonatomic) NSString *type; // ivar: _type


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