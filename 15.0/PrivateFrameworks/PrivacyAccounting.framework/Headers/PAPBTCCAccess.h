// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PAPBTCCACCESS_H
#define PAPBTCCACCESS_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "PAPBAccess.h"

@interface PAPBTCCAccess : PBCodable <NSCopying>



@property (retain, nonatomic) PAPBAccess *access; // ivar: _access
@property (readonly, nonatomic) BOOL hasAccess;
@property (readonly, nonatomic) BOOL hasTccService;
@property (retain, nonatomic) NSString *tccService; // ivar: _tccService


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif