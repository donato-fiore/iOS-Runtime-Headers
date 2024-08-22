// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGDATADETECTORMATCH_H
#define SGDATADETECTORMATCH_H

@class NSDate, NSTimeZone, NSString, SGPostalAddressComponents;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SGDataDetectorMatch : NSObject <NSSecureCoding>



@property (readonly, nonatomic) BOOL allDay; // ivar: _allDay
@property (readonly, nonatomic) BOOL approximateTime; // ivar: _approximateTime
@property (readonly, nonatomic) NSDate *detectedDate; // ivar: _detectedDate
@property (readonly, nonatomic) NSDate *detectedEndDate; // ivar: _detectedEndDate
@property (readonly, nonatomic) NSTimeZone *detectedEndTimeZone; // ivar: _detectedEndTimeZone
@property (readonly, nonatomic) NSTimeZone *detectedTimeZone; // ivar: _detectedTimeZone
@property (readonly, nonatomic) BOOL inferredDate; // ivar: _inferredDate
@property (readonly, nonatomic) _NSRange labelRange; // ivar: _labelRange
@property (readonly, nonatomic) NSString *labelString; // ivar: _labelString
@property (readonly, nonatomic) unsigned int matchType; // ivar: _matchType
@property (readonly, nonatomic) int parsecDomain; // ivar: _parsecDomain
@property (readonly, nonatomic) NSString *parsecWikidataQid; // ivar: _parsecWikidataQid
@property (readonly, nonatomic) BOOL partialDate; // ivar: _partialDate
@property (readonly, nonatomic) SGPostalAddressComponents *postalAddressComponents; // ivar: _postalAddressComponents
@property (readonly, nonatomic) _NSRange range; // ivar: _range
@property (readonly, nonatomic) _NSRange valueRange; // ivar: _valueRange
@property (readonly, nonatomic) NSString *valueString; // ivar: _valueString


+(?)approximateTimeForDataDetectorResult;
+(?)inferredDateForDataDetectorResult;
+(?)partialDateForDataDetectorResult;
+(BOOL)stringHasDatesOrTimes:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)_detectionsInPlainText:(id)arg0 withEligibleRegions:(id)arg1 ddSignature:(struct _NSRange *)arg2 baseDate:(id)arg3 ;
+(id)detectionsAndSignatureInText:(id)arg0 eligibleRegions:(id)arg1 baseDate:(id)arg2 ;
+(id)detectionsInPlainText:(id)arg0 baseDate:(id)arg1 ;
+(id)detectionsInPlainText:(id)arg0 withEligibleRegions:(id)arg1 ;
+(id)detectionsInPlainText:(id)arg0 withEligibleRegions:(id)arg1 baseDate:(id)arg2 ;
+(void)resetUnusedScannersForTesting;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDataDetectorMatch:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDetectedDate:(id)arg0 detectedTimeZone:(id)arg1 detectedEndDate:(id)arg2 detectedEndTimeZone:(id)arg3 matchType:(unsigned int)arg4 range:(struct _NSRange )arg5 labelRange:(struct _NSRange )arg6 labelString:(id)arg7 valueRange:(struct _NSRange )arg8 valueString:(id)arg9 allDay:(BOOL)arg10 inferredDate:(BOOL)arg11 approximateTime:(BOOL)arg12 partialDate:(BOOL)arg13 ;
-(id)initWithLookupHintInDomain:(int)arg0 range:(struct _NSRange )arg1 labelRange:(struct _NSRange )arg2 labelString:(id)arg3 valueRange:(struct _NSRange )arg4 valueString:(id)arg5 qid:(id)arg6 ;
-(id)initWithMatchType:(unsigned int)arg0 range:(struct _NSRange )arg1 labelRange:(struct _NSRange )arg2 labelString:(id)arg3 valueRange:(struct _NSRange )arg4 valueString:(id)arg5 ;
-(id)initWithMatchType:(unsigned int)arg0 range:(struct _NSRange )arg1 labelRange:(struct _NSRange )arg2 labelString:(id)arg3 valueRange:(struct _NSRange )arg4 valueString:(id)arg5 postalAddressComponents:(id)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif