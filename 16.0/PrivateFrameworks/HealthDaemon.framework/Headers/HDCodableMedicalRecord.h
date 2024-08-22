// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCODABLEMEDICALRECORD_H
#define HDCODABLEMEDICALRECORD_H

@class PBCodable, NSString;
@protocol HDDecoding, NSCopying;


#import "HDCodableFHIRIdentifier.h"
#import "HDCodableSample.h"
#import "HDCodableSemanticDate.h"

@interface HDCodableMedicalRecord : PBCodable <HDDecoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *country; // ivar: _country
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enteredInError; // ivar: _enteredInError
@property (nonatomic) NSInteger extractionVersion; // ivar: _extractionVersion
@property (retain, nonatomic) HDCodableFHIRIdentifier *fHIRIdentifier; // ivar: _fHIRIdentifier
@property (readonly, nonatomic) BOOL hasCountry;
@property (nonatomic) BOOL hasEnteredInError;
@property (nonatomic) BOOL hasExtractionVersion;
@property (readonly, nonatomic) BOOL hasFHIRIdentifier;
@property (readonly, nonatomic) BOOL hasLocale;
@property (nonatomic) BOOL hasModifiedDate;
@property (readonly, nonatomic) BOOL hasNote;
@property (readonly, nonatomic) BOOL hasSample;
@property (readonly, nonatomic) BOOL hasSortDate;
@property (nonatomic) BOOL hasState;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *locale; // ivar: _locale
@property (nonatomic) CGFloat modifiedDate; // ivar: _modifiedDate
@property (retain, nonatomic) NSString *note; // ivar: _note
@property (retain, nonatomic) HDCodableSample *sample; // ivar: _sample
@property (retain, nonatomic) HDCodableSemanticDate *sortDate; // ivar: _sortDate
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;


-(BOOL)applyToObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif