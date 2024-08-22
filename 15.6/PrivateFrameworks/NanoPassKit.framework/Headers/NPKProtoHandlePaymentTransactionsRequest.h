// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKPROTOHANDLEPAYMENTTRANSACTIONSREQUEST_H
#define NPKPROTOHANDLEPAYMENTTRANSACTIONSREQUEST_H

@class PBRequest, NSMutableArray;
@protocol NSCopying;



@interface NPKProtoHandlePaymentTransactionsRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NSMutableArray *passAppletStates; // ivar: _passAppletStates
@property (retain, nonatomic) NSMutableArray *transactionPassIDs; // ivar: _transactionPassIDs
@property (retain, nonatomic) NSMutableArray *transactionsBytes; // ivar: _transactionsBytes


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)passAppletStatesAtIndex:(NSUInteger)arg0 ;
-(id)transactionPassIDsAtIndex:(NSUInteger)arg0 ;
-(id)transactionsBytesAtIndex:(NSUInteger)arg0 ;
-(void)addPassAppletStates:(id)arg0 ;
-(void)addTransactionPassIDs:(id)arg0 ;
-(void)addTransactionsBytes:(id)arg0 ;
-(void)clearPassAppletStates;
-(void)clearTransactionPassIDs;
-(void)clearTransactionsBytes;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif