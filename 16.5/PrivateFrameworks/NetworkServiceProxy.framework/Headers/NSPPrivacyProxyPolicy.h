// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSPPRIVACYPROXYPOLICY_H
#define NSPPRIVACYPROXYPOLICY_H

@class PBCodable;
@protocol NSCopying;



@interface NSPPrivacyProxyPolicy : PBCodable <NSCopying>

 {
    ? _conditions;
}


@property (readonly, nonatomic) *int conditions;
@property (readonly, nonatomic) NSUInteger conditionsCount;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)conditionsAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsConditions:(id)arg0 ;
-(int)conditionsAtIndex:(NSUInteger)arg0 ;
-(void)addConditions:(int)arg0 ;
-(void)clearConditions;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif