// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PDSPROTOUSERPUSHTOKENREGREQUEST_H
#define PDSPROTOUSERPUSHTOKENREGREQUEST_H

@class PBRequest, NSMutableArray;
@protocol NSCopying;


#import "PDSProtoUserPushToken.h"

@interface PDSProtoUserPushTokenRegRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *deviceInfos; // ivar: _deviceInfos
@property (nonatomic) BOOL hasTtl;
@property (retain, nonatomic) NSMutableArray *topics; // ivar: _topics
@property (nonatomic) NSInteger ttl; // ivar: _ttl
@property (retain, nonatomic) PDSProtoUserPushToken *userPushToken; // ivar: _userPushToken


+(Class)deviceInfoType;
+(Class)topicType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)deviceInfoAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)topicAtIndex:(NSUInteger)arg0 ;
-(void)addDeviceInfo:(id)arg0 ;
-(void)addTopic:(id)arg0 ;
-(void)clearDeviceInfos;
-(void)clearTopics;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif