// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBAVASSETKEY_H
#define NTPBAVASSETKEY_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;


#import "NTPBDate.h"

@interface NTPBAVAssetKey : PBCodable <NSCopying>



@property (retain, nonatomic) NTPBDate *createdAt; // ivar: _createdAt
@property (retain, nonatomic) NTPBDate *expiresAt; // ivar: _expiresAt
@property (readonly, nonatomic) BOOL hasCreatedAt;
@property (readonly, nonatomic) BOOL hasExpiresAt;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasKeyData;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSData *keyData; // ivar: _keyData


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif