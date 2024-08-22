// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSPPRIVACYPROXYPOLICYTIERMAP_H
#define NSPPRIVACYPROXYPOLICYTIERMAP_H

@class PBCodable;
@protocol NSCopying;


#import "NSPPrivacyProxyPolicy.h"

@interface NSPPrivacyProxyPolicyTierMap : PBCodable <NSCopying>



@property (retain, nonatomic) NSPPrivacyProxyPolicy *policy; // ivar: _policy
@property (nonatomic) int tier; // ivar: _tier


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)tierAsString:(int)arg0 ;
-(int)StringAsTier:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif