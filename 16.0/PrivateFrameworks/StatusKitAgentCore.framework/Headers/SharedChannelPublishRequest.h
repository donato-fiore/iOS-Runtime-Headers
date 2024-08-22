// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHAREDCHANNELPUBLISHREQUEST_H
#define SHAREDCHANNELPUBLISHREQUEST_H

@class PBRequest;
@protocol NSCopying;


#import "AuthCredential.h"
#import "ChannelPublishPayload.h"

@interface SharedChannelPublishRequest : PBRequest <NSCopying>



@property (retain, nonatomic) AuthCredential *authCredential; // ivar: _authCredential
@property (retain, nonatomic) ChannelPublishPayload *channelPublishPayload; // ivar: _channelPublishPayload
@property (readonly, nonatomic) BOOL hasAuthCredential;
@property (readonly, nonatomic) BOOL hasChannelPublishPayload;


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