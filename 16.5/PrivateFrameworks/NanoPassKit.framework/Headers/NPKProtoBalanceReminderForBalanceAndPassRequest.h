// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKPROTOBALANCEREMINDERFORBALANCEANDPASSREQUEST_H
#define NPKPROTOBALANCEREMINDERFORBALANCEANDPASSREQUEST_H

@class PBRequest, NSData, NSString;
@protocol NSCopying;



@interface NPKProtoBalanceReminderForBalanceAndPassRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NSData *balanceBytes; // ivar: _balanceBytes
@property (readonly, nonatomic) BOOL hasBalanceBytes;
@property (readonly, nonatomic) BOOL hasUniqueID;
@property (retain, nonatomic) NSString *uniqueID; // ivar: _uniqueID


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