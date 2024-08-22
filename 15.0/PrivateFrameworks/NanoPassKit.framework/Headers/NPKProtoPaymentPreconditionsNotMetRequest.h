// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKPROTOPAYMENTPRECONDITIONSNOTMETREQUEST_H
#define NPKPROTOPAYMENTPRECONDITIONSNOTMETREQUEST_H

@class PBRequest, NSMutableArray;
@protocol NSCopying;



@interface NPKProtoPaymentPreconditionsNotMetRequest : PBRequest <NSCopying>



@property (nonatomic) int failedPrecondition; // ivar: _failedPrecondition
@property (retain, nonatomic) NSMutableArray *passIDs; // ivar: _passIDs


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)failedPreconditionAsString:(int)arg0 ;
-(id)passIDsAtIndex:(NSUInteger)arg0 ;
-(int)StringAsFailedPrecondition:(id)arg0 ;
-(void)addPassIDs:(id)arg0 ;
-(void)clearPassIDs;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif