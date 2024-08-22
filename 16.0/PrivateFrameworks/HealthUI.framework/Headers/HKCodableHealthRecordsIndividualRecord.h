// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKCODABLEHEALTHRECORDSINDIVIDUALRECORD_H
#define HKCODABLEHEALTHRECORDSINDIVIDUALRECORD_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface HKCodableHealthRecordsIndividualRecord : PBCodable <NSCopying>

 {
    APPLE_120 _has;
}


@property (retain, nonatomic) NSMutableArray *codes; // ivar: _codes
@property (nonatomic) CGFloat dateData; // ivar: _dateData
@property (nonatomic) BOOL hasDateData;
@property (readonly, nonatomic) BOOL hasProviderURI;
@property (readonly, nonatomic) BOOL hasRecordTitle;
@property (readonly, nonatomic) BOOL hasRecordUUID;
@property (readonly, nonatomic) BOOL hasTextualValue;
@property (readonly, nonatomic) BOOL hasUcumUnitString;
@property (retain, nonatomic) NSString *providerURI; // ivar: _providerURI
@property (retain, nonatomic) NSString *recordTitle; // ivar: _recordTitle
@property (retain, nonatomic) NSString *recordUUID; // ivar: _recordUUID
@property (retain, nonatomic) NSString *textualValue; // ivar: _textualValue
@property (retain, nonatomic) NSString *ucumUnitString; // ivar: _ucumUnitString
@property (retain, nonatomic) NSMutableArray *valueWithRanges; // ivar: _valueWithRanges


+(Class)codeType;
+(Class)valueWithRangeType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)codeAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)valueWithRangeAtIndex:(NSUInteger)arg0 ;
-(void)addCode:(id)arg0 ;
-(void)addValueWithRange:(id)arg0 ;
-(void)clearCodes;
-(void)clearValueWithRanges;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif