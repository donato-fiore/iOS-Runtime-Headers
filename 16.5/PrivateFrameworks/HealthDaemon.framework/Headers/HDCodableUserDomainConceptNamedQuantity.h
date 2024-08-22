// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCODABLEUSERDOMAINCONCEPTNAMEDQUANTITY_H
#define HDCODABLEUSERDOMAINCONCEPTNAMEDQUANTITY_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface HDCodableUserDomainConceptNamedQuantity : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL deleted; // ivar: _deleted
@property (nonatomic) BOOL hasDeleted;
@property (readonly, nonatomic) BOOL hasName;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasType;
@property (readonly, nonatomic) BOOL hasUnit;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) BOOL hasVersion;
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (nonatomic) NSInteger type; // ivar: _type
@property (retain, nonatomic) NSString *unit; // ivar: _unit
@property (nonatomic) CGFloat value; // ivar: _value
@property (nonatomic) NSInteger version; // ivar: _version


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