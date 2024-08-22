// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDPSUBSCRIPTIONCREATEREQUEST_H
#define CKDPSUBSCRIPTIONCREATEREQUEST_H

@class PBRequest;
@protocol NSCopying;


#import "CKDPSubscription.h"

@interface CKDPSubscriptionCreateRequest : PBRequest <NSCopying>



@property (readonly, nonatomic) BOOL hasSubscription;
@property (retain, nonatomic) CKDPSubscription *subscription; // ivar: _subscription


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