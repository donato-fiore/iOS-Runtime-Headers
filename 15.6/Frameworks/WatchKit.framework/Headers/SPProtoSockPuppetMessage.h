// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPPROTOSOCKPUPPETMESSAGE_H
#define SPPROTOSOCKPUPPETMESSAGE_H

@class PBCodable;
@protocol NSCopying;


#import "SPProtoAudioFilePlayerMessage.h"
#import "SPProtoSockPuppetPlist.h"

@interface SPProtoSockPuppetMessage : PBCodable <NSCopying>



@property (retain, nonatomic) SPProtoAudioFilePlayerMessage *audioFilePlayerMessage; // ivar: _audioFilePlayerMessage
@property (readonly, nonatomic) BOOL hasAudioFilePlayerMessage;
@property (readonly, nonatomic) BOOL hasPlist;
@property (retain, nonatomic) SPProtoSockPuppetPlist *plist; // ivar: _plist


+(id)sockPuppetMessageWithSubMessage:(id)arg0 setterSelector:(SEL)arg1 ;
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