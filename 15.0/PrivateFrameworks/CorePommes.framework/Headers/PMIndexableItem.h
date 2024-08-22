// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PMINDEXABLEITEM_H
#define PMINDEXABLEITEM_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "PMCard.h"

@interface PMIndexableItem : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *attributes; // ivar: _attributes
@property (retain, nonatomic) PMCard *card; // ivar: _card
@property (retain, nonatomic) NSString *domainIdentifier; // ivar: _domainIdentifier
@property (nonatomic) NSInteger expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic) BOOL hasCard;
@property (readonly, nonatomic) BOOL hasDomainIdentifier;
@property (nonatomic) BOOL hasExpirationDate;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier


-(BOOL)boolValueForKey:(int)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(CGFloat)doubleValueForKey:(int)arg0 ;
-(NSInteger)intValueForKey:(int)arg0 ;
-(NSUInteger)hash;
-(float)floatValueForKey:(int)arg0 ;
-(id)attributeForKey:(int)arg0 ;
-(id)attributesAtIndex:(NSUInteger)arg0 ;
-(id)attributesForKey:(int)arg0 ;
-(id)bytesValueForKey:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)personValueForKey:(int)arg0 ;
-(id)personValuesForKey:(int)arg0 ;
-(id)stringValueForKey:(int)arg0 ;
-(id)stringValuesForKey:(int)arg0 ;
-(void)addAttributeWithKey:(int)arg0 boolValue:(BOOL)arg1 ;
-(void)addAttributeWithKey:(int)arg0 bytesValue:(id)arg1 ;
-(void)addAttributeWithKey:(int)arg0 doubleValue:(CGFloat)arg1 ;
-(void)addAttributeWithKey:(int)arg0 floatValue:(float)arg1 ;
-(void)addAttributeWithKey:(int)arg0 intValue:(NSInteger)arg1 ;
-(void)addAttributeWithKey:(int)arg0 personValue:(id)arg1 ;
-(void)addAttributeWithKey:(int)arg0 personValues:(id)arg1 ;
-(void)addAttributeWithKey:(int)arg0 stringValue:(id)arg1 ;
-(void)addAttributeWithKey:(int)arg0 stringValues:(id)arg1 ;
-(void)addAttributes:(id)arg0 ;
-(void)addPersonsWithKey:(int)arg0 emails:(id)arg1 ;
-(void)clearAttributes;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif