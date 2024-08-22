// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MRNOWPLAYINGPLAYERPROTOBUF_H
#define _MRNOWPLAYINGPLAYERPROTOBUF_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface _MRNowPlayingPlayerProtobuf : PBCodable <NSCopying>

 {
    ? _mxSessionIDs;
    ? _has;
}


@property (nonatomic) unsigned int audioSessionID; // ivar: _audioSessionID
@property (nonatomic) int audioSessionType; // ivar: _audioSessionType
@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (nonatomic) BOOL hasAudioSessionID;
@property (nonatomic) BOOL hasAudioSessionType;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (readonly, nonatomic) BOOL hasIconURL;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *iconURL; // ivar: _iconURL
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) *NSInteger mxSessionIDs;
@property (readonly, nonatomic) NSUInteger mxSessionIDsCount;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSInteger)mxSessionIDAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(id)audioSessionTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsAudioSessionType:(id)arg0 ;
-(void)addMxSessionID:(NSInteger)arg0 ;
-(void)clearMxSessionIDs;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif