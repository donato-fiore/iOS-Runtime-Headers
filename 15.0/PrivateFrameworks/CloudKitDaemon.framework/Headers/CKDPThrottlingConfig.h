// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDPTHROTTLINGCONFIG_H
#define CKDPTHROTTLINGCONFIG_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "CKDPThrottlingConfigCriteria.h"
#import "CKDPThrottlingConfigRateLimit.h"

@interface CKDPThrottlingConfig : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) CKDPThrottlingConfigCriteria *criteria; // ivar: _criteria
@property (readonly, nonatomic) BOOL hasCriteria;
@property (readonly, nonatomic) BOOL hasLabel;
@property (readonly, nonatomic) BOOL hasRateLimit;
@property (nonatomic) BOOL hasTtlSec;
@property (retain, nonatomic) NSString *label; // ivar: _label
@property (retain, nonatomic) CKDPThrottlingConfigRateLimit *rateLimit; // ivar: _rateLimit
@property (nonatomic) int ttlSec; // ivar: _ttlSec


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