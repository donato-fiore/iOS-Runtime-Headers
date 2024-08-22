// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PAPBLOCATIONACCESS_H
#define PAPBLOCATIONACCESS_H

@class PBCodable;
@protocol NSCopying;


#import "PAPBAccess.h"

@interface PAPBLocationAccess : PBCodable <NSCopying>



@property (retain, nonatomic) PAPBAccess *access; // ivar: _access
@property (readonly, nonatomic) BOOL hasAccess;


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