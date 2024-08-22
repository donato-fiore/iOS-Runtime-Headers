// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDPZONESAVERESPONSE_H
#define CKDPZONESAVERESPONSE_H

@class PBCodable;
@protocol NSCopying;


#import "CKDPZoneCapabilities.h"

@interface CKDPZoneSaveResponse : PBCodable <NSCopying>



@property (retain, nonatomic) CKDPZoneCapabilities *capabilities; // ivar: _capabilities
@property (readonly, nonatomic) BOOL hasCapabilities;


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