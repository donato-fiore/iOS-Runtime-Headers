// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCODABLEUSERDOMAINCONCEPTLOCALIZEDSTRINGPROPERTY_H
#define HDCODABLEUSERDOMAINCONCEPTLOCALIZEDSTRINGPROPERTY_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface HDCodableUserDomainConceptLocalizedStringProperty : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL deleted; // ivar: _deleted
@property (nonatomic) BOOL hasDeleted;
@property (readonly, nonatomic) BOOL hasLocale;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasType;
@property (nonatomic) BOOL hasVersion;
@property (retain, nonatomic) NSString *locale; // ivar: _locale
@property (retain, nonatomic) NSString *stringValue; // ivar: _stringValue
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (nonatomic) NSInteger type; // ivar: _type
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