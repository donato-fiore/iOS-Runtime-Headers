// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDPNOTIFICATIONMARKREADREQUEST_H
#define CKDPNOTIFICATIONMARKREADREQUEST_H

@class PBRequest, NSString;
@protocol NSCopying;



@interface CKDPNotificationMarkReadRequest : PBRequest <NSCopying>



@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSString *uuid; // ivar: _uuid


+(id)options;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(Class)responseClass;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned int)requestTypeCode;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif