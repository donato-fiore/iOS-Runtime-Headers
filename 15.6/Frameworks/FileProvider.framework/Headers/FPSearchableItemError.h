// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FPSEARCHABLEITEMERROR_H
#define FPSEARCHABLEITEMERROR_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface FPSearchableItemError : PBCodable <NSCopying>



@property (nonatomic) NSInteger code; // ivar: _code
@property (retain, nonatomic) NSString *customDomain; // ivar: _customDomain
@property (nonatomic) int domain; // ivar: _domain
@property (readonly, nonatomic) BOOL hasCustomDomain;


+(id)errorFromString:(id)arg0 ;
+(id)stringFromError:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)domainAsString:(int)arg0 ;
-(int)StringAsDomain:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif