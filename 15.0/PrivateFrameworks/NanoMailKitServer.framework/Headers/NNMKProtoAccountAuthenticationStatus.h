// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NNMKPROTOACCOUNTAUTHENTICATIONSTATUS_H
#define NNMKPROTOACCOUNTAUTHENTICATIONSTATUS_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface NNMKProtoAccountAuthenticationStatus : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *accountsStatus; // ivar: _accountsStatus
@property (nonatomic) BOOL hasRequestTime;
@property (nonatomic) CGFloat requestTime; // ivar: _requestTime


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)accountsStatusAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addAccountsStatus:(id)arg0 ;
-(void)clearAccountsStatus;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif