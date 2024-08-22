// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MRPLAYBACKSESSIONMIGRATEENDMESSAGEPROTOBUF_H
#define _MRPLAYBACKSESSIONMIGRATEENDMESSAGEPROTOBUF_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "_MRNowPlayingPlayerPathProtobuf.h"
#import "_MRPlaybackSessionRequestProtobuf.h"

@interface _MRPlaybackSessionMigrateEndMessageProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger errorCode; // ivar: _errorCode
@property (retain, nonatomic) NSString *errorDescription; // ivar: _errorDescription
@property (nonatomic) BOOL hasErrorCode;
@property (readonly, nonatomic) BOOL hasErrorDescription;
@property (readonly, nonatomic) BOOL hasPlayerPath;
@property (readonly, nonatomic) BOOL hasRequest;
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath; // ivar: _playerPath
@property (retain, nonatomic) _MRPlaybackSessionRequestProtobuf *request; // ivar: _request


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