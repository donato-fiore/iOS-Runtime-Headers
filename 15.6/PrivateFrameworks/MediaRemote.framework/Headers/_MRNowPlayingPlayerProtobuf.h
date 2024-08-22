// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MRNOWPLAYINGPLAYERPROTOBUF_H
#define _MRNOWPLAYINGPLAYERPROTOBUF_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface _MRNowPlayingPlayerProtobuf : PBCodable <NSCopying>

 {
    ? _mxSessionIDs;
    unsigned int _audioSessionID;
    int _audioSessionType;
    NSString *_displayName;
    NSString *_iconURL;
    NSString *_identifier;
    ? _has;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)dealloc;
-(void)writeTo:(id)arg0 ;


@end


#endif