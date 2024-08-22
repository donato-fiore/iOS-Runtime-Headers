// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MRRECEIVEDCOMMANDPROTOBUF_H
#define _MRRECEIVEDCOMMANDPROTOBUF_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "_MRReceivedCommandAppOptionsProtobuf.h"
#import "_MRCommandOptionsProtobuf.h"
#import "_MRNowPlayingPlayerPathProtobuf.h"

@interface _MRReceivedCommandProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _MRReceivedCommandAppOptionsProtobuf *appOptions; // ivar: _appOptions
@property (nonatomic) int command; // ivar: _command
@property (retain, nonatomic) NSString *destinationAppDisplayID; // ivar: _destinationAppDisplayID
@property (nonatomic) NSInteger destinationAppProcessID; // ivar: _destinationAppProcessID
@property (readonly, nonatomic) BOOL hasAppOptions;
@property (nonatomic) BOOL hasCommand;
@property (readonly, nonatomic) BOOL hasDestinationAppDisplayID;
@property (nonatomic) BOOL hasDestinationAppProcessID;
@property (readonly, nonatomic) BOOL hasOptions;
@property (nonatomic) BOOL hasOriginUID;
@property (readonly, nonatomic) BOOL hasPlayerPath;
@property (readonly, nonatomic) BOOL hasRemoteControlInterfaceID;
@property (readonly, nonatomic) BOOL hasSenderAppDisplayID;
@property (retain, nonatomic) _MRCommandOptionsProtobuf *options; // ivar: _options
@property (nonatomic) int originUID; // ivar: _originUID
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath; // ivar: _playerPath
@property (retain, nonatomic) NSString *remoteControlInterfaceID; // ivar: _remoteControlInterfaceID
@property (retain, nonatomic) NSString *senderAppDisplayID; // ivar: _senderAppDisplayID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)commandAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsCommand:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif