// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKPROTOREMOTEADMINPERFORMREQUEST_H
#define NPKPROTOREMOTEADMINPERFORMREQUEST_H

@class PBRequest, NSString, NSData;
@protocol NSCopying;



@interface NPKProtoRemoteAdminPerformRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NSString *command; // ivar: _command
@property (readonly, nonatomic) BOOL hasInfoDictionary;
@property (retain, nonatomic) NSData *infoDictionary; // ivar: _infoDictionary
@property (retain, nonatomic) NSString *seid; // ivar: _seid
@property (retain, nonatomic) NSData *url; // ivar: _url


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