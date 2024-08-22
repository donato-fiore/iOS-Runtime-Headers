// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBDATASTRINGLIST_H
#define _INPBDATASTRINGLIST_H

@class PBCodable, NSArray, NSString;
@protocol _INPBDataStringList, NSSecureCoding, NSCopying;


#import "_INPBCondition.h"

@interface _INPBDataStringList : PBCodable <_INPBDataStringList, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _INPBCondition *conditionType; // ivar: _conditionType
@property (copy, nonatomic) NSArray *dataStrings; // ivar: _dataStrings
@property (readonly, nonatomic) NSUInteger dataStringsCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasConditionType;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(Class)dataStringType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataStringAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)addDataString:(id)arg0 ;
-(void)clearDataStrings;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif