// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSSACCOUNTSINFORESPMSG_H
#define NSSACCOUNTSINFORESPMSG_H

@class PBCodable, NSMutableArray, NSData;
@protocol NSCopying;



@interface NSSAccountsInfoRespMsg : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *accounts; // ivar: _accounts
@property (readonly, nonatomic) BOOL hasWatchAKDevice;
@property (retain, nonatomic) NSData *watchAKDevice; // ivar: _watchAKDevice


+(Class)accountType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)accountAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addAccount:(id)arg0 ;
-(void)clearAccounts;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif