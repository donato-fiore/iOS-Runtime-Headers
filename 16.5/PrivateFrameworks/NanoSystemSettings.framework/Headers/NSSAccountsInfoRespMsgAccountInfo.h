// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSSACCOUNTSINFORESPMSGACCOUNTINFO_H
#define NSSACCOUNTSINFORESPMSGACCOUNTINFO_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NSSAccountsInfoRespMsgAccountInfo : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL aaIsManaged; // ivar: _aaIsManaged
@property (nonatomic) BOOL aaPrimaryAccount; // ivar: _aaPrimaryAccount
@property (retain, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (nonatomic) BOOL authenticated; // ivar: _authenticated
@property (retain, nonatomic) NSString *dSID; // ivar: _dSID
@property (nonatomic) BOOL hasAaIsManaged;
@property (nonatomic) BOOL hasAaPrimaryAccount;
@property (readonly, nonatomic) BOOL hasAltDSID;
@property (nonatomic) BOOL hasAuthenticated;
@property (readonly, nonatomic) BOOL hasDSID;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasType;
@property (readonly, nonatomic) BOOL hasUsername;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *type; // ivar: _type
@property (retain, nonatomic) NSString *username; // ivar: _username


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