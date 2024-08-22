// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCDADOCUMENTSAMPLE_H
#define HKCDADOCUMENTSAMPLE_H



#import "HKDocumentSample.h"
#import "HKCDADocument.h"

@interface HKCDADocumentSample : HKDocumentSample {
    NSInteger _omittedContentFlags;
}


@property (readonly) HKCDADocument *document; // ivar: _document


+(BOOL)_isConcreteObjectClass;
+(BOOL)_isValidCDAKeyPath:(id)arg0 ;
+(BOOL)_isValidOperatorType:(NSUInteger)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)CDADocumentSampleWithData:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 metadata:(id)arg3 validationError:(*id)arg4 ;
+(id)_comparisonExpressionForValue:(id)arg0 operatorType:(NSUInteger)arg1 ;
+(id)_globStringToRegexString:(id)arg0 ;
-(BOOL)_predicateMatchForKeyPath:(id)arg0 pattern:(id)arg1 ;
-(BOOL)_validateDocumentContentWithError:(*id)arg0 ;
-(BOOL)prepareForDelivery:(*id)arg0 ;
-(BOOL)prepareForSaving:(*id)arg0 ;
-(NSInteger)_omittedContentFlags;
-(id)_fieldValueForKeyPath:(id)arg0 ;
-(id)_validateWithConfiguration:(struct HKObjectValidationConfiguration )arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)_applyPropertiesWithOmittedFlags:(NSInteger)arg0 compressedDocumentData:(id)arg1 title:(id)arg2 patientName:(id)arg3 authorName:(id)arg4 custodianName:(id)arg5 ;
-(void)_processDocumentData:(id)arg0 extractedFields:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif