// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RMSNOWPLAYINGINFODIDUPDATEMESSAGE_H
#define RMSNOWPLAYINGINFODIDUPDATEMESSAGE_H

@class PBCodable;
@protocol NSCopying;


#import "RMSNowPlayingInfoMessage.h"

@interface RMSNowPlayingInfoDidUpdateMessage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasNowPlayingInfo;
@property (nonatomic) BOOL hasSessionIdentifier;
@property (retain, nonatomic) RMSNowPlayingInfoMessage *nowPlayingInfo; // ivar: _nowPlayingInfo
@property (nonatomic) int sessionIdentifier; // ivar: _sessionIdentifier


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