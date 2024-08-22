// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHAREDCHANNELCREATEREQUEST_H
#define SHAREDCHANNELCREATEREQUEST_H

@class PBRequest, NSString;
@protocol NSCopying;


#import "AuthCredential.h"

@interface SharedChannelCreateRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) AuthCredential *authCredential; // ivar: _authCredential
@property (nonatomic) int channelOwnershipType; // ivar: _channelOwnershipType
@property (retain, nonatomic) NSString *channelTopic; // ivar: _channelTopic
@property (readonly, nonatomic) BOOL hasAuthCredential;
@property (nonatomic) BOOL hasChannelOwnershipType;
@property (readonly, nonatomic) BOOL hasChannelTopic;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)channelOwnershipTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsChannelOwnershipType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif