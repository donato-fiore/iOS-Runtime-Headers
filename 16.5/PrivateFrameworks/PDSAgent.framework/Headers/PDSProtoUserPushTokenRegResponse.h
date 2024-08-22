// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDSPROTOUSERPUSHTOKENREGRESPONSE_H
#define PDSPROTOUSERPUSHTOKENREGRESPONSE_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "PDSProtoUserPushToken.h"

@interface PDSProtoUserPushTokenRegResponse : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasMessage;
@property (retain, nonatomic) NSString *message; // ivar: _message
@property (nonatomic) int status; // ivar: _status
@property (retain, nonatomic) PDSProtoUserPushToken *userPushToken; // ivar: _userPushToken


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