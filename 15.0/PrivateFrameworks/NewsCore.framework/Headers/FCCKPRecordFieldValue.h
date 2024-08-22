// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCCKPRECORDFIELDVALUE_H
#define FCCKPRECORDFIELDVALUE_H

@class PBCodable, NSData, NSMutableArray, NSString;
@protocol NSCopying;


#import "FCCKPDate.h"
#import "FCCKPRecordReference.h"

@interface FCCKPRecordFieldValue : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *bytesValue; // ivar: _bytesValue
@property (retain, nonatomic) FCCKPDate *dateValue; // ivar: _dateValue
@property (nonatomic) CGFloat doubleValue; // ivar: _doubleValue
@property (readonly, nonatomic) BOOL hasBytesValue;
@property (readonly, nonatomic) BOOL hasDateValue;
@property (nonatomic) BOOL hasDoubleValue;
@property (readonly, nonatomic) BOOL hasReferenceValue;
@property (nonatomic) BOOL hasSignedValue;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (nonatomic) BOOL hasType;
@property (retain, nonatomic) NSMutableArray *listValues; // ivar: _listValues
@property (retain, nonatomic) FCCKPRecordReference *referenceValue; // ivar: _referenceValue
@property (nonatomic) NSInteger signedValue; // ivar: _signedValue
@property (retain, nonatomic) NSString *stringValue; // ivar: _stringValue
@property (nonatomic) int type; // ivar: _type


+(Class)listValueType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)listValueAtIndex:(NSUInteger)arg0 ;
-(void)addListValue:(id)arg0 ;
-(void)clearListValues;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif