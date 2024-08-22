// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OTACCOUNTSETTINGS_H
#define OTACCOUNTSETTINGS_H

@class PBCodable;
@protocol NSCopying;


#import "OTWalrus.h"
#import "OTWebAccess.h"

@interface OTAccountSettings : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasWalrus;
@property (readonly, nonatomic) BOOL hasWebAccess;
@property (retain, nonatomic) OTWalrus *walrus; // ivar: _walrus
@property (retain, nonatomic) OTWebAccess *webAccess; // ivar: _webAccess


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