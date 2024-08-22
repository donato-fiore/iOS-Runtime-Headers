// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDPRECORDFIELDVALUEENCRYPTEDVALUE_H
#define CKDPRECORDFIELDVALUEENCRYPTEDVALUE_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "CKDPDate.h"
#import "CKDPLocationCoordinate.h"
#import "CKDPRecordReference.h"

@interface CKDPRecordFieldValueEncryptedValue : PBCodable <NSCopying>

 {
    ? _doubleListValues;
    ? _signedListValues;
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *dateListValues; // ivar: _dateListValues
@property (retain, nonatomic) CKDPDate *dateValue; // ivar: _dateValue
@property (readonly, nonatomic) *CGFloat doubleListValues;
@property (readonly, nonatomic) NSUInteger doubleListValuesCount;
@property (nonatomic) CGFloat doubleValue; // ivar: _doubleValue
@property (readonly, nonatomic) BOOL hasDateValue;
@property (nonatomic) BOOL hasDoubleValue;
@property (readonly, nonatomic) BOOL hasLocationValue;
@property (readonly, nonatomic) BOOL hasReferenceValue;
@property (nonatomic) BOOL hasSignedValue;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (retain, nonatomic) NSMutableArray *locationListValues; // ivar: _locationListValues
@property (retain, nonatomic) CKDPLocationCoordinate *locationValue; // ivar: _locationValue
@property (retain, nonatomic) CKDPRecordReference *referenceValue; // ivar: _referenceValue
@property (readonly, nonatomic) *NSInteger signedListValues;
@property (readonly, nonatomic) NSUInteger signedListValuesCount;
@property (nonatomic) NSInteger signedValue; // ivar: _signedValue
@property (retain, nonatomic) NSMutableArray *stringListValues; // ivar: _stringListValues
@property (retain, nonatomic) NSString *stringValue; // ivar: _stringValue


+(Class)dateListValueType;
+(Class)locationListValueType;
+(Class)stringListValueType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(CGFloat)doubleListValueAtIndex:(NSUInteger)arg0 ;
-(NSInteger)signedListValueAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dateListValueAtIndex:(NSUInteger)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)locationListValueAtIndex:(NSUInteger)arg0 ;
-(id)stringListValueAtIndex:(NSUInteger)arg0 ;
-(void)addDateListValue:(id)arg0 ;
-(void)addDoubleListValue:(CGFloat)arg0 ;
-(void)addLocationListValue:(id)arg0 ;
-(void)addSignedListValue:(NSInteger)arg0 ;
-(void)addStringListValue:(id)arg0 ;
-(void)clearDateListValues;
-(void)clearDoubleListValues;
-(void)clearLocationListValues;
-(void)clearSignedListValues;
-(void)clearStringListValues;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif