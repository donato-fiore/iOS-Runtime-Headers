// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICIAMTRIGGERCONDITION_H
#define ICIAMTRIGGERCONDITION_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface ICIAMTriggerCondition : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (nonatomic) int comparisonType; // ivar: _comparisonType
@property (nonatomic) int dataType; // ivar: _dataType
@property (readonly, nonatomic) BOOL hasBundleIdentifier;
@property (nonatomic) BOOL hasComparisonType;
@property (nonatomic) BOOL hasDataType;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (nonatomic) BOOL hasKind;
@property (nonatomic) BOOL hasTriggerConditionType;
@property (readonly, nonatomic) BOOL hasTriggerValue;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) int kind; // ivar: _kind
@property (nonatomic) int triggerConditionType; // ivar: _triggerConditionType
@property (retain, nonatomic) NSString *triggerValue; // ivar: _triggerValue


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)comparisonTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataTypeAsString:(int)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)kindAsString:(int)arg0 ;
-(id)triggerConditionTypeAsString:(int)arg0 ;
-(int)StringAsComparisonType:(id)arg0 ;
-(int)StringAsDataType:(id)arg0 ;
-(int)StringAsKind:(id)arg0 ;
-(int)StringAsTriggerConditionType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif