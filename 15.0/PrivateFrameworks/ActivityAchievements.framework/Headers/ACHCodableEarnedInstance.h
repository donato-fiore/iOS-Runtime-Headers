// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACHCODABLEEARNEDINSTANCE_H
#define ACHCODABLEEARNEDINSTANCE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface ACHCodableEarnedInstance : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat createdDate; // ivar: _createdDate
@property (nonatomic) NSInteger creatorDevice; // ivar: _creatorDevice
@property (retain, nonatomic) NSString *earnedDateComponents; // ivar: _earnedDateComponents
@property (nonatomic) BOOL hasCreatedDate;
@property (nonatomic) BOOL hasCreatorDevice;
@property (readonly, nonatomic) BOOL hasEarnedDateComponents;
@property (readonly, nonatomic) BOOL hasTemplateUniqueName;
@property (nonatomic) BOOL hasValue;
@property (readonly, nonatomic) BOOL hasValueUnitString;
@property (retain, nonatomic) NSString *templateUniqueName; // ivar: _templateUniqueName
@property (nonatomic) CGFloat value; // ivar: _value
@property (retain, nonatomic) NSString *valueUnitString; // ivar: _valueUnitString


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